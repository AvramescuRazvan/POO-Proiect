#include "protocolafisarecereriprietenie.h"
#include <QFile>
#include <QTextStream>

ProtocolAfisareCereriPrietenie::ProtocolAfisareCereriPrietenie(QString username)
{
    this->username=username;
}

QString ProtocolAfisareCereriPrietenie::raspuns()
{
    QString mesaj="0";
        QString nume_fisier="D:\\Proiect POO\\MyServer\\"+username+"_cereri.txt";
        QFile f(nume_fisier);

        if(!f.open(QIODevice::ReadOnly))
        {
            return mesaj;
        }

        if(f.size()==0){
              return mesaj;
        }

        QTextStream stream_cereri(&f);
        mesaj=stream_cereri.readLine();
        while(!stream_cereri.atEnd())
        {
            mesaj+="|"+stream_cereri.readLine();
        }

        f.close();
        return mesaj;
}
