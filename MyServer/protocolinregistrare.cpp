#include "protocolinregistrare.h"
#include <QDate>

ProtocolInregistrare::ProtocolInregistrare(QString username, QString parola, QString email, QString nume, QString prenume, QString varsta, QString inaltime, QString greutate)
{
    this->username=username;
    this->parola=parola;
    this->email=email;
    this->nume=nume;
    this->prenume=prenume;
    this->varsta=varsta;
    this->inaltime=inaltime;
    this->greutate=greutate;
}

QString ProtocolInregistrare::raspuns()
{
    QString mesaj="0";
        QFile f("D:\\Proiect POO\\MyServer\\Conturi.txt");
            if (!f.open(QIODevice::ReadWrite ))
                    return mesaj;
        QTextStream stream(&f);

        while(!stream.atEnd())
        {
            QString rand=stream.readLine();
            QStringList verif1=rand.split(" ");
            if(verif1.value(0)==username)
              {
                 return mesaj;
              }
        }

        QString nume_fisier="D:\\Proiect POO\\MyServer\\"+username+".txt";
        QFile informatii(nume_fisier);
        if(!informatii.open(QIODevice::WriteOnly))
        {
            return mesaj;
        }

        QDate data=QDate::currentDate();
        QString data_text=data.toString();

        QTextStream stream_info(&informatii);
        stream_info<<nume<<" "<<prenume<<"\n";
        stream_info<<"Varsta:"<<varsta<<"  Inaltime:"<<inaltime<<"\n";
        stream_info<<greutate<<"  "<<data_text<<"\n";

        stream<<username<<" "<<parola<<"\n";

        QString fisier_prieteni="D:\\Proiect POO\\MyServer\\"+username+"_prieteni.txt";
        QFile f_prieteni(fisier_prieteni);
        if(!f_prieteni.open(QIODevice::WriteOnly))
        {
            return mesaj;
        }

        mesaj="1";
        return mesaj;

}
