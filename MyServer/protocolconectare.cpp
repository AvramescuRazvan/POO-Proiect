#include "protocolconectare.h"

ProtocolConectare::ProtocolConectare(QString nume, QString parola)
{
    this->nume=nume;
    this->parola=parola;
}

QString ProtocolConectare::raspuns()
{
    QString mesaj="0";
    QFile f("D:\\Proiect POO\\MyServer\\Conturi.txt");
            if (!f.open(QIODevice::ReadOnly ))
            {
                return mesaj;
            }

            QTextStream stream(&f);
            QString nume_pass=nume+" "+parola;

            while(!stream.atEnd())
            {
                QString verif=stream.readLine();
                if(verif==nume_pass)
                {
                    mesaj="1";
                    return mesaj;
                }
            }

       return mesaj;
}
