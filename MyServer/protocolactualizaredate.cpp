#include "protocolactualizaredate.h"
#include <QFile>
#include <QTextStream>
#include <QDate>

ProtocolActualizareDate::ProtocolActualizareDate(QString username, QString greutate)
{
    this->username=username;
    this->greutate=greutate;
}

QString ProtocolActualizareDate::raspuns()
{
    QString nume_fisier="D:\\Proiect POO\\MyServer\\"+username+".txt";
        QFile f(nume_fisier);

        if(!f.open(QIODevice::Append))
        {
            return "0";
        }

        QDate data=QDate::currentDate();
        QString data_text=data.toString();

        QTextStream stream(&f);
        stream<<greutate<<" "<<data_text<<"\n";

        return "1";
}
