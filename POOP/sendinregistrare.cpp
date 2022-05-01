#include "sendinregistrare.h"

bool SendInregistrare::sendinfo()
{
return 0;
}

SendInregistrare::SendInregistrare(QString nume, QString prenume, QString adresa, int varsta, int inaltime, int greutate, QString username, QString parola)
{
    QString v=QString::number(varsta);
    QString i=QString::number(inaltime);
    QString g=QString::number(greutate);
    info.append("101|");
    info.append(nume);
     info.append("|");
    info.append(prenume);
     info.append("|");
    info.append(adresa);
     info.append("|");
    info.append(v);
     info.append("|");
    info.append(i);
     info.append("|");
    info.append(g);
     info.append("|");
    info.append(username);
    info.append("|");
    info.append(parola);
    info.append("|");
}



