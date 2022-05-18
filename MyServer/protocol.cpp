#include "protocol.h"

Protocol::Protocol()
{

}

QString Protocol::conectare(QStringList lista)
{
    QString mesaj="0";
    QFile f("D:\\Proiect POO\\MyServer\\Conturi.txt");
        if (!f.open(QIODevice::ReadOnly ))
        {
            return mesaj;
        }

        QTextStream stream(&f);
        QString nume_pass=lista.value(1)+" "+lista.value(2);

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

QString Protocol::inregistrare(QStringList lista)
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
        if(verif1.value(0)==lista.value(1))
          {
             return mesaj;
          }
    }

    QString nume_fisier="D:\\Proiect POO\\MyServer\\"+lista.value(1)+".txt";
    QFile informatii(nume_fisier);
    if(!informatii.open(QIODevice::WriteOnly))
    {
        return mesaj;
    }

    QDate data=QDate::currentDate();
    QString data_text=data.toString();

    QTextStream stream_info(&informatii);
    stream_info<<lista.value(4)<<" "<<lista.value(5)<<"\n";
    stream_info<<"Varsta:"<<lista.value(6)<<"  Inaltime:"<<lista.value(7)<<"\n";
    stream_info<<lista.value(8)<<"  "<<data_text<<"\n";

    stream<<lista.value(1)<<" "<<lista.value(2)<<"\n";

    QString fisier_prieteni="D:\\Proiect POO\\MyServer\\"+lista.value(1)+"_prieteni.txt";
    QFile f_prieteni(fisier_prieteni);
    if(!f_prieteni.open(QIODevice::WriteOnly))
    {
        return mesaj;
    }

    mesaj="1";
    return mesaj;


}

QString Protocol::afisare_antrenament(QString zi)
{
    QString mesaj="0";
    QString zi_antrenament;
    if(zi=="1")
        zi_antrenament="Z1 P.Tri.U";
    if(zi=="2")
        zi_antrenament="Z2 S.B.Tra";
    if(zi=="3")
        zi_antrenament="Z3 P.G";
    if(zi=="4")
        zi_antrenament="Z4 P.Tri.U";
    if(zi=="5")
        zi_antrenament="Z5 S.B.Tra";

    QString nume_fisier="D:\\Proiect POO\\MyServer\\"+zi_antrenament+".txt";
    QFile f(nume_fisier);

    if(!f.open(QIODevice::ReadOnly))
    {
        return mesaj;
    }

    QTextStream stream(&f);
    QString antrenament;

    antrenament=stream.readAll();
    return antrenament;
}

void Protocol::actualizare_date(QStringList lista)
{
    QString nume_fisier="D:\\Proiect POO\\MyServer\\"+lista.value(1)+".txt";
    QFile f(nume_fisier);

    if(!f.open(QIODevice::Append))
    {
        return;
    }

    QDate data=QDate::currentDate();
    QString data_text=data.toString();

    QTextStream stream(&f);
    stream<<lista.value(2)<<" "<<data_text<<"\n";

    return;
}

QString Protocol::vizualizare_evolutie(QString username)
{
    QString mesaj="0";
    QString nume_fisier="D:\\Proiect POO\\MyServer\\"+username+".txt";
    QFile f(nume_fisier);

    if(!f.open(QIODevice::ReadOnly))
    {
        return mesaj;
    }

    QTextStream stream(&f);

    QString evolutie;
    evolutie=stream.readAll();

    return evolutie;
}

QString Protocol::trimite_cerere(QStringList lista)
{
    QString mesaj="0";
    if(lista.value(1)==lista.value(2))
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
        if(verif1.value(0)==lista.value(2))
        {

            QString nume_fisier="D:\\Proiect POO\\MyServer\\"+lista.value(2)+"_cereri.txt";
            QFile f(nume_fisier);

            if(!f.open(QIODevice::ReadWrite))
            {
                return mesaj;
            }

            QTextStream stream(&f);
            while(!stream.atEnd())
            {
                QString rand_cereri=stream.readLine();
                if(lista.value(1)==rand_cereri)
                {
                    mesaj="-1";
                    return mesaj;
                }
            }

            QString fisier_prieteni="D:\\Proiect POO\\MyServer\\"+lista.value(1)+"_prieteni.txt";
            QFile f_prieteni(fisier_prieteni);

            if(!f_prieteni.open(QIODevice::ReadOnly))
            {
                return mesaj;
            }

            QTextStream stream_prieteni(&f_prieteni);
            while(!stream_prieteni.atEnd())
            {
                QString rand_prieteni=stream_prieteni.readLine();
                if(lista.value(2)==rand_prieteni)
                {
                    mesaj="-2";
                    return mesaj;
                }
            }



            stream<<lista.value(1)<<"\n";

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

QString Protocol::accepta_resping_cerere(QStringList lista)
{
    QString mesaj="0";
    if(lista.value(1)=="1")
    {
        QString nume_fisier_cereri="D:\\Proiect POO\\MyServer\\"+lista.value(2)+"_cereri.txt";
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
            if(linie!=lista.value(3))
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
        QString nume_fisier_utilizator="D:\\Proiect POO\\MyServer\\"+lista.value(2)+"_prieteni.txt";
        QFile fisier_utilizator(nume_fisier_utilizator);
        if(!fisier_utilizator.open(QIODevice::Append))
        {
            return mesaj;
        }

        QTextStream stream_utilizator(&fisier_utilizator);
        stream_utilizator<<lista.value(3)<<"\n";


        QString nume_fisier_prieten="D:\\Proiect POO\\MyServer\\"+lista.value(3)+"_prieteni.txt";
        QFile fisier_prieten(nume_fisier_prieten);
        if(!fisier_prieten.open(QIODevice::Append))
        {
            return mesaj;
        }

        QTextStream stream_prieten(&fisier_prieten);
        stream_prieten<<lista.value(2)<<"\n";

        fisier_prieten.close();
        fisier_utilizator.close();
        }

        f.close();
        mesaj="1";
        return mesaj;
    }
     else{
        QString nume_fisier_cereri="D:\\Proiect POO\\MyServer\\"+lista.value(2)+"_cereri.txt";
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
            if(linie!=lista.value(3))
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

QString Protocol::sterge_prieten(QStringList lista)
{
    QString mesaj="0";
    QString nume_fisier_utilizator="D:\\Proiect POO\\MyServer\\"+lista.value(1)+"_prieteni.txt";
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
        if(linie!=lista.value(2))
            l_prieteni_utilizator.push_back(linie);
    }

    fisier_utilizator.resize(0);
    foreach(QString item, l_prieteni_utilizator)
        stream_utilizator<<item<<"\n";


    QString nume_fisier_prieten="D:\\Proiect POO\\MyServer\\"+lista.value(2)+"_prieteni.txt";
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
        if(linie!=lista.value(1))
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

QString Protocol::afisare_prieteni(QString username)
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

QString Protocol::afisare_cereri_prietenie(QString username)
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
    qDebug()<<mesaj;
    while(!stream_cereri.atEnd())
    {
        mesaj+="|"+stream_cereri.readLine();
    }

    f.close();
    return mesaj;
}
