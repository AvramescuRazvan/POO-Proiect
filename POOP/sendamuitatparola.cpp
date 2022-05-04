#include "sendamuitatparola.h"

bool SendAmUitatParola::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

SendAmUitatParola::SendAmUitatParola(QString adresa_mail, QString parola1, QString parola2)
{

    info.append("3|");
    info.append(adresa_mail);
    info.append("|");
    info.append(parola1);
    info.append("|");
    info.append(parola2);
    info.append("|");
}

