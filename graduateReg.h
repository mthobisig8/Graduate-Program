#pragma once
#include "graduate_program.h"
#include "qdb.h"
class graduateReg :public Graduate_Program
{
public:
	graduateReg();
	void gradRegVer(QString, QString, QString, int, QString, QString);
};