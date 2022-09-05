#include "protocolvizualizareevolutie.h"
#include <QFile>
#include <QTextStream>

ProtocolVizualizareEvolutie::ProtocolVizualizareEvolutie(QString username)
{
    this->username=username;
}

QString ProtocolVizualizareEvolutie::raspuns()
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
