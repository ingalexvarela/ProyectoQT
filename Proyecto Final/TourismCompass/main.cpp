//#include "mainwindow.h"
#include "loginsystem.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    LoginSystem w;
    w.show();
    return a.exec();
}
