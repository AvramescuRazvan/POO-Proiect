#ifndef PROTOCOLCONECTARE_H
#define PROTOCOLCONECTARE_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include "iprotocol.h"

class ProtocolConectare:public IProtocol
{
public:
    ProtocolConectare(QString nume, QString parola);
    virtual QString raspuns() final ;

private:
    QString nume;
    QString parola;
};

#endif // PROTOCOLCONECTARE_H
