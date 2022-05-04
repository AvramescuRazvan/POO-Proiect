#include "sendprieten.h"

bool SendPrieten::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

SendPrieten::SendPrieten(QString username)
{
    info.append("7|");
    info.append(username);
    info.append("|");
}
