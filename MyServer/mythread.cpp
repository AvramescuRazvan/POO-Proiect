 #include "mythread.h"


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
        conectare(lista);
    if(lista.value(0)=="2")
        inregistrare(lista);
    if(lista.value(0)=="5")
        actualizare_date(lista);
    if(lista.value(0)=="6")
        vizualizare_evolutie(lista.value(1));


}

void MyThread::disconnected()
{
    qDebug()<<socketDescriptor<<"Disconnected";

    socket->deleteLater();
    exit(0);
}

void MyThread::conectare(QStringList lista)
{
    QFile f("D:\\Proiect POO\\MyServer\\Conturi.txt");
        if (!f.open(QIODevice::ReadOnly ))
                return;

        QTextStream stream(&f);
        QString nume_pass=lista.value(1)+" "+lista.value(2);

        while(!stream.atEnd())
        {
            QString verif=stream.readLine();
            if(verif==nume_pass)
            {
                socket->write("1");
                return;
            }
        }
        socket->write("0");
}

void MyThread::inregistrare(QStringList lista)
{
    QFile f("D:\\Proiect POO\\MyServer\\Conturi.txt");
        if (!f.open(QIODevice::ReadWrite ))
                return;
    QTextStream stream(&f);

    while(!stream.atEnd())
    {
        QString rand=stream.readLine();
        QStringList verif1=rand.split(" ");
        if(verif1.value(0)==lista.value(1))
           { socket->write("0");
             return;
          }
    }

    QString nume_fisier="D:\\Proiect POO\\MyServer\\"+lista.value(1)+".txt";
    QFile informatii(nume_fisier);
    if(!informatii.open(QIODevice::WriteOnly))
    {
        return;
    }

    QDate data=QDate::currentDate();
    QString data_text=data.toString();


    QTextStream stream_info(&informatii);
    stream_info<<lista.value(7)<<" "<<lista.value(8)<<"\n";
    stream_info<<"Varsta:"<<lista.value(4)<<"  Inaltime:"<<lista.value(5)<<"\n";
    stream_info<<lista.value(6)<<"  "<<data_text<<"\n";



    stream<<lista.value(1)<<" "<<lista.value(2)<<"\n";
    socket->write("1");


}

void MyThread::actualizare_date(QStringList lista)
{
      QString nume_fisier="D:\\Proiect POO\\MyServer\\"+lista.value(1)+".txt";
      QFile f(nume_fisier);

      if(!f.open(QIODevice::ReadWrite))
      {
          socket->write("0");
          return;
      }

      QTextStream stream(&f);
      stream<<lista.value(2)<<" "<<lista.value(3);
      socket->write("1");
}

void MyThread::vizualizare_evolutie(QString username)
{
    QString nume_fisier="D:\\Proiect POO\\MyServer\\"+username+".txt";
    QFile f(nume_fisier);

    if(!f.open(QIODevice::ReadOnly))
    {
        socket->write("0");
        return;
    }

    QTextStream stream(&f);

    QString evolutie=stream.readLine();
    evolutie+="|";

    while(!stream.atEnd())
    {
        evolutie+=stream.readLine();
        evolutie+="|";
    }

    socket->write(evolutie.toUtf8());
}
