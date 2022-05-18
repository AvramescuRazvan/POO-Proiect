#include "sendprieten.h"

bool SendPrieten::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

QString SendPrieten::prieteni_utiliztor()
{
    return Client::getinstance().getRaspuns(info);
}

SendPrieten::SendPrieten(QString username)
{
    info.append("7|");
    info.append(username);
    info.append("|");
}
