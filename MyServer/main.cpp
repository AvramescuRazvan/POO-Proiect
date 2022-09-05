#include <QCoreApplication>
#include "server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Server& srv=Server::get_instanta();
    srv.StartServer();

    return a.exec();
}
