#pragma once
#include<QtCore>
#include <QtSql/QtSql>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>

class QDB
{
public:
	/*QDB();
	~QDB();*/
	bool Connect(); 
	bool Disconnect();
	QSqlDatabase db;
	bool dbstate;
};

namespace QDBLite {
	class DB : public QDB {};
}