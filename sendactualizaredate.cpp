#include "sendactualizaredate.h"

bool SendActualizareDate::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

SendActualizareDate::SendActualizareDate(QString username, QString greutate, QString data)
{
     //QString g=QString::number(greutate);
    info.append("5|");
    info.append(username);
    info.append("|");
    info.append(greutate);
    info.append("|");
    info.append(data);
    info.append("|");
}

