#include "protocoltrimitecerere.h"
#include <QFile>
#include <QTextStream>

ProtocolTrimiteCerere::ProtocolTrimiteCerere(QString username, QString destinatar)
{
    this->username=username;
    this->destinatar=destinatar;
}

QString ProtocolTrimiteCerere::raspuns()
{
    QString mesaj="0";
        if(username==destinatar)
        {
            mesaj="-4";
            return mesaj;
        }

        QFile f_conturi("D:\\Proiect POO\\MyServer\\Conturi.txt");
            if (!f_conturi.open(QIODevice::ReadOnly))
                    return mesaj;
        QTextStream stream_conturi(&f_conturi);

        while(!stream_conturi.atEnd())
        {
            QString rand=stream_conturi.readLine();
            QStringList verif1=rand.split(" ");
            if(verif1.value(0)==destinatar)
            {

                QString nume_fisier="D:\\Proiect POO\\MyServer\\"+destinatar+"_cereri.txt";
                QFile f(nume_fisier);

                if(!f.open(QIODevice::ReadWrite))
                {
                    return mesaj;
                }

                QTextStream stream(&f);
                while(!stream.atEnd())
                {
                    QString rand_cereri=stream.readLine();
                    if(username==rand_cereri)
                    {
                        mesaj="-1";
                        return mesaj;
                    }
                }

                QString fisier_prieteni="D:\\Proiect POO\\MyServer\\"+username+"_prieteni.txt";
                QFile f_prieteni(fisier_prieteni);

                if(!f_prieteni.open(QIODevice::ReadOnly))
                {
                    return mesaj;
                }

                QTextStream stream_prieteni(&f_prieteni);
                while(!stream_prieteni.atEnd())
                {
                    QString rand_prieteni=stream_prieteni.readLine();
                    if(destinatar==rand_prieteni)
                    {
                        mesaj="-2";
                        return mesaj;
                    }
                }



                stream<<username<<"\n";

                f.close();
                f_prieteni.close();
                f_conturi.close();

                mesaj="1";
                return mesaj;
            }
        }
        f_conturi.close();
        return mesaj;
}
