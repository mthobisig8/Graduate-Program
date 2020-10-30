#include "graduate_program.h"
#include "companyReg.h"
#include "graduateReg.h"
#include "qdb.h"

QDBLite::DB db;


Graduate_Program::Graduate_Program(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::Graduate_ProgramClass)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    db.dbstate = db.Connect();
    if (db.dbstate) { ui->lblStatus->setText("Connected to DB"); }
    else { ui->lblStatus->setText("Not Connected to DB"); }

    

    
}
Graduate_Program::~Graduate_Program() {
    delete ui;
    db.Disconnect();
}

int Graduate_Program::idReturn() {
    username = ui->emailBox->text();

    QSqlQuery qry(db.db);

    qry.prepare("SELECT RegID FROM Registration WHERE Email =(:un);");
    qry.bindValue(":un", username);
    if (qry.exec()) {
        if (qry.next()) {
            int TempId = qry.value(0).toInt();
            return TempId;
        }
    }
    else qDebug() << qry.lastError().text();
}

//=============================================Mthobisi============================================//
void Graduate_Program::insertIntoReg() {
    bool reg = false;
    email = ui->emailBox_2->text();
    contactName = ui->fullnamesBox->text();
    contactNum = ui->contactnumBox->text(); // save it as varcharactor 
    province = ui->provinceBox->text();
    city = ui->cityBox->text();
    industry = ui->industryBox->currentText();
    password = ui->pwdBox_2->text();
    QString img = picName;
    QFile file(img);
    if (!file.open(QIODevice::ReadOnly))return;
    QByteArray inByte = file.readAll();
    QSqlQuery cQuery(db.db);
    cQuery.prepare("SELECT Email FROM Registration WHERE Email= (:un);");
    cQuery.bindValue(":un", email);
    if (cQuery.exec()) {
        if (cQuery.next()) { reg = true; }
    }
    if (reg) {
        QMessageBox::warning(this, " error", "Username already exists, choose another one or go to login");
    }
    cQuery.prepare("INSERT INTO Registration(Email,ContactName,ContactNumber,Province,City,Password,Industry,Profile)"
        "VALUES(?,?,?,?,?,?,?,?);");
    cQuery.addBindValue(email);
    cQuery.addBindValue(contactName);
    cQuery.addBindValue(contactNum);
    cQuery.addBindValue(province);
    cQuery.addBindValue(city);
    cQuery.addBindValue(password);
    cQuery.addBindValue(industry);
    cQuery.addBindValue(inByte);

    if (cQuery.exec()) {
        qDebug() << "executed successfully";
    }
    else {
        qDebug() << "Error" + cQuery.lastError().text();
        qDebug() << email;
    }

}
bool Graduate_Program::RegVer() {
    email = ui->emailBox_2->text();
    contactName = ui->fullnamesBox->text();
    contactNum = ui->contactnumBox->text(); // save it as varcharactor 
    province = ui->provinceBox->text();
    city = ui->cityBox->text();
    //industry = ui->industryBox->currentText();
    password = ui->pwdBox_2->text();
    if ((email == NULL) && (contactName == NULL) && (contactNum == NULL) && (province == NULL) && (password == NULL ) && (city == NULL) && (password == NULL)) {
        return true;
    }
    else {
        return false;
    }
}
bool Graduate_Program::Login(QString u, QString p) {
    bool exists = false;
    //return false;
    QSqlQuery checkQuery(db.db);
    checkQuery.prepare("SELECT Email, Password FROM Registration WHERE Email= (:un) AND Password = (:pw)");
    checkQuery.bindValue(":un", u);
    checkQuery.bindValue(":pw", p);

    if (checkQuery.exec()) {
        if (checkQuery.next()) {
            exists = true;
        }
    }

    return exists;

}
void Graduate_Program::on_registrationBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(1);
}
void Graduate_Program::on_backtoLoginBtn_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
    qDebug() << idReturn();
}
void Graduate_Program::on_companyRegBtn_clicked() {
    bool check = RegVer();
    if (check) {
        QMessageBox::warning(this, "Error", "Enter all required fields");
    }
    else {
        ui->stackedWidget->setCurrentIndex(3);
    }
}
void Graduate_Program::on_graduateRegBtn_clicked() {

    check = RegVer();
    if (check) {
        QMessageBox::warning(this, "Error", "Enter all required fields");
    }
    else {
        ui->stackedWidget->setCurrentIndex(2);
    }
}
void Graduate_Program::on_backBtn_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
}
void Graduate_Program::on_backBtn_2_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
}
void Graduate_Program::on_completeRegBtn_clicked() {
    collageName = ui->collegenameBox->text();
    degreeName = ui->degreenameBox->text();
    yearOfGraduation = (ui->yearofGraduatingBox->text()).toInt();
    qualificationType = ui->qualificationtypeBox->currentText(); //dropdown
    skills = ui->skillsBox->text();
    email = ui->emailBox_2->text();
    insertIntoReg();
    graduateReg gradObj;
    gradObj.gradRegVer(email, collageName, degreeName, yearOfGraduation, qualificationType, skills);
}
void Graduate_Program::on_completeRegBtn_2_clicked() {
    companyName = ui->companynameBox->text();
    about = ui->aboutBox->text();
    email = ui->emailBox_2->text();
    insertIntoReg();
    companyReg compObj;
    compObj.compRegVer(email, companyName, about);
}
void Graduate_Program::on_loginBtn_clicked() {
    username = ui->emailBox->text();
    password = ui->pwdBox->text();
    tempID = idReturn();
    check = Login(username, password);
    if (!db.dbstate) {
        qDebug() << "No connection to the Database";
    }
    else {
        if (username == NULL || password == NULL) {
            QMessageBox::warning(this, "Error", "Enter all required fields");
        }
        else
        {
            if (check) {
                QSqlQuery rQuery(db.db), cQuery(db.db), gQuery(db.db);
                rQuery.exec("SELECT RegID FROM Registration WHERE Email = '" + username + "'");
                if (rQuery.next()) {
                    int RegID = rQuery.value(0).toInt();
                    cQuery.prepare("SELECT RegID FROM Company_Registration WHERE RegID = (:id);");
                    cQuery.bindValue(":id", RegID);
                    gQuery.prepare("SELECT RegID FROM Graduate_Registration WHERE RegID = (:id);");
                    gQuery.bindValue(":id", RegID);
                    qDebug() << RegID;
                    cQuery.exec();
                    gQuery.exec();
                    if (cQuery.exec() || gQuery.exec()) {
                        if (cQuery.next() || gQuery.next()) {
                            int gRegID = gQuery.value(0).toInt();
                            int cRegID = cQuery.value(0).toInt();
                            qDebug() << RegID << gRegID << cRegID;
                            if (RegID == gRegID) {
                                QMessageBox::information(this, "Logged in successfully", "Hi " + username + " You are registered as graduate");
                                ui->stackedWidget->setCurrentIndex(5);
                                //=================================================Thabie==============================//
                                QSqlQuery RegQuery(db.db); //QSqlQuery qry
                                QSqlQuery qry1t(db.db);
                                QSqlQuery eventsQuery(db.db);

                                QSqlQueryModel* model = new QSqlQueryModel();
                                qDebug() << "Connected to the database ";
                                RegQuery.prepare("SELECT Email,ContactName,ContactNumber,Province,City FROM Registration WHERE REgID =(:id);");
                                RegQuery.bindValue(":id", tempID);

                                //Graduate table 
                                eventsQuery.prepare("SELECT * FROM Upcoming_Events");
                                eventsQuery.exec();

                                qry1t.prepare("SELECT CollegeName,DegreeName,QualificationType,Skills FROM Graduate_Registration WHERE RegID = (:id);");
                                qry1t.bindValue(":id", tempID);

                                if (RegQuery.exec() && qry1t.exec()) {
                                    if (RegQuery.next() && qry1t.next()) {

                                        model->setQuery(eventsQuery);
                                        ui->tableView_2->setModel(model);
                                        QString TempEmail = RegQuery.value(0).toString();
                                        QString TempName = RegQuery.value(1).toString();
                                        QString TempNum = RegQuery.value(2).toString();
                                        QString TempProv = RegQuery.value(3).toString();
                                        QString TempCity = RegQuery.value(4).toString();

                                        QString TempCn = qry1t.value(0).toString();
                                        QString TempDegree = qry1t.value(1).toString();
                                        QString TempQ = qry1t.value(2).toString();
                                        QString TempSkils = qry1t.value(3).toString();

                                        ui->email_2->setText(TempEmail);
                                        ui->institution_2->setText(TempCn);
                                        ui->DegreeName_2->setText(TempDegree);
                                        ui->city->setText(TempCity);
                                        ui->province->setText(TempProv);
                                        ui->name->setText(TempName);
                                        ui->number->setText(TempNum);
                                        ui->qType_2->setText(TempQ);
                                    }
                                }
                                else qDebug() << RegQuery.lastError().text() << qry1t.lastError().text();
                            }
                            else if (RegID == cRegID) {
                                QMessageBox::information(this, "Logged in successfully", "Hi " + username + " You are registered as campany");
                                ui->stackedWidget->setCurrentIndex(4);
                                //========================================Vusi===================================/
                                editable(false);
                                QSqlQuery qry(db.db);
                                QSqlQuery qry1(db.db);
                                QSqlQuery qry2(db.db);
                                // display values on the ui
                                     //check the registration page first 
                                qry.prepare("SELECT Email,ContactName,ContactNumber,Province,City,Industry,Profile FROM Registration WHERE RegID = (:id);");
                                qry.bindValue(":id", tempID);
                                //check for compnay name on the company registration table
                                qry1.prepare("SELECT CompanyName,JobPosition,JobDescription,ClosingDate FROM Company_Registration WHERE RegID =(:id)");
                                qry1.bindValue(":id", tempID);

                                // check if values exist
                                if (qry.exec() && qry1.exec()) {
                                    if (qry.next() && qry1.next()) {
                                        QString TempEmail = qry.value(0).toString();
                                        QString TempName = qry.value(1).toString();
                                        QString TempNum = qry.value(2).toString();
                                        QString TempProv = qry.value(3).toString();
                                        QString TempCity = qry.value(4).toString();
                                        QString tempInd = qry.value(5).toString();
                                        if (qry.value(6).isNull()) {
                                            QPixmap oimagemap(picDir);
                                            ui->profile_lbl->setPixmap(oimagemap);
                                            ui->profile_lbl->setScaledContents(true);
                                            ui->profile_lbl->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
                                        }
                                        else {
                                            QByteArray bimagebyte = qry.value(6).toByteArray();
                                            QPixmap bimagemap;
                                            bimagemap.loadFromData(bimagebyte);
                                            ui->profile_lbl->setPixmap(bimagemap);
                                            ui->profile_lbl->setScaledContents(true);
                                            ui->profile_lbl->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
                                        }

                                        QString TempCompName = qry1.value(0).toString();
                                        QString tempPos = qry1.value(1).toString();
                                        QString tempDesc = qry1.value(2).toString();
                                        QString tempDate = qry1.value(3).toString();
                                        QDate date = QDate::fromString(tempDate, "dd/MMM/yyyy");

                                        qDebug() << date.day();
                                        if (qry1.value(1).isNull()) {
                                            ui->eventTitle->setText("No Up comming event ");
                                            ui->eventDesc->hide();
                                            ui->eventDate->hide();
                                            ui->noOfdasyLbl->hide();
                                            ui->daysLbl->hide();
                                        }
                                        else {
                                            ui->eventTitle->setText(tempPos);
                                            ui->eventDesc->setText(tempDesc);
                                            ui->eventDate->setText(tempDate);
                                            if (date < QDate::currentDate()) {
                                                ui->daysLbl->setText(0);
                                            }
                                            else {
                                                ui->daysLbl->setText(QString::number(QDate::currentDate().daysTo(date)));
                                            }
                                        }
                                        ui->emailLbl->setText(TempEmail);
                                        ui->name->setText(TempName);
                                        ui->number->setText(TempNum);
                                        ui->province->setText(TempProv);
                                        ui->city->setText(TempCity);
                                        ui->compName->setText(TempCompName);
                                        ui->indLbl->setText(tempInd);
                                    }
                                }
                                else {
                                    qDebug() << qry.lastError().text();
                                }
                            }
                            else {
                                QMessageBox::information(this, "Logged in successfully", "You are registered but information is incomplete");

                            }
                        }
                    }
                }
            }
            else {
                QMessageBox::warning(this, "Error", "No username or pasword matches the entries");
                ui->pwdBox->clear();
            }
        }
    }
}
void Graduate_Program::on_uploadBtn_clicked() {
    picName = QFileDialog::getOpenFileName(this, tr("Open Image"), "/", tr("Image Files(*.jpg *.png *.bmp)"));
    ui->picLabel->setText("<img src=\"file:///" + this->picName + "\" alt=\"Image read error!\" height=\"128\" width=\"128\" />");
    //for me (developer ) :)
    qDebug() << ui->picLabel->text();
    qDebug() << "file:///" + picName;
}

//============================================vusi==============================//
void Graduate_Program::editable(bool set) {
    QPalette palette;
    if (set == false) {
        palette.setColor(QPalette::Base, Qt::gray);
        ui->name->setPalette(palette);
        ui->number->setPalette(palette);
        ui->province->setPalette(palette);
        ui->city->setPalette(palette);
        ui->compName->setPalette(palette);
    }
    else {
        palette.setColor(QPalette::Base, Qt::white);
        ui->name->setPalette(palette);
        ui->number->setPalette(palette);
        ui->province->setPalette(palette);
        ui->city->setPalette(palette);
        ui->compName->setPalette(palette);
    }
}
void Graduate_Program::on_editBtn_clicked() {
    bool set = false;
    ui->name->setReadOnly(set);
    ui->number->setReadOnly(set);
    ui->province->setReadOnly(set);
    ui->city->setReadOnly(set);
    ui->compName->setReadOnly(set);
    editable(!set); //change the fields to white 
}
void Graduate_Program::on_profile_updateBtn_clicked() {
    tempID = idReturn();
    QSqlQuery qry(db.db);
    picName = QFileDialog::getOpenFileName(this, tr("Open Image"), "/", tr("Image Files(*.jpg *.png *.bmp)"));
    QPixmap oimagemap(picName);
    ui->profile_lbl->setPixmap(oimagemap);
    ui->profile_lbl->setScaledContents(true);
    ui->profile_lbl->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QString img = picName;
    QFile file(img);
    if (!file.open(QIODevice::ReadOnly))return;
    QByteArray inByte = file.readAll();

    qry.prepare("UPDATE Registration SET profile = (:pf) WHERE RegID = (:id);");
    qry.bindValue(":pf", inByte);
    qry.bindValue(":id", tempID);

    if (qry.exec()) {
        QMessageBox::information(this, "Updated", "Profile changed");
    }
    else QMessageBox::critical(this, "Error", "Cant update the profile at the moment please check again later");
}
void Graduate_Program::on_updateBtn_clicked() {
    tempID = idReturn();
    QSqlQuery qry(db.db), qry1(db.db);
    bool set = true;
    if (ui->name->isReadOnly()) { // name was chosen randomly, anny of the field could have achieved the same work 
        QMessageBox::critical(this, "Error", "Click Edit button first to update");
    }
    else { //if the edit button is clicked 
        //check if isModified
        if (ui->name->isModified() || ui->number->isModified() || ui->province->isModified() || ui->city->isModified() || ui->compName->isModified()) {
            contactName = ui->name->text();
            contactNum = ui->number->text();
            province = ui->province->text();
            companyName = ui->compName->text();
            city = ui->city->text();
            qry.prepare("UPDATE Registration SET ContactName = (:cn),ContactNumber =(:cnum),Province =(:pr),City = (:ct)"
                "WHERE RegID = (:id);");
            qry.bindValue(":id", tempID);
            qry.bindValue(":cn", contactName);
            qry.bindValue(":cnum", contactNum);
            qry.bindValue(":pr", province);
            qry.bindValue(":ct", city);

            qry1.prepare("UPDATE Company_Registration SET CompnayName = (:nm) WHERE RegID = (:id);");
            qry1.bindValue(":nm", companyName);
            qry1.bindValue(":id", tempID);
            if (!qry.exec() && !qry1.exec()) {
                qDebug() << qry.lastError().text();
                QMessageBox::critical(this, "error", "We encountered an error while trying to update,try again later ");
            }
            else
                QMessageBox::information(this, "Updated", "Database Updated");
        }
        else QMessageBox::warning(this, "Warning", "Nothing was changed");
    }
    // disable again 
    ui->name->setReadOnly(set);
    ui->number->setReadOnly(set);
    ui->province->setReadOnly(set);
    ui->city->setReadOnly(set);
    ui->compName->setReadOnly(set);
    editable(!set); //change to grey
}
void Graduate_Program::on_postBtn_clicked() {
    tempID = idReturn();
    date = ui->closingDate->date().toString("dd/MMM/yyyy");
    jobPos = ui->jobPos->text();
    jobDesc = ui->JobDesc->text();
    aggrigade = (ui->minPercentage->text()).toDouble();
    qualificationType = ui->qBox->currentText();

    QSqlQuery qry(db.db);

    if (jobPos == NULL && jobDesc == NULL && aggrigade == NULL) {
        QMessageBox::warning(this, "Error", "All Fields are required ");
    }
    else {
        if (ui->closingDate->date() < QDate::currentDate()) {
            QMessageBox::warning(this, "Error", "Please choose a valid date");
        }
        else {
            qry.prepare("UPDATE Company_Registration SET JobPosition =(:pos),JobDescription=(:desc),Qualification=(:qua),Aggrigade=(:agg),ClosingDate=(:dt) WHERE RegID =(:id);");
            qry.bindValue(":id", tempID);
            qry.bindValue(":pos", jobPos);
            qry.bindValue(":desc", jobDesc);
            qry.bindValue(":qua", qualificationType);
            qry.bindValue(":agg", aggrigade);
            qry.bindValue(":dt", date);

            if (qry.exec()) {
                QMessageBox::information(this, "Message", "Post Created");
            }
            else {
                QMessageBox::critical(this, "Error", "Encountered an error while creating the post please try again later");
                qDebug() << qry.lastError().text();
            }

            //updating the even on real time

            qry.prepare("SELECT CompanyName,JobPosition,JobDescription,ClosingDate FROM Company_Registration WHERE RegID =(:id)");
            qry.bindValue(":id", tempID);
            if (qry.exec()) {
                if (qry.next()) {

                    QString tempPos = qry.value(0).toString();
                    QString tempDesc = qry.value(1).toString();
                    QString tempDate = qry.value(2).toString();
                    QDate date = QDate::fromString(tempDate, "dd/MMM/yyyy");

                    if (qry.value(1).isNull()) {
                        ui->eventTitle->setText("No Up comming event ");
                        ui->eventDesc->hide();
                        ui->eventTitle->hide();
                        ui->noOfdasyLbl->hide();
                        ui->daysLbl->hide();
                    }
                    else {
                        ui->eventTitle->setText(tempPos);
                        ui->eventDesc->setText(tempDesc);
                        ui->eventDate->setText(tempDate);

                        if (date < QDate::currentDate()) {
                            ui->daysLbl->setText(0);
                        }
                        else {
                            ui->daysLbl->setText(QString::number(QDate::currentDate().daysTo(date)));
                        }
                    }
                }
            }
            else qDebug() << qry.lastError().text();
        }
    }
}

//=============================================Thabie===========================//
void Graduate_Program::on_editBtn_3_clicked() {
    bool set = false;
    ui->name->setReadOnly(set);
    ui->city->setReadOnly(set);
    ui->DegreeName_2->setReadOnly(set);
    ui->number->setReadOnly(set);
    ui->province->setReadOnly(set);
    ui->city->setReadOnly(set);
    ui->qType_2->setReadOnly(set);
}
void Graduate_Program::on_ApplyBtn_2_clicked() {

    QString idNumber = ui->ID_2->text(), str1 = ui->streetAddress1_2->text(), postCode = ui->postCode_2->text();
    QString str2 = ui->streetAddress2_2->text(), job = ui->jobPreference_2->text();
    if (idNumber.isEmpty() || str1.isEmpty() || str2.isEmpty() || job.isEmpty() || postCode.isEmpty()) {
        ui->ApplyStatus_2->setText("Fill all Required Fields before Applying!!!");
    }
    else {
        int IDlength = idNumber.size();
        if (IDlength != 13) {
            ui->ApplyStatus_2->setText("Incorrect ID Entered!");
        }
        else {
            QSqlQuery InsertGraduate(db.db);
            QString id = ui->ID_2->text(), str1 = ui->streetAddress1_2->text(), str2 = ui->streetAddress2_2->text(), zip = ui->postCode_2->text(), jobPref = ui->jobPreference_2->text();
            InsertGraduate.prepare(("INSERT INTO Graduate_Application(IDnumber, StrAddr1,StrAddr2,Country,ZipCode,JobPref) VALUES(?,?,?,?,?)"));
            InsertGraduate.addBindValue(id);
            InsertGraduate.addBindValue(str1);
            InsertGraduate.addBindValue(str2);
            InsertGraduate.addBindValue(zip);
            ui->ApplyStatus_2->setText("You have Applied Succesfully!!!");
        }

    }
}
void Graduate_Program::on_UploadCVBtn_2_clicked() {
    QFileDialog::getOpenFileName(this, tr("Open Document"), "/", tr("Image Files(*.docx *.pdf*)"));
}
void Graduate_Program::on_updateBtn_3_clicked() {

    QString idNumber = ui->ID_2->text(), str1 = ui->streetAddress1_2->text(), postCode = ui->postCode_2->text();
    QString str2 = ui->streetAddress2_2->text(), job = ui->jobPreference_2->text();
    if (idNumber.isEmpty() || str1.isEmpty() || str2.isEmpty() || job.isEmpty() || postCode.isEmpty()) {
        ui->ApplyStatus_2->setText("Fill all required Fields before Updating!!");
    }
    else {
        ui->ApplyStatus_2->setText("Details Updated Succesful!!");
    }

}
void Graduate_Program::on_UploadPictureBtn_2_clicked() {
    picName = QFileDialog::getOpenFileName(this, tr("Open Image"), "/", tr("Image Files(*.png *.jpg* .bnp*)"));
    QPixmap oimagemp(picName);
    ui->PicHolder_2->setPixmap(picName);
    ui->PicHolder_2->setScaledContents(true);
    ui->PicHolder_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

}