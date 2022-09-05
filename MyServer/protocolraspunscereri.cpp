#include "protocolraspunscereri.h"
#include <QFile>
#include <QTextStream>

ProtocolRaspunsCereri::ProtocolRaspunsCereri(QString acceptare, QString username, QString cerere)
{
    this->acceptare=acceptare;
    this->username=username;
    this->cerere=cerere;
}

QString ProtocolRaspunsCereri::raspuns()
{
    QString mesaj="0";
        if(acceptare=="1")
        {
            QString nume_fisier_cereri="D:\\Proiect POO\\MyServer\\"+username+"_cereri.txt";
            QFile f(nume_fisier_cereri);

            if(!f.open(QIODevice::ReadWrite))
            {
                return mesaj;
            }

            QTextStream stream_cereri(&f);
            QStringList lista_cereri;
            qintptr verificare=0;

            while(!stream_cereri.atEnd())
            {
                QString linie=stream_cereri.readLine();
                if(linie!=cerere)
                {
                    lista_cereri.push_back(linie);
                }
                else
                {
                    verificare=1;
                }
            }

            f.resize(0);
            foreach(QString item, lista_cereri)
               {
                stream_cereri<<item<<"\n";
                }

            if(verificare==1)
            {
            QString nume_fisier_utilizator="D:\\Proiect POO\\MyServer\\"+username+"_prieteni.txt";
            QFile fisier_utilizator(nume_fisier_utilizator);
            if(!fisier_utilizator.open(QIODevice::Append))
            {
                return mesaj;
            }

            QTextStream stream_utilizator(&fisier_utilizator);
            stream_utilizator<<cerere<<"\n";


            QString nume_fisier_prieten="D:\\Proiect POO\\MyServer\\"+cerere+"_prieteni.txt";
            QFile fisier_prieten(nume_fisier_prieten);
            if(!fisier_prieten.open(QIODevice::Append))
            {
                return mesaj;
            }

            QTextStream stream_prieten(&fisier_prieten);
            stream_prieten<<username<<"\n";

            fisier_prieten.close();
            fisier_utilizator.close();
            }

            f.close();
            mesaj="1";
            return mesaj;
        }
         else{
            QString nume_fisier_cereri="D:\\Proiect POO\\MyServer\\"+username+"_cereri.txt";
            QFile f(nume_fisier_cereri);

            if(!f.open(QIODevice::ReadWrite))
            {
                return mesaj;
            }

            QTextStream stream_cereri(&f);
            QStringList lista_cereri;

            while(!stream_cereri.atEnd())
            {
                QString linie=stream_cereri.readLine();
                if(linie!=cerere)
                {
                    lista_cereri.push_back(linie);
                }
            }

            f.resize(0);
            foreach(QString item, lista_cereri)
               {
                stream_cereri<<item<<"\n";
                }

            f.close();
            mesaj="1";
            return mesaj;
        }

}
