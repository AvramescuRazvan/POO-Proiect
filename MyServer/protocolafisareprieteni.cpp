#include "protocolafisareprieteni.h"
#include <QFile>
#include <QTextStream>

ProtocolAfisarePrieteni::ProtocolAfisarePrieteni(QString username)
{
    this->username=username;
}

QString ProtocolAfisarePrieteni::raspuns()
{
    QString mesaj="0";
       QString nume_fisier="D:\\Proiect POO\\MyServer\\"+username+"_prieteni.txt";
       QFile f(nume_fisier);
       if(!f.open(QIODevice::ReadOnly))
       {
           return mesaj;
       }

      if(f.size()==0)
            return mesaj;

       QTextStream stream(&f);
       mesaj=stream.readLine();

          while(!stream.atEnd())
          {
              mesaj+="|"+stream.readLine();
          }

       f.close();
       return mesaj;
}
