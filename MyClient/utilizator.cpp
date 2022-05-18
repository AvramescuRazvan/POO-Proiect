#include "utilizator.h"

Utilizator::Utilizator()
{
    socket=new QTcpSocket(this);
    socket->connectToHost("127.0.0.1", 1234);
    connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}
