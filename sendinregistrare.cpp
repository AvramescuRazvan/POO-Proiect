#include "sendinregistrare.h"

bool SendInregistrare::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns[0]=='1'){
        return true;
    }
    return false;
}

SendInregistrare::SendInregistrare(QString username, QString parola, QString adresa, QString varsta, QString inaltime, QString greutate, QString nume, QString prenume)
{
   // QString v=QString::number(varsta);
   // QString i=QString::number(inaltime);
    //QString g=QString::number(greutate);
    info.append("2|");
    info.append(username);
     info.append("|");
    info.append(parola);
     info.append("|");
    info.append(adresa);
     info.append("|");
    info.append(varsta);
     info.append("|");
    info.append(inaltime);
     info.append("|");
    info.append(greutate);
     info.append("|");
    info.append(nume);
    info.append("|");
    info.append(prenume);
    info.append("|");
}



