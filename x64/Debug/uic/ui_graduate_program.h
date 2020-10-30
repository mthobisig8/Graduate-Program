/********************************************************************************
** Form generated from reading UI file 'graduate_program.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADUATE_PROGRAM_H
#define UI_GRADUATE_PROGRAM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Graduate_ProgramClass
{
public:
    QWidget *centralWidget;
    QFrame *mainFrame;
    QStackedWidget *stackedWidget;
    QWidget *login;
    QFrame *loginFrame;
    QLabel *registrationLabel;
    QLabel *label;
    QLineEdit *emailBox;
    QLabel *emailLabel;
    QLineEdit *pwdBox;
    QLabel *emailLabel_3;
    QPushButton *loginBtn;
    QPushButton *registrationBtn;
    QLabel *lblStatus;
    QWidget *registration;
    QFrame *regFrame;
    QLabel *registrationLabel_2;
    QLineEdit *emailBox_2;
    QLineEdit *pwdBox_2;
    QLineEdit *contactnumBox;
    QLabel *emailLabel_2;
    QLabel *emailLabel_4;
    QLabel *emailLabel_5;
    QLineEdit *provinceBox;
    QLabel *emailLabel_6;
    QLineEdit *cityBox;
    QLabel *emailLabel_7;
    QLabel *emailLabel_8;
    QComboBox *industryBox;
    QLabel *picLabel;
    QPushButton *uploadBtn;
    QPushButton *backtoLoginBtn;
    QPushButton *graduateRegBtn;
    QPushButton *companyRegBtn;
    QLabel *errorLabel;
    QLineEdit *fullnamesBox;
    QLabel *emailLabel_9;
    QWidget *gradReg;
    QFrame *graduateFrame;
    QLineEdit *collegenameBox;
    QLabel *emailLabel_10;
    QLabel *registrationLabel_3;
    QLabel *emailLabel_11;
    QLabel *emailLabel_12;
    QLineEdit *skillsBox;
    QLabel *emailLabel_13;
    QLineEdit *yearofGraduatingBox;
    QLineEdit *degreenameBox;
    QLabel *emailLabel_14;
    QComboBox *qualificationtypeBox;
    QLabel *errorLabel_2;
    QPushButton *completeRegBtn;
    QPushButton *backBtn;
    QWidget *compReg;
    QFrame *CampanyFrame;
    QLabel *registrationLabel_4;
    QLabel *errorLabel_3;
    QLineEdit *companynameBox;
    QLabel *emailLabel_15;
    QLabel *emailLabel_16;
    QLineEdit *aboutBox;
    QPushButton *completeRegBtn_2;
    QPushButton *backBtn_2;
    QWidget *Company;
    QTabWidget *tabWidget;
    QWidget *Home;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *emailLbl;
    QLabel *label_3;
    QLineEdit *name;
    QLineEdit *number;
    QLabel *label_4;
    QLineEdit *province;
    QLabel *label_5;
    QLineEdit *city;
    QLabel *label_6;
    QLineEdit *compName;
    QLabel *label_7;
    QPushButton *editBtn;
    QPushButton *updateBtn;
    QLabel *indLbl;
    QLabel *label_11;
    QLabel *profile_lbl;
    QPushButton *profile_updateBtn;
    QGroupBox *groupBox_2;
    QDateTimeEdit *closingDate;
    QLabel *label_8;
    QLineEdit *jobPos;
    QLabel *label_9;
    QLabel *label_12;
    QLineEdit *JobDesc;
    QLabel *label_10;
    QLabel *label_13;
    QLineEdit *minPercentage;
    QPushButton *postBtn;
    QComboBox *qBox;
    QGroupBox *groupBox_3;
    QLabel *eventTitle;
    QLabel *eventDesc;
    QLabel *eventDate;
    QLabel *noOfdasyLbl;
    QLabel *daysLbl;
    QLabel *status;
    QWidget *applications;
    QTableView *applicarionsView;
    QWidget *Graduate;
    QFrame *frame_2;
    QGroupBox *groupBox_8;
    QLabel *label_33;
    QLineEdit *name_3;
    QLabel *label_34;
    QLineEdit *number_3;
    QLabel *label_35;
    QLineEdit *province_3;
    QLineEdit *city_3;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *email_2;
    QLabel *label_38;
    QLineEdit *streetAddress1_2;
    QLabel *label_39;
    QLineEdit *streetAddress2_2;
    QLabel *label_40;
    QComboBox *comboBox_4;
    QLabel *label_41;
    QLineEdit *postCode_2;
    QLabel *label_42;
    QLabel *label_43;
    QLineEdit *ID_2;
    QGroupBox *groupBox_9;
    QLabel *label_44;
    QComboBox *comboBox_5;
    QLabel *label_45;
    QLineEdit *jobPreference_2;
    QGroupBox *groupBox_10;
    QLabel *label_46;
    QComboBox *comboBox_6;
    QLabel *label_47;
    QLabel *institution_2;
    QLabel *label_48;
    QLineEdit *DegreeName_2;
    QLabel *label_49;
    QLineEdit *qType_2;
    QPushButton *UploadCVBtn_2;
    QPushButton *ApplyBtn_2;
    QLabel *label_50;
    QLabel *PicHolder_2;
    QPushButton *updateBtn_3;
    QPushButton *editBtn_3;
    QPushButton *UploadPictureBtn_2;
    QTableView *tableView_2;
    QLabel *label_51;
    QLabel *ApplyStatus_2;
    QGroupBox *groupBox_11;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;

    void setupUi(QMainWindow *Graduate_ProgramClass)
    {
        if (Graduate_ProgramClass->objectName().isEmpty())
            Graduate_ProgramClass->setObjectName(QString::fromUtf8("Graduate_ProgramClass"));
        Graduate_ProgramClass->resize(820, 840);
        Graduate_ProgramClass->setMinimumSize(QSize(820, 840));
        Graduate_ProgramClass->setMaximumSize(QSize(820, 840));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Graduate_ProgramClass->setPalette(palette);
        centralWidget = new QWidget(Graduate_ProgramClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        centralWidget->setPalette(palette1);
        mainFrame = new QFrame(centralWidget);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setGeometry(QRect(0, 0, 820, 840));
        mainFrame->setMinimumSize(QSize(820, 840));
        mainFrame->setMaximumSize(QSize(820, 840));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        stackedWidget = new QStackedWidget(mainFrame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 820, 840));
        stackedWidget->setMinimumSize(QSize(820, 840));
        stackedWidget->setMaximumSize(QSize(820, 840));
        login = new QWidget();
        login->setObjectName(QString::fromUtf8("login"));
        loginFrame = new QFrame(login);
        loginFrame->setObjectName(QString::fromUtf8("loginFrame"));
        loginFrame->setGeometry(QRect(90, 120, 643, 474));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Raised);
        registrationLabel = new QLabel(loginFrame);
        registrationLabel->setObjectName(QString::fromUtf8("registrationLabel"));
        registrationLabel->setGeometry(QRect(280, 10, 101, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        registrationLabel->setFont(font);
        registrationLabel->setStyleSheet(QString::fromUtf8("align:center;\n"
"adjustAlign:center;"));
        label = new QLabel(loginFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 70, 131, 131));
        label->setStyleSheet(QString::fromUtf8("border-radius:65px;\n"
"background-image:url(user.png);"));
        emailBox = new QLineEdit(loginFrame);
        emailBox->setObjectName(QString::fromUtf8("emailBox"));
        emailBox->setGeometry(QRect(180, 230, 250, 40));
        emailBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        emailLabel = new QLabel(loginFrame);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setGeometry(QRect(180, 200, 47, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Montserrat"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        emailLabel->setFont(font1);
        pwdBox = new QLineEdit(loginFrame);
        pwdBox->setObjectName(QString::fromUtf8("pwdBox"));
        pwdBox->setGeometry(QRect(180, 310, 250, 40));
        pwdBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        pwdBox->setEchoMode(QLineEdit::Password);
        emailLabel_3 = new QLabel(loginFrame);
        emailLabel_3->setObjectName(QString::fromUtf8("emailLabel_3"));
        emailLabel_3->setGeometry(QRect(180, 280, 71, 20));
        emailLabel_3->setFont(font1);
        loginBtn = new QPushButton(loginFrame);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(140, 390, 131, 35));
        loginBtn->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        registrationBtn = new QPushButton(loginFrame);
        registrationBtn->setObjectName(QString::fromUtf8("registrationBtn"));
        registrationBtn->setGeometry(QRect(350, 390, 131, 35));
        registrationBtn->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        lblStatus = new QLabel(loginFrame);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(60, 450, 91, 16));
        stackedWidget->addWidget(login);
        registration = new QWidget();
        registration->setObjectName(QString::fromUtf8("registration"));
        regFrame = new QFrame(registration);
        regFrame->setObjectName(QString::fromUtf8("regFrame"));
        regFrame->setGeometry(QRect(110, 90, 643, 474));
        regFrame->setMinimumSize(QSize(643, 474));
        regFrame->setMaximumSize(QSize(643, 474));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        regFrame->setPalette(palette2);
        regFrame->setFrameShape(QFrame::StyledPanel);
        regFrame->setFrameShadow(QFrame::Raised);
        registrationLabel_2 = new QLabel(regFrame);
        registrationLabel_2->setObjectName(QString::fromUtf8("registrationLabel_2"));
        registrationLabel_2->setGeometry(QRect(220, 10, 171, 31));
        registrationLabel_2->setFont(font);
        registrationLabel_2->setStyleSheet(QString::fromUtf8("align:center;\n"
"adjustAlign:center;"));
        emailBox_2 = new QLineEdit(regFrame);
        emailBox_2->setObjectName(QString::fromUtf8("emailBox_2"));
        emailBox_2->setGeometry(QRect(50, 110, 250, 40));
        emailBox_2->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        pwdBox_2 = new QLineEdit(regFrame);
        pwdBox_2->setObjectName(QString::fromUtf8("pwdBox_2"));
        pwdBox_2->setGeometry(QRect(50, 270, 250, 40));
        pwdBox_2->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        pwdBox_2->setEchoMode(QLineEdit::Password);
        contactnumBox = new QLineEdit(regFrame);
        contactnumBox->setObjectName(QString::fromUtf8("contactnumBox"));
        contactnumBox->setGeometry(QRect(50, 190, 250, 40));
        contactnumBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        contactnumBox->setInputMethodHints(Qt::ImhNone);
        emailLabel_2 = new QLabel(regFrame);
        emailLabel_2->setObjectName(QString::fromUtf8("emailLabel_2"));
        emailLabel_2->setGeometry(QRect(50, 80, 47, 20));
        emailLabel_2->setFont(font1);
        emailLabel_4 = new QLabel(regFrame);
        emailLabel_4->setObjectName(QString::fromUtf8("emailLabel_4"));
        emailLabel_4->setGeometry(QRect(50, 160, 121, 20));
        emailLabel_4->setFont(font1);
        emailLabel_5 = new QLabel(regFrame);
        emailLabel_5->setObjectName(QString::fromUtf8("emailLabel_5"));
        emailLabel_5->setGeometry(QRect(50, 240, 71, 20));
        emailLabel_5->setFont(font1);
        provinceBox = new QLineEdit(regFrame);
        provinceBox->setObjectName(QString::fromUtf8("provinceBox"));
        provinceBox->setGeometry(QRect(350, 190, 250, 40));
        provinceBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        emailLabel_6 = new QLabel(regFrame);
        emailLabel_6->setObjectName(QString::fromUtf8("emailLabel_6"));
        emailLabel_6->setGeometry(QRect(350, 320, 71, 20));
        emailLabel_6->setFont(font1);
        cityBox = new QLineEdit(regFrame);
        cityBox->setObjectName(QString::fromUtf8("cityBox"));
        cityBox->setGeometry(QRect(350, 270, 250, 40));
        cityBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        emailLabel_7 = new QLabel(regFrame);
        emailLabel_7->setObjectName(QString::fromUtf8("emailLabel_7"));
        emailLabel_7->setGeometry(QRect(350, 240, 121, 20));
        emailLabel_7->setFont(font1);
        emailLabel_8 = new QLabel(regFrame);
        emailLabel_8->setObjectName(QString::fromUtf8("emailLabel_8"));
        emailLabel_8->setGeometry(QRect(350, 160, 71, 20));
        emailLabel_8->setFont(font1);
        industryBox = new QComboBox(regFrame);
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->addItem(QString());
        industryBox->setObjectName(QString::fromUtf8("industryBox"));
        industryBox->setGeometry(QRect(350, 350, 250, 40));
        picLabel = new QLabel(regFrame);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));
        picLabel->setGeometry(QRect(50, 320, 125, 121));
        picLabel->setStyleSheet(QString::fromUtf8("background-image:url(user.png);"));
        uploadBtn = new QPushButton(regFrame);
        uploadBtn->setObjectName(QString::fromUtf8("uploadBtn"));
        uploadBtn->setGeometry(QRect(200, 350, 75, 35));
        uploadBtn->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        backtoLoginBtn = new QPushButton(regFrame);
        backtoLoginBtn->setObjectName(QString::fromUtf8("backtoLoginBtn"));
        backtoLoginBtn->setGeometry(QRect(200, 410, 75, 35));
        backtoLoginBtn->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:white;\n"
""));
        graduateRegBtn = new QPushButton(regFrame);
        graduateRegBtn->setObjectName(QString::fromUtf8("graduateRegBtn"));
        graduateRegBtn->setGeometry(QRect(480, 410, 131, 35));
        graduateRegBtn->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        companyRegBtn = new QPushButton(regFrame);
        companyRegBtn->setObjectName(QString::fromUtf8("companyRegBtn"));
        companyRegBtn->setGeometry(QRect(320, 410, 131, 35));
        companyRegBtn->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        errorLabel = new QLabel(regFrame);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setGeometry(QRect(200, 50, 221, 20));
        errorLabel->setStyleSheet(QString::fromUtf8("color:red;\n"
"align:center"));
        fullnamesBox = new QLineEdit(regFrame);
        fullnamesBox->setObjectName(QString::fromUtf8("fullnamesBox"));
        fullnamesBox->setGeometry(QRect(350, 110, 250, 40));
        fullnamesBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        emailLabel_9 = new QLabel(regFrame);
        emailLabel_9->setObjectName(QString::fromUtf8("emailLabel_9"));
        emailLabel_9->setGeometry(QRect(350, 80, 141, 20));
        emailLabel_9->setFont(font1);
        stackedWidget->addWidget(registration);
        gradReg = new QWidget();
        gradReg->setObjectName(QString::fromUtf8("gradReg"));
        graduateFrame = new QFrame(gradReg);
        graduateFrame->setObjectName(QString::fromUtf8("graduateFrame"));
        graduateFrame->setGeometry(QRect(120, 170, 643, 474));
        graduateFrame->setFrameShape(QFrame::StyledPanel);
        graduateFrame->setFrameShadow(QFrame::Raised);
        collegenameBox = new QLineEdit(graduateFrame);
        collegenameBox->setObjectName(QString::fromUtf8("collegenameBox"));
        collegenameBox->setGeometry(QRect(50, 150, 250, 40));
        collegenameBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        emailLabel_10 = new QLabel(graduateFrame);
        emailLabel_10->setObjectName(QString::fromUtf8("emailLabel_10"));
        emailLabel_10->setGeometry(QRect(50, 120, 121, 20));
        emailLabel_10->setFont(font1);
        registrationLabel_3 = new QLabel(graduateFrame);
        registrationLabel_3->setObjectName(QString::fromUtf8("registrationLabel_3"));
        registrationLabel_3->setGeometry(QRect(160, 30, 311, 31));
        registrationLabel_3->setFont(font);
        registrationLabel_3->setStyleSheet(QString::fromUtf8("align:center;\n"
"adjustAlign:center;"));
        emailLabel_11 = new QLabel(graduateFrame);
        emailLabel_11->setObjectName(QString::fromUtf8("emailLabel_11"));
        emailLabel_11->setGeometry(QRect(50, 220, 141, 20));
        emailLabel_11->setFont(font1);
        emailLabel_12 = new QLabel(graduateFrame);
        emailLabel_12->setObjectName(QString::fromUtf8("emailLabel_12"));
        emailLabel_12->setGeometry(QRect(50, 320, 47, 20));
        emailLabel_12->setFont(font1);
        skillsBox = new QLineEdit(graduateFrame);
        skillsBox->setObjectName(QString::fromUtf8("skillsBox"));
        skillsBox->setGeometry(QRect(50, 350, 250, 40));
        skillsBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        emailLabel_13 = new QLabel(graduateFrame);
        emailLabel_13->setObjectName(QString::fromUtf8("emailLabel_13"));
        emailLabel_13->setGeometry(QRect(350, 120, 101, 20));
        emailLabel_13->setFont(font1);
        yearofGraduatingBox = new QLineEdit(graduateFrame);
        yearofGraduatingBox->setObjectName(QString::fromUtf8("yearofGraduatingBox"));
        yearofGraduatingBox->setGeometry(QRect(350, 250, 250, 40));
        yearofGraduatingBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        degreenameBox = new QLineEdit(graduateFrame);
        degreenameBox->setObjectName(QString::fromUtf8("degreenameBox"));
        degreenameBox->setGeometry(QRect(350, 150, 250, 40));
        degreenameBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        emailLabel_14 = new QLabel(graduateFrame);
        emailLabel_14->setObjectName(QString::fromUtf8("emailLabel_14"));
        emailLabel_14->setGeometry(QRect(350, 220, 141, 20));
        emailLabel_14->setFont(font1);
        qualificationtypeBox = new QComboBox(graduateFrame);
        qualificationtypeBox->addItem(QString());
        qualificationtypeBox->addItem(QString());
        qualificationtypeBox->addItem(QString());
        qualificationtypeBox->addItem(QString());
        qualificationtypeBox->addItem(QString());
        qualificationtypeBox->setObjectName(QString::fromUtf8("qualificationtypeBox"));
        qualificationtypeBox->setGeometry(QRect(50, 250, 250, 40));
        errorLabel_2 = new QLabel(graduateFrame);
        errorLabel_2->setObjectName(QString::fromUtf8("errorLabel_2"));
        errorLabel_2->setGeometry(QRect(180, 70, 221, 20));
        errorLabel_2->setStyleSheet(QString::fromUtf8("color:red;\n"
"align:center"));
        completeRegBtn = new QPushButton(graduateFrame);
        completeRegBtn->setObjectName(QString::fromUtf8("completeRegBtn"));
        completeRegBtn->setGeometry(QRect(500, 350, 131, 35));
        completeRegBtn->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        backBtn = new QPushButton(graduateFrame);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(360, 350, 131, 35));
        backBtn->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        stackedWidget->addWidget(gradReg);
        compReg = new QWidget();
        compReg->setObjectName(QString::fromUtf8("compReg"));
        CampanyFrame = new QFrame(compReg);
        CampanyFrame->setObjectName(QString::fromUtf8("CampanyFrame"));
        CampanyFrame->setGeometry(QRect(130, 140, 643, 474));
        CampanyFrame->setFrameShape(QFrame::StyledPanel);
        CampanyFrame->setFrameShadow(QFrame::Raised);
        registrationLabel_4 = new QLabel(CampanyFrame);
        registrationLabel_4->setObjectName(QString::fromUtf8("registrationLabel_4"));
        registrationLabel_4->setGeometry(QRect(220, 20, 311, 31));
        registrationLabel_4->setFont(font);
        registrationLabel_4->setStyleSheet(QString::fromUtf8("align:center;\n"
"adjustAlign:center;"));
        errorLabel_3 = new QLabel(CampanyFrame);
        errorLabel_3->setObjectName(QString::fromUtf8("errorLabel_3"));
        errorLabel_3->setGeometry(QRect(270, 70, 221, 20));
        errorLabel_3->setStyleSheet(QString::fromUtf8("color:red;\n"
"align:center"));
        companynameBox = new QLineEdit(CampanyFrame);
        companynameBox->setObjectName(QString::fromUtf8("companynameBox"));
        companynameBox->setGeometry(QRect(50, 150, 250, 40));
        companynameBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        emailLabel_15 = new QLabel(CampanyFrame);
        emailLabel_15->setObjectName(QString::fromUtf8("emailLabel_15"));
        emailLabel_15->setGeometry(QRect(50, 120, 121, 20));
        emailLabel_15->setFont(font1);
        emailLabel_16 = new QLabel(CampanyFrame);
        emailLabel_16->setObjectName(QString::fromUtf8("emailLabel_16"));
        emailLabel_16->setGeometry(QRect(50, 220, 151, 20));
        emailLabel_16->setFont(font1);
        aboutBox = new QLineEdit(CampanyFrame);
        aboutBox->setObjectName(QString::fromUtf8("aboutBox"));
        aboutBox->setGeometry(QRect(50, 250, 250, 100));
        aboutBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"padding: 5px;\n"
"background:rgb(239, 239, 239)"));
        completeRegBtn_2 = new QPushButton(CampanyFrame);
        completeRegBtn_2->setObjectName(QString::fromUtf8("completeRegBtn_2"));
        completeRegBtn_2->setGeometry(QRect(380, 180, 131, 35));
        completeRegBtn_2->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        backBtn_2 = new QPushButton(CampanyFrame);
        backBtn_2->setObjectName(QString::fromUtf8("backBtn_2"));
        backBtn_2->setGeometry(QRect(380, 250, 131, 35));
        backBtn_2->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        stackedWidget->addWidget(compReg);
        Company = new QWidget();
        Company->setObjectName(QString::fromUtf8("Company"));
        tabWidget = new QTabWidget(Company);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(110, 80, 610, 631));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        tabWidget->setPalette(palette3);
        Home = new QWidget();
        Home->setObjectName(QString::fromUtf8("Home"));
        frame = new QFrame(Home);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 610, 590));
        frame->setMinimumSize(QSize(610, 590));
        frame->setMaximumSize(QSize(610, 590));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        frame->setPalette(palette4);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 261, 281));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 47, 13));
        emailLbl = new QLabel(groupBox);
        emailLbl->setObjectName(QString::fromUtf8("emailLbl"));
        emailLbl->setGeometry(QRect(60, 20, 181, 16));
        emailLbl->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 71, 16));
        name = new QLineEdit(groupBox);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(100, 70, 151, 20));
        name->setReadOnly(true);
        number = new QLineEdit(groupBox);
        number->setObjectName(QString::fromUtf8("number"));
        number->setGeometry(QRect(100, 100, 151, 20));
        number->setReadOnly(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 71, 16));
        province = new QLineEdit(groupBox);
        province->setObjectName(QString::fromUtf8("province"));
        province->setGeometry(QRect(100, 130, 151, 20));
        province->setReadOnly(true);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 130, 71, 16));
        city = new QLineEdit(groupBox);
        city->setObjectName(QString::fromUtf8("city"));
        city->setGeometry(QRect(100, 160, 151, 20));
        city->setReadOnly(true);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 160, 71, 16));
        compName = new QLineEdit(groupBox);
        compName->setObjectName(QString::fromUtf8("compName"));
        compName->setGeometry(QRect(100, 190, 151, 20));
        compName->setReadOnly(true);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 190, 81, 16));
        editBtn = new QPushButton(groupBox);
        editBtn->setObjectName(QString::fromUtf8("editBtn"));
        editBtn->setGeometry(QRect(40, 230, 75, 31));
        editBtn->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 255, 0);\n"
"border-width:1px;\n"
"border-radius:4px;"));
        updateBtn = new QPushButton(groupBox);
        updateBtn->setObjectName(QString::fromUtf8("updateBtn"));
        updateBtn->setGeometry(QRect(160, 230, 75, 31));
        updateBtn->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 255, 0);\n"
"border-width:1px;\n"
"border-radius:4px;"));
        indLbl = new QLabel(groupBox);
        indLbl->setObjectName(QString::fromUtf8("indLbl"));
        indLbl->setGeometry(QRect(60, 40, 181, 16));
        indLbl->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 40, 47, 13));
        profile_lbl = new QLabel(frame);
        profile_lbl->setObjectName(QString::fromUtf8("profile_lbl"));
        profile_lbl->setGeometry(QRect(330, 50, 131, 141));
        profile_lbl->setPixmap(QPixmap(QString::fromUtf8(":/Company/user.png")));
        profile_updateBtn = new QPushButton(frame);
        profile_updateBtn->setObjectName(QString::fromUtf8("profile_updateBtn"));
        profile_updateBtn->setGeometry(QRect(470, 60, 81, 31));
        profile_updateBtn->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 255, 0);\n"
"border-width:1px;\n"
"border-radius:4px;"));
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 320, 351, 251));
        closingDate = new QDateTimeEdit(groupBox_2);
        closingDate->setObjectName(QString::fromUtf8("closingDate"));
        closingDate->setGeometry(QRect(140, 160, 171, 22));
        closingDate->setDate(QDate(2020, 8, 20));
        closingDate->setCalendarPopup(true);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 70, 81, 16));
        jobPos = new QLineEdit(groupBox_2);
        jobPos->setObjectName(QString::fromUtf8("jobPos"));
        jobPos->setGeometry(QRect(140, 40, 171, 20));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 40, 71, 16));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 160, 71, 16));
        JobDesc = new QLineEdit(groupBox_2);
        JobDesc->setObjectName(QString::fromUtf8("JobDesc"));
        JobDesc->setGeometry(QRect(140, 70, 171, 20));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 100, 71, 16));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 130, 101, 16));
        minPercentage = new QLineEdit(groupBox_2);
        minPercentage->setObjectName(QString::fromUtf8("minPercentage"));
        minPercentage->setGeometry(QRect(140, 130, 171, 20));
        postBtn = new QPushButton(groupBox_2);
        postBtn->setObjectName(QString::fromUtf8("postBtn"));
        postBtn->setGeometry(QRect(130, 200, 75, 31));
        postBtn->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 255, 0);\n"
"border-width:1px;\n"
"border-radius:4px;"));
        qBox = new QComboBox(groupBox_2);
        qBox->addItem(QString());
        qBox->addItem(QString());
        qBox->addItem(QString());
        qBox->addItem(QString());
        qBox->addItem(QString());
        qBox->setObjectName(QString::fromUtf8("qBox"));
        qBox->setGeometry(QRect(140, 100, 171, 21));
        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(400, 320, 191, 231));
        eventTitle = new QLabel(groupBox_3);
        eventTitle->setObjectName(QString::fromUtf8("eventTitle"));
        eventTitle->setGeometry(QRect(10, 30, 171, 16));
        eventDesc = new QLabel(groupBox_3);
        eventDesc->setObjectName(QString::fromUtf8("eventDesc"));
        eventDesc->setGeometry(QRect(10, 60, 171, 21));
        eventDate = new QLabel(groupBox_3);
        eventDate->setObjectName(QString::fromUtf8("eventDate"));
        eventDate->setGeometry(QRect(10, 100, 171, 16));
        noOfdasyLbl = new QLabel(groupBox_3);
        noOfdasyLbl->setObjectName(QString::fromUtf8("noOfdasyLbl"));
        noOfdasyLbl->setGeometry(QRect(10, 123, 111, 20));
        daysLbl = new QLabel(groupBox_3);
        daysLbl->setObjectName(QString::fromUtf8("daysLbl"));
        daysLbl->setGeometry(QRect(10, 140, 47, 13));
        status = new QLabel(frame);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(410, 560, 61, 16));
        tabWidget->addTab(Home, QString());
        applications = new QWidget();
        applications->setObjectName(QString::fromUtf8("applications"));
        applicarionsView = new QTableView(applications);
        applicarionsView->setObjectName(QString::fromUtf8("applicarionsView"));
        applicarionsView->setGeometry(QRect(80, 110, 431, 361));
        tabWidget->addTab(applications, QString());
        stackedWidget->addWidget(Company);
        Graduate = new QWidget();
        Graduate->setObjectName(QString::fromUtf8("Graduate"));
        frame_2 = new QFrame(Graduate);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 861, 881));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        groupBox_8 = new QGroupBox(frame_2);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(20, 60, 401, 391));
        groupBox_8->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_33 = new QLabel(groupBox_8);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(10, 90, 161, 21));
        name_3 = new QLineEdit(groupBox_8);
        name_3->setObjectName(QString::fromUtf8("name_3"));
        name_3->setGeometry(QRect(180, 90, 211, 21));
        name_3->setReadOnly(true);
        label_34 = new QLabel(groupBox_8);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(30, 350, 141, 16));
        number_3 = new QLineEdit(groupBox_8);
        number_3->setObjectName(QString::fromUtf8("number_3"));
        number_3->setGeometry(QRect(180, 350, 211, 20));
        number_3->setReadOnly(true);
        label_35 = new QLabel(groupBox_8);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(210, 300, 81, 20));
        province_3 = new QLineEdit(groupBox_8);
        province_3->setObjectName(QString::fromUtf8("province_3"));
        province_3->setGeometry(QRect(180, 280, 211, 20));
        province_3->setReadOnly(true);
        city_3 = new QLineEdit(groupBox_8);
        city_3->setObjectName(QString::fromUtf8("city_3"));
        city_3->setGeometry(QRect(180, 201, 211, 20));
        city_3->setReadOnly(true);
        label_36 = new QLabel(groupBox_8);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(210, 220, 111, 21));
        label_37 = new QLabel(groupBox_8);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(20, 30, 81, 21));
        email_2 = new QLabel(groupBox_8);
        email_2->setObjectName(QString::fromUtf8("email_2"));
        email_2->setGeometry(QRect(140, 30, 191, 16));
        label_38 = new QLabel(groupBox_8);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 120, 151, 20));
        streetAddress1_2 = new QLineEdit(groupBox_8);
        streetAddress1_2->setObjectName(QString::fromUtf8("streetAddress1_2"));
        streetAddress1_2->setGeometry(QRect(182, 120, 211, 21));
        label_39 = new QLabel(groupBox_8);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(210, 140, 151, 16));
        streetAddress2_2 = new QLineEdit(groupBox_8);
        streetAddress2_2->setObjectName(QString::fromUtf8("streetAddress2_2"));
        streetAddress2_2->setGeometry(QRect(180, 160, 211, 21));
        label_40 = new QLabel(groupBox_8);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(210, 180, 161, 20));
        comboBox_4 = new QComboBox(groupBox_8);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(180, 240, 211, 22));
        label_41 = new QLabel(groupBox_8);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(210, 260, 71, 21));
        postCode_2 = new QLineEdit(groupBox_8);
        postCode_2->setObjectName(QString::fromUtf8("postCode_2"));
        postCode_2->setGeometry(QRect(180, 320, 113, 20));
        label_42 = new QLabel(groupBox_8);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(310, 320, 71, 21));
        label_43 = new QLabel(groupBox_8);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(10, 60, 161, 20));
        ID_2 = new QLineEdit(groupBox_8);
        ID_2->setObjectName(QString::fromUtf8("ID_2"));
        ID_2->setGeometry(QRect(180, 60, 211, 20));
        groupBox_9 = new QGroupBox(frame_2);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(30, 450, 371, 121));
        groupBox_9->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_44 = new QLabel(groupBox_9);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(20, 70, 151, 16));
        comboBox_5 = new QComboBox(groupBox_9);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(190, 70, 161, 22));
        label_45 = new QLabel(groupBox_9);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(30, 30, 151, 16));
        jobPreference_2 = new QLineEdit(groupBox_9);
        jobPreference_2->setObjectName(QString::fromUtf8("jobPreference_2"));
        jobPreference_2->setGeometry(QRect(192, 30, 151, 20));
        groupBox_10 = new QGroupBox(frame_2);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(40, 570, 361, 141));
        groupBox_10->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_46 = new QLabel(groupBox_10);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(20, 100, 111, 31));
        comboBox_6 = new QComboBox(groupBox_10);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(170, 110, 181, 22));
        label_47 = new QLabel(groupBox_10);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(20, 20, 111, 31));
        institution_2 = new QLabel(groupBox_10);
        institution_2->setObjectName(QString::fromUtf8("institution_2"));
        institution_2->setGeometry(QRect(140, 20, 211, 31));
        label_48 = new QLabel(groupBox_10);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(20, 40, 141, 31));
        DegreeName_2 = new QLineEdit(groupBox_10);
        DegreeName_2->setObjectName(QString::fromUtf8("DegreeName_2"));
        DegreeName_2->setGeometry(QRect(170, 50, 181, 20));
        DegreeName_2->setReadOnly(true);
        label_49 = new QLabel(groupBox_10);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(20, 80, 161, 21));
        qType_2 = new QLineEdit(groupBox_10);
        qType_2->setObjectName(QString::fromUtf8("qType_2"));
        qType_2->setGeometry(QRect(170, 80, 181, 20));
        qType_2->setReadOnly(true);
        UploadCVBtn_2 = new QPushButton(frame_2);
        UploadCVBtn_2->setObjectName(QString::fromUtf8("UploadCVBtn_2"));
        UploadCVBtn_2->setGeometry(QRect(540, 620, 161, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        UploadCVBtn_2->setFont(font2);
        UploadCVBtn_2->setStyleSheet(QString::fromUtf8("background-color:#00ffff;\n"
"border-radius: 5px;"));
        ApplyBtn_2 = new QPushButton(frame_2);
        ApplyBtn_2->setObjectName(QString::fromUtf8("ApplyBtn_2"));
        ApplyBtn_2->setGeometry(QRect(550, 660, 151, 31));
        ApplyBtn_2->setFont(font2);
        ApplyBtn_2->setStyleSheet(QString::fromUtf8("background-color:#00ffff;\n"
"border-radius: 5px;"));
        label_50 = new QLabel(frame_2);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(50, 20, 261, 31));
        label_50->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        PicHolder_2 = new QLabel(frame_2);
        PicHolder_2->setObjectName(QString::fromUtf8("PicHolder_2"));
        PicHolder_2->setGeometry(QRect(620, 40, 141, 171));
        PicHolder_2->setPixmap(QPixmap(QString::fromUtf8("../../../../Desktop/mthobisi/Graduate/Graduate/user.png")));
        updateBtn_3 = new QPushButton(frame_2);
        updateBtn_3->setObjectName(QString::fromUtf8("updateBtn_3"));
        updateBtn_3->setGeometry(QRect(450, 150, 151, 31));
        updateBtn_3->setStyleSheet(QString::fromUtf8("background-color:#00ffff;\n"
"border-radius: 5px;"));
        editBtn_3 = new QPushButton(frame_2);
        editBtn_3->setObjectName(QString::fromUtf8("editBtn_3"));
        editBtn_3->setGeometry(QRect(450, 110, 151, 31));
        editBtn_3->setStyleSheet(QString::fromUtf8("background-color:red;\n"
"border-radius: 5px;"));
        UploadPictureBtn_2 = new QPushButton(frame_2);
        UploadPictureBtn_2->setObjectName(QString::fromUtf8("UploadPictureBtn_2"));
        UploadPictureBtn_2->setGeometry(QRect(450, 60, 151, 31));
        UploadPictureBtn_2->setFont(font2);
        UploadPictureBtn_2->setStyleSheet(QString::fromUtf8("background-color:#00ffff;\n"
"border-radius: 5px;"));
        tableView_2 = new QTableView(frame_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(460, 220, 321, 211));
        label_51 = new QLabel(frame_2);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(500, 190, 321, 31));
        label_51->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        ApplyStatus_2 = new QLabel(frame_2);
        ApplyStatus_2->setObjectName(QString::fromUtf8("ApplyStatus_2"));
        ApplyStatus_2->setGeometry(QRect(450, 20, 331, 31));
        ApplyStatus_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        groupBox_11 = new QGroupBox(frame_2);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(470, 450, 301, 151));
        groupBox_11->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        radioButton_5 = new QRadioButton(groupBox_11);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(20, 30, 141, 41));
        radioButton_5->setStyleSheet(QString::fromUtf8(""));
        radioButton_6 = new QRadioButton(groupBox_11);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(170, 40, 82, 21));
        radioButton_7 = new QRadioButton(groupBox_11);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(20, 90, 111, 17));
        radioButton_8 = new QRadioButton(groupBox_11);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(170, 90, 82, 17));
        stackedWidget->addWidget(Graduate);
        Graduate_ProgramClass->setCentralWidget(centralWidget);

        retranslateUi(Graduate_ProgramClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Graduate_ProgramClass);
    } // setupUi

    void retranslateUi(QMainWindow *Graduate_ProgramClass)
    {
        Graduate_ProgramClass->setWindowTitle(QCoreApplication::translate("Graduate_ProgramClass", "Graduate_Program", nullptr));
        registrationLabel->setText(QCoreApplication::translate("Graduate_ProgramClass", "Login", nullptr));
        label->setText(QString());
        emailBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Enter Your Email Address", nullptr));
        emailLabel->setText(QCoreApplication::translate("Graduate_ProgramClass", "Email", nullptr));
        pwdBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Enter Your Password", nullptr));
        emailLabel_3->setText(QCoreApplication::translate("Graduate_ProgramClass", "password", nullptr));
        loginBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "Login", nullptr));
        registrationBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "Registration", nullptr));
        lblStatus->setText(QCoreApplication::translate("Graduate_ProgramClass", "[+] status...", nullptr));
        registrationLabel_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "Registration", nullptr));
        emailBox_2->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Enter Your Email Address", nullptr));
        pwdBox_2->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Enter Your Password", nullptr));
        contactnumBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "0712020202", nullptr));
        emailLabel_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "Email", nullptr));
        emailLabel_4->setText(QCoreApplication::translate("Graduate_ProgramClass", "Contact number", nullptr));
        emailLabel_5->setText(QCoreApplication::translate("Graduate_ProgramClass", "password", nullptr));
        provinceBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Enter Your Province (e.g. KwaZulu Natal)", nullptr));
        emailLabel_6->setText(QCoreApplication::translate("Graduate_ProgramClass", "Industry", nullptr));
        cityBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Enter Your City (e.g. Durban)", nullptr));
        emailLabel_7->setText(QCoreApplication::translate("Graduate_ProgramClass", "City", nullptr));
        emailLabel_8->setText(QCoreApplication::translate("Graduate_ProgramClass", "Province", nullptr));
        industryBox->setItemText(0, QCoreApplication::translate("Graduate_ProgramClass", "Agriculture & Mining", nullptr));
        industryBox->setItemText(1, QCoreApplication::translate("Graduate_ProgramClass", "Business Services", nullptr));
        industryBox->setItemText(2, QCoreApplication::translate("Graduate_ProgramClass", "Computer & Electronics", nullptr));
        industryBox->setItemText(3, QCoreApplication::translate("Graduate_ProgramClass", "Consumer Services", nullptr));
        industryBox->setItemText(4, QCoreApplication::translate("Graduate_ProgramClass", "Education", nullptr));
        industryBox->setItemText(5, QCoreApplication::translate("Graduate_ProgramClass", "Energy & Utilities", nullptr));
        industryBox->setItemText(6, QCoreApplication::translate("Graduate_ProgramClass", "Financial Services", nullptr));
        industryBox->setItemText(7, QCoreApplication::translate("Graduate_ProgramClass", "Health,Pharmaceuticals,and Biotech", nullptr));
        industryBox->setItemText(8, QCoreApplication::translate("Graduate_ProgramClass", "Manufacturing", nullptr));
        industryBox->setItemText(9, QCoreApplication::translate("Graduate_ProgramClass", "Media and Intertaining", nullptr));
        industryBox->setItemText(10, QCoreApplication::translate("Graduate_ProgramClass", "Non-Profit", nullptr));
        industryBox->setItemText(11, QCoreApplication::translate("Graduate_ProgramClass", "Real Estate and Construction", nullptr));
        industryBox->setItemText(12, QCoreApplication::translate("Graduate_ProgramClass", "Retail", nullptr));
        industryBox->setItemText(13, QCoreApplication::translate("Graduate_ProgramClass", "Software and Internet", nullptr));
        industryBox->setItemText(14, QCoreApplication::translate("Graduate_ProgramClass", "Telecommunication", nullptr));
        industryBox->setItemText(15, QCoreApplication::translate("Graduate_ProgramClass", "Transportation and storage", nullptr));
        industryBox->setItemText(16, QCoreApplication::translate("Graduate_ProgramClass", "Travel and Recreation and Leisure", nullptr));
        industryBox->setItemText(17, QCoreApplication::translate("Graduate_ProgramClass", "Wholesale and Distribution", nullptr));

        picLabel->setText(QString());
        uploadBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "Upload Profile", nullptr));
        backtoLoginBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "Back to Login", nullptr));
        graduateRegBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "Graduate Registration", nullptr));
        companyRegBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "Company Registration", nullptr));
        errorLabel->setText(QString());
        fullnamesBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Enter Your Full Names", nullptr));
        emailLabel_9->setText(QCoreApplication::translate("Graduate_ProgramClass", "Contact Full Name", nullptr));
        collegenameBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Enter College name", nullptr));
        emailLabel_10->setText(QCoreApplication::translate("Graduate_ProgramClass", "College Name", nullptr));
        registrationLabel_3->setText(QCoreApplication::translate("Graduate_ProgramClass", "Graduate Registration", nullptr));
        emailLabel_11->setText(QCoreApplication::translate("Graduate_ProgramClass", "Qualification Type", nullptr));
        emailLabel_12->setText(QCoreApplication::translate("Graduate_ProgramClass", "Skills ", nullptr));
        skillsBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "List your skills seperate them by ,", nullptr));
        emailLabel_13->setText(QCoreApplication::translate("Graduate_ProgramClass", "Degree Name", nullptr));
        yearofGraduatingBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Year of Graduating", nullptr));
        degreenameBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Degree you have", nullptr));
        emailLabel_14->setText(QCoreApplication::translate("Graduate_ProgramClass", "Year Of Graduating", nullptr));
        qualificationtypeBox->setItemText(0, QCoreApplication::translate("Graduate_ProgramClass", "National Diploma", nullptr));
        qualificationtypeBox->setItemText(1, QCoreApplication::translate("Graduate_ProgramClass", "Associate Degree", nullptr));
        qualificationtypeBox->setItemText(2, QCoreApplication::translate("Graduate_ProgramClass", "Bachelor's Degree", nullptr));
        qualificationtypeBox->setItemText(3, QCoreApplication::translate("Graduate_ProgramClass", "Master's Degree", nullptr));
        qualificationtypeBox->setItemText(4, QCoreApplication::translate("Graduate_ProgramClass", "Doctoral Degree", nullptr));

        errorLabel_2->setText(QString());
        completeRegBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "Complete Registration", nullptr));
        backBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "Back", nullptr));
        registrationLabel_4->setText(QCoreApplication::translate("Graduate_ProgramClass", "Company Registration", nullptr));
        errorLabel_3->setText(QString());
        companynameBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "Enter College name", nullptr));
        emailLabel_15->setText(QCoreApplication::translate("Graduate_ProgramClass", "Company Name", nullptr));
        emailLabel_16->setText(QCoreApplication::translate("Graduate_ProgramClass", "About the company", nullptr));
        aboutBox->setPlaceholderText(QCoreApplication::translate("Graduate_ProgramClass", "About the Company", nullptr));
        completeRegBtn_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "Complete Registration", nullptr));
        backBtn_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "Back", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Graduate_ProgramClass", "Information", nullptr));
        label_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "Email :", nullptr));
        emailLbl->setText(QCoreApplication::translate("Graduate_ProgramClass", "[+ emailPlaceholder]", nullptr));
        label_3->setText(QCoreApplication::translate("Graduate_ProgramClass", "Contact Name:", nullptr));
        number->setText(QString());
        label_4->setText(QCoreApplication::translate("Graduate_ProgramClass", "Contact No.:", nullptr));
        label_5->setText(QCoreApplication::translate("Graduate_ProgramClass", "Province:", nullptr));
        city->setText(QString());
        label_6->setText(QCoreApplication::translate("Graduate_ProgramClass", "City:", nullptr));
        label_7->setText(QCoreApplication::translate("Graduate_ProgramClass", "Company Name:", nullptr));
        editBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "EDIT", nullptr));
        updateBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "UPDATE", nullptr));
        indLbl->setText(QCoreApplication::translate("Graduate_ProgramClass", "[+ indlPlaceholder]", nullptr));
        label_11->setText(QCoreApplication::translate("Graduate_ProgramClass", "indusry", nullptr));
        profile_lbl->setText(QString());
        profile_updateBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "Change Profile", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Graduate_ProgramClass", "Job Post", nullptr));
        closingDate->setDisplayFormat(QCoreApplication::translate("Graduate_ProgramClass", "yyyy/MM/dd", nullptr));
        label_8->setText(QCoreApplication::translate("Graduate_ProgramClass", "Job Description:", nullptr));
        label_9->setText(QCoreApplication::translate("Graduate_ProgramClass", "Job Position:", nullptr));
        label_12->setText(QCoreApplication::translate("Graduate_ProgramClass", "Closing Date:", nullptr));
        label_10->setText(QCoreApplication::translate("Graduate_ProgramClass", "Qualification:", nullptr));
        label_13->setText(QCoreApplication::translate("Graduate_ProgramClass", "Minimum Percentage:", nullptr));
        postBtn->setText(QCoreApplication::translate("Graduate_ProgramClass", "POST", nullptr));
        qBox->setItemText(0, QCoreApplication::translate("Graduate_ProgramClass", "National Diploma", nullptr));
        qBox->setItemText(1, QCoreApplication::translate("Graduate_ProgramClass", "Associate Degree", nullptr));
        qBox->setItemText(2, QCoreApplication::translate("Graduate_ProgramClass", "Bachelor's Degree", nullptr));
        qBox->setItemText(3, QCoreApplication::translate("Graduate_ProgramClass", "Master's Degree", nullptr));
        qBox->setItemText(4, QCoreApplication::translate("Graduate_ProgramClass", "Doctoral Degree", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("Graduate_ProgramClass", "upcomming events", nullptr));
        eventTitle->setText(QCoreApplication::translate("Graduate_ProgramClass", "TextLabel", nullptr));
        eventDesc->setText(QCoreApplication::translate("Graduate_ProgramClass", "TextLabel", nullptr));
        eventDate->setText(QCoreApplication::translate("Graduate_ProgramClass", "TextLabel", nullptr));
        noOfdasyLbl->setText(QCoreApplication::translate("Graduate_ProgramClass", "Number Of Days Left:", nullptr));
        daysLbl->setText(QCoreApplication::translate("Graduate_ProgramClass", "TextLabel", nullptr));
        status->setText(QCoreApplication::translate("Graduate_ProgramClass", "[+] status...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Home), QCoreApplication::translate("Graduate_ProgramClass", "Home", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(applications), QCoreApplication::translate("Graduate_ProgramClass", "Applications", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("Graduate_ProgramClass", "Personal Information", nullptr));
        label_33->setText(QCoreApplication::translate("Graduate_ProgramClass", "Full Name", nullptr));
        label_34->setText(QCoreApplication::translate("Graduate_ProgramClass", "Phone Number", nullptr));
        label_35->setText(QCoreApplication::translate("Graduate_ProgramClass", "Province", nullptr));
        label_36->setText(QCoreApplication::translate("Graduate_ProgramClass", "City", nullptr));
        label_37->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#0000ff;\">Email:</span></p></body></html>", nullptr));
        email_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">[+]EmailPlaceholder</span></p></body></html>", nullptr));
        label_38->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Current Address *</span></p></body></html>", nullptr));
        label_39->setText(QCoreApplication::translate("Graduate_ProgramClass", "Street address line 1", nullptr));
        label_40->setText(QCoreApplication::translate("Graduate_ProgramClass", "Street address line 2", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("Graduate_ProgramClass", "South Africa", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Graduate_ProgramClass", "Russsia", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Graduate_ProgramClass", "Zimbabwe", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("Graduate_ProgramClass", "Spain", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("Graduate_ProgramClass", "Germany", nullptr));
        comboBox_4->setItemText(5, QCoreApplication::translate("Graduate_ProgramClass", "Japan", nullptr));
        comboBox_4->setItemText(6, QCoreApplication::translate("Graduate_ProgramClass", "United States of America", nullptr));

        label_41->setText(QCoreApplication::translate("Graduate_ProgramClass", "Country", nullptr));
        label_42->setText(QCoreApplication::translate("Graduate_ProgramClass", "Zip code", nullptr));
        label_43->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Identity Number *</span></p></body></html>", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("Graduate_ProgramClass", "Work", nullptr));
        label_44->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Work Experience *</span></p></body></html>", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("Graduate_ProgramClass", "None", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("Graduate_ProgramClass", "less than 1 year", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("Graduate_ProgramClass", "1 year or more", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("Graduate_ProgramClass", "5 + years", nullptr));

        label_45->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Job Preference *</span></p></body></html>", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("Graduate_ProgramClass", "Education", nullptr));
        label_46->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">Average *</span></p></body></html>", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("Graduate_ProgramClass", "50 - 59 %", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("Graduate_ProgramClass", "60 - 69%", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("Graduate_ProgramClass", "70 - 79 %", nullptr));
        comboBox_6->setItemText(3, QCoreApplication::translate("Graduate_ProgramClass", "80 - 89 %", nullptr));
        comboBox_6->setItemText(4, QCoreApplication::translate("Graduate_ProgramClass", "90 - 100 %", nullptr));

        label_47->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#0000ff;\">Institution</span></p></body></html>", nullptr));
        institution_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#0000ff;\">[+]InstitutionPlaceholder</span></p></body></html>", nullptr));
        label_48->setText(QCoreApplication::translate("Graduate_ProgramClass", "Degree Name", nullptr));
        label_49->setText(QCoreApplication::translate("Graduate_ProgramClass", "Qualification Type", nullptr));
        UploadCVBtn_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "Upload Resume", nullptr));
        ApplyBtn_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "Apply", nullptr));
        label_50->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#ff0000;\">Fill in all Fields with (*)</span></p></body></html>", nullptr));
        PicHolder_2->setText(QString());
        updateBtn_3->setText(QCoreApplication::translate("Graduate_ProgramClass", "Update", nullptr));
        editBtn_3->setText(QCoreApplication::translate("Graduate_ProgramClass", "Edit", nullptr));
        UploadPictureBtn_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "Upload Picture", nullptr));
        label_51->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#0000ff;\">Upcoming Events</span></p></body></html>", nullptr));
        ApplyStatus_2->setText(QCoreApplication::translate("Graduate_ProgramClass", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#0000ff;\">Status : Incomplete</span></p></body></html>", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("Graduate_ProgramClass", "Job Duration", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Graduate_ProgramClass", "Intership", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Graduate_ProgramClass", "Contract", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Graduate_ProgramClass", "Permanent", nullptr));
        radioButton_8->setText(QCoreApplication::translate("Graduate_ProgramClass", "Other", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graduate_ProgramClass: public Ui_Graduate_ProgramClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADUATE_PROGRAM_H
