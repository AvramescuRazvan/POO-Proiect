#include "sendinformatii.h"

bool SendInformatii::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

QString SendInformatii::lista_informatii()
{

  return Client::getinstance().getRaspuns(info);
}

SendInformatii::SendInformatii(QString username)
{
    info.append("9|");
    info.append(username);
    info.append("|");
}

