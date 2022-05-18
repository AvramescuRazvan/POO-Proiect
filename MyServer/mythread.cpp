 #include "mythread.h"
#include "protocol.h"


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


    if(lista.value(0)=="1")
        socket->write(Protocol::conectare(lista).toUtf8());
    else if(lista.value(0)=="2")
        socket->write(Protocol::inregistrare(lista).toUtf8());
    else if(lista.value(0)=="3")
        socket->write(Protocol::afisare_antrenament(lista.value(1)).toUtf8());
    else if(lista.value(0)=="4")
        Protocol::actualizare_date(lista);
    else if(lista.value(0)=="5")
        socket->write(Protocol::vizualizare_evolutie(lista.value(1)).toUtf8());
    else if(lista.value(0)=="6")
        socket->write(Protocol::trimite_cerere(lista).toUtf8());
    else if(lista.value(0)=="7")
        socket->write(Protocol::accepta_resping_cerere(lista).toUtf8());
    else if(lista.value(0)=="8")
        socket->write(Protocol::vizualizare_evolutie(lista.value(1)).toUtf8());
    else if(lista.value(0)=="9")
        socket->write(Protocol::sterge_prieten(lista).toUtf8());
    else if(lista.value(0)=="10")
        socket->write(Protocol::afisare_prieteni(lista.value(1)).toUtf8());
    else if(lista.value(0)=="11")
        socket->write(Protocol::afisare_cereri_prietenie(lista.value(1)).toUtf8());
}

void MyThread::disconnected()
{
    qDebug()<<socketDescriptor<<"Disconnected";

    socket->deleteLater();
    exit(0);
}

