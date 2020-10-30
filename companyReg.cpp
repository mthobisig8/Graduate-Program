#include "companyReg.h"
QDBLite::DB db2;

companyReg::companyReg() {
    db2.dbstate = db2.Connect();
}

void companyReg::compRegVer(QString em,QString cn, QString ab) {
    if (cn != NULL && ab != NULL) {
        db2.db.transaction();
        bool reg = false;
        QSqlQuery cQuery(db2.db);
        cQuery.exec("SELECT RegID FROM REgistration WHERE Email = '" + em + "'");
        if (cQuery.next()) {
            int RegId = cQuery.value(0).toInt();
            cQuery.prepare("SELECT RegID FROM Graduate_Registration WHERE RegID = (:id);");
            cQuery.bindValue(":id",RegId );
            if (cQuery.exec()) {
                if (cQuery.next()) { reg = true; }
            }
            if (reg) {
                //QMessageBox::warning(this, " error", "Username already exists, choose another one or go to login");
                qDebug() << "The username exist";
            }
            else {
                cQuery.prepare("INSERT INTO Company_Registration (RegID,CompanyName,About)" "VALUES(?,?,?)");
                cQuery.addBindValue(RegId);
                cQuery.addBindValue(cn);
                cQuery.addBindValue(ab);

                //check if registered

                if (cQuery.exec()) {
                    QMessageBox::information(this, "Success", "Registered Successfully,");
                    on_backtoLoginBtn_clicked();
                }
                else {
                    QMessageBox::warning(this, "Error", "Sorry ann error occured while trying to add into the database");
                    qDebug() << cQuery.lastError();
                }
            }
        }
        db2.db.commit();
       
    }else  QMessageBox::warning(this, "Error", "All fields are required");

}
