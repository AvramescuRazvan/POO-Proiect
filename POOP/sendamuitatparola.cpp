#include "sendamuitatparola.h"

bool SendAmUitatParola::sendinfo()
{
return 0;
}

SendAmUitatParola::SendAmUitatParola(QString adresa_mail, QString parola1, QString parola2)
{

    info.append("102|");
    info.append(adresa_mail);
    info.append("|");
    info.append(parola1);
    info.append("|");
    info.append(parola2);
    info.append("|");
}

