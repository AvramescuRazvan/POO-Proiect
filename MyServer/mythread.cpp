 #include "mythread.h"
#include "ProtocolFactory.h"


MyThread::MyThread(qintptr ID, QObject* parent):QThread(parent)
{
    this->socketDescriptor=ID;
}

void MyThread::run()
{
    qDebug()<<socketDescriptor<<"Starting thread";
    socket=new QTcpSocket();
    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        qDebug()<<"Couldnt connect";
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);

    qDebug()<<socketDescriptor<<"Connected";

    exec();
}

void MyThread::readyRead()
{
    QByteArray Data= socket->readAll();

    qDebug()<<Data;

    QString date=QString(Data);
    QStringList lista=date.split("|");

    socket->write(ProtocolFactory::creare_protocol(lista)->raspuns().toUtf8());

}

void MyThread::disconnected()
{
    qDebug()<<socketDescriptor<<"Disconnected";

    socket->deleteLater();
    exit(0);
}

