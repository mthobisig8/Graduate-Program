#include "graduate_program.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Graduate_Program w;
    w.show();
    return a.exec();
}
