#include "protocolstergeprieten.h"
#include <QFile>
#include <QTextStream>

ProtocolStergePrieten::ProtocolStergePrieten(QString username, QString prieten)
{
    this->username=username;
    this->prieten=prieten;
}

QString ProtocolStergePrieten::raspuns()
{
    QString mesaj="0";
       QString nume_fisier_utilizator="D:\\Proiect POO\\MyServer\\"+username+"_prieteni.txt";
       QFile fisier_utilizator(nume_fisier_utilizator);
       if(!fisier_utilizator.open(QIODevice::ReadWrite))
       {
           return mesaj;
       }

       QTextStream stream_utilizator(&fisier_utilizator);
       QStringList l_prieteni_utilizator;

       while(!stream_utilizator.atEnd())
       {
           QString linie=stream_utilizator.readLine();
           if(linie!=prieten)
               l_prieteni_utilizator.push_back(linie);
       }

       fisier_utilizator.resize(0);
       foreach(QString item, l_prieteni_utilizator)
           stream_utilizator<<item<<"\n";


       QString nume_fisier_prieten="D:\\Proiect POO\\MyServer\\"+prieten+"_prieteni.txt";
       QFile fisier_prieten(nume_fisier_prieten);
       if(!fisier_prieten.open(QIODevice::ReadWrite))
       {
           return mesaj;
       }

       QTextStream stream_prieten(&fisier_prieten);
       QStringList l_prieteni;

       while(!stream_prieten.atEnd())
       {
           QString linie=stream_prieten.readLine();
           if(linie!=username)
               l_prieteni.push_back(linie);
       }

       fisier_prieten.resize(0);
       foreach(QString item, l_prieteni)
           stream_prieten<<item<<"\n";


       fisier_prieten.close();
       fisier_utilizator.close();

       mesaj="1";
       return mesaj;
}
