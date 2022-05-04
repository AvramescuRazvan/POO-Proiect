#include "sendlistaprieteni.h"

bool Sendlistaprieteni::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

QString Sendlistaprieteni::cereri()
{
    return Client::getinstance().getRaspuns(info);
}

Sendlistaprieteni::Sendlistaprieteni(QString username, QString prieten)
{
    info.append("8|");
    info.append(username);
    info.append("|");
    info.append(prieten);
    info.append("|");
}

