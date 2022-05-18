#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDateTime>


class Protocol
{
public:
    Protocol();
    static QString conectare(QStringList lista);
    static QString inregistrare(QStringList lista);
    static QString afisare_antrenament(QString zi);
    static void actualizare_date(QStringList lista);
    static QString vizualizare_evolutie(QString username);
    static QString trimite_cerere(QStringList lista);
    static QString accepta_resping_cerere(QStringList lista);
    static QString sterge_prieten(QStringList lista);
    static QString afisare_prieteni(QString username);
    static QString afisare_cereri_prietenie(QString username);
};

#endif // PROTOCOL_H
