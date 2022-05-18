#include "sendacceptare_respingere.h"

bool SendAcceptare_Respingere::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

SendAcceptare_Respingere::SendAcceptare_Respingere(QString username, QString username_friend,QString status)
{
    info.append("10|");
    info.append(username);
    info.append("|");
    info.append(username_friend);
    info.append("|");
    info.append(status);
    info.append("|");
}


