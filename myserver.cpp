#include "myserver.h"

myserver::myserver(QObject *parent)
    : QObject{parent}
{
server=new QTcpServer(this);
s=new QTcpSocket;
connect(server,SIGNAL(newConnection()),this,SLOT(newConnection()));


if(!server->listen(QHostAddress::Any,1234))
{
    qDebug()<<"Server could not start!";
}
else
{
     qDebug()<<"Server started!";
}
}

void myserver::newConnection()
{
QTcpSocket *socket=server->nextPendingConnection();
socket->flush();
s=socket;
connect(s,SIGNAL(readyRead()),this,SLOT(onReadyRead()),Qt::DirectConnection);


//socket->waitForBytesWritten(1000);
//QByteArray data=s->readAll();
//QString req(data);

qDebug()<<"conexiune noua";
}

void myserver::onReadyRead()
{
    QByteArray data=s->readAll();
    QString req(data);

    qDebug()<<req<<"\n";
    QString str="1";
    s->write(str.toUtf8());
}
