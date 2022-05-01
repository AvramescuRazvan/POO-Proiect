#include "sendactualizaredate.h"

bool SendActualizareDate::sendinfo()
{
    return 0;
}

SendActualizareDate::SendActualizareDate(QString username, int greutate, QString data)
{
     QString g=QString::number(greutate);
    info.append("104|");
    info.append(username);
    info.append("|");
    info.append(g);
    info.append("|");
    info.append(data);
    info.append("|");
}

