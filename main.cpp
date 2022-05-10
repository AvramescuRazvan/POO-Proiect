#include "mainwindow.h"

#include <QApplication>
#include"client.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Client::getinstance().porneste("127.0.0.1",1234);
    MainWindow w;
    w.setFixedSize(500,350);
    w.show();
    return a.exec();
}
