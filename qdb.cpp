#include"qdb.h"
#define Path_to_DB "/../../Graduate_Program/program.s3db"
//QDB::QDB() {
//	}
//QDB::~QDB() {
//	Disconnect();
//}

bool QDB::Connect() {
	if (!this->db.isOpen()) {
		const QString DRIVER("QSQLITE");
		this->db = QSqlDatabase::addDatabase(DRIVER);
		this->db.setDatabaseName(QCoreApplication::applicationDirPath()+Path_to_DB);
		if (!this->db.open()) {
			return false;
		}
		else { return true; }
	}
	else { return false; }
}

bool QDB::Disconnect() {
	if (this->db.isOpen()) {
		this->db.close();
		return true;
	}
	else {
		return false;
	}
}



