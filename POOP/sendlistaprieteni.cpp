#include "sendlistaprieteni.h"

bool Sendlistaprieteni::sendinfo()
{
    return 0;
}

QString Sendlistaprieteni::cereri()
{
    QString pseudoraspuns("numeprieten |nume |");
    return pseudoraspuns;
}

Sendlistaprieteni::Sendlistaprieteni(QString username, QString prieten)
{
    info.append("107|");
    info.append(username);
    info.append("|");
    info.append(prieten);
    info.append("|");
}

