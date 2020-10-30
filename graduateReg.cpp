#include "graduateReg.h"

QDBLite::DB db1;
graduateReg::graduateReg() {
    db1.dbstate = db1.Connect();
}
void graduateReg::gradRegVer(QString em, QString cn, QString dn, int yg, QString qt, QString sk) {
    bool reg = false;
    if (cn != NULL && dn!=NULL && yg!=NULL && sk != NULL) {
       db1.db.transaction();
        bool reg = false;
        QSqlQuery cQuery(db1.db);
        cQuery.exec("SELECT RegID FROM Registration WHERE Email ='" + em + "'");
        if (cQuery.next()) {
            int RegID = cQuery.value(0).toInt();
            cQuery.prepare("SELECT RegID FROM Company_Registration WHERE RegID = (:id);");
            cQuery.bindValue(":id", RegID);
            if (cQuery.exec()) {
                if (cQuery.next()) { reg = true; }
            }
            if (reg) {
                //QMessageBox::warning(this, " error", "Username already exists, choose another one or go to login");
                qDebug() << "The username exist";
            }
            else {
                cQuery.prepare("INSERT INTO Graduate_Registration(RegID, CollegeName,DegreeName,QualificationType,YearOfGraduating,Skills)"
                    " VALUES(?,?,?,?,?,?);");
                cQuery.addBindValue(RegID);
                cQuery.addBindValue(cn);
                cQuery.addBindValue(dn);
                cQuery.addBindValue(qt);
                cQuery.addBindValue(yg);
                cQuery.addBindValue(sk);

                //check if registered
                if (cQuery.exec()) {
                    QMessageBox::information(this, "Success", "Registered Successfully");
                    on_backtoLoginBtn_clicked();
                }
                else {
                   qDebug()<<  cQuery.lastError().text();
                }
            }
        }
        db1.db.commit();
    }else  QMessageBox::warning(this, "Error", "All fields are equired");
}

