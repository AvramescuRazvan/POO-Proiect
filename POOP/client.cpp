#include "client.h"
#include"QTcpSocket"
#include "QDebug"
#include"QMessageBox"
#include <QDebug>

Client*Client::instance=nullptr;
QString Client::readString;
bool Client::readFlag=false;

Client::Client(QObject *parent):QObject{parent}{

}
Client &Client::getinstance()
{
    if(Client::instance==nullptr){
        Client::instance=new Client;
    }
    return *Client::instance;
}

void Client::destroyinstance()
{
    if(Client::instance!=nullptr){
       delete Client::instance;
    }
    Client::instance=nullptr;
}

void Client::porneste(QString ip_server, unsigned short port_server)
{
  socket=new QTcpSocket(this);
  connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
  socket->connectToHost(ip_server,port_server);
  if(socket->waitForConnected()){
      qDebug()<<"Conectat la server";
  }
  else{
      QMessageBox noconnection;
      noconnection.setIcon(QMessageBox::Critical);
      noconnection.setText("Nu s-a facut conexiunea cu serverul");
      noconnection.exec();
      exit(0);
  }

  qDebug()<<"Conectat la server";

}

void Client::opreste()
{
   if(this->socket->isOpen())
   {
       this->socket->close();

   }
}

QString Client::getRaspuns(QString sendmessage)
{
     if(socket->isWritable()){
         QByteArray mesaj=sendmessage.toLocal8Bit();
         socket->write(mesaj.data(),qint64(sendmessage.size()));
         qDebug()<<sendmessage;
     }
     while(Client::readFlag==false){
         socket->waitForReadyRead(5000);
     }
     QString mesaj=Client::readString;
     Client::readFlag=false;
     qDebug()<<"Am trimis:"<<sendmessage;
     std::vector<std::string>sir;
     std::string value;

     qDebug()<<"Am primit:"<<mesaj;

     return mesaj;

    // return "";
}

QString Client::readyRead()
{
  QByteArray mesaj;
  mesaj=socket->readAll();
  Client::readFlag=true;
  Client::readString=QString(mesaj);
  qDebug()<<mesaj;

  return QString(mesaj);
}

