#ifndef PROTOCOLINREGISTRARE_H
#define PROTOCOLINREGISTRARE_H
#include <QString>
#include <QFile>
#include <QTextStream>

#include "iprotocol.h"

class ProtocolInregistrare:public IProtocol
{
public:
    ProtocolInregistrare(QString username, QString parola, QString email, QString nume, QString prenume, QString varsta, QString inaltime, QString greutate);
    virtual QString raspuns() final ;

private:
    QString username;
    QString parola;
    QString email;
    QString nume;
    QString prenume;
    QString varsta;
    QString inaltime;
    QString greutate;
};

#endif // PROTOCOLINREGISTRARE_H
