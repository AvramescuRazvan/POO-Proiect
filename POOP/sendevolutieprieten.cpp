#include "sendevolutieprieten.h"

bool SendEvolutiePrieten::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

QString SendEvolutiePrieten::evolutie_prieten()
{

  return Client::getinstance().getRaspuns(info);
}

SendEvolutiePrieten::SendEvolutiePrieten(QString username)
{
    info.append("11|");
    info.append(username);
    info.append("|");
}
