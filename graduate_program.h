#pragma once

#include <QtWidgets/QMainWindow>
#include<QMessageBox>
#include<QFileDialog>
#include <QDebug>
#include<QFile>
#include "ui_graduate_program.h"

namespace Ui {
    class Graduate_ProgramClass;
}
class Graduate_Program : public QMainWindow
{
    Q_OBJECT

public:
    
    Graduate_Program(QWidget *parent = Q_NULLPTR);
    ~Graduate_Program();
    QString picName;
    bool check;
    bool Login(QString, QString);
    bool RegVer();
    void insertIntoReg();
    int idReturn();

    //======================================vusi==================================/
   
    QString picDir = QCoreApplication::applicationDirPath()+"/../../Graduate_Program/user.png";
    void editable(bool);


public slots:
    //======================================mthobisi==================================//
    void on_registrationBtn_clicked();
    void on_backtoLoginBtn_clicked();
    void on_companyRegBtn_clicked();
    void on_graduateRegBtn_clicked();
    void on_backBtn_clicked();
    void on_backBtn_2_clicked();
    void on_completeRegBtn_clicked();
    void on_loginBtn_clicked();
    void on_completeRegBtn_2_clicked();
    void on_uploadBtn_clicked();

    //======================================vusi==================================//
    void on_editBtn_clicked();
    void on_updateBtn_clicked();
    void on_postBtn_clicked();
    void on_profile_updateBtn_clicked();

    //========================================Thabie===============================//
    void on_editBtn_3_clicked();
    void on_ApplyBtn_2_clicked();
    void on_UploadCVBtn_2_clicked();
    void on_updateBtn_3_clicked();
    void on_UploadPictureBtn_2_clicked();

private:
    Ui::Graduate_ProgramClass *ui;
    int tempID;
    QString username;
    QString email; // this email is for registration 
    QString contactName;
    QString contactNum; // save it as varcharactor 
    QString province;
    QString city;
    QString industry; // dropdown
    QString password;
    QString collageName;
    QString degreeName;
    int yearOfGraduation;
    QString qualificationType; //dropdown
    QString skills; // split function==>> array of strings;
    QString companyName;
    QString about;
    //===================vusi additional==========//
    QString jobPos;
    QString jobDesc;
    double  aggrigade;
    QString date;
};
