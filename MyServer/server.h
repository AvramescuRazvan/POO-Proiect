#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QDebug>
#include "mythread.h"

class Server : public QTcpServer
{
    Q_OBJECT
public:
    static Server& get_instanta();
    void StartServer();

signals:

private:
    static Server* instanta;
    Server() {}

public slots:


protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // SERVER_H
