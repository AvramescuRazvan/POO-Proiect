#ifndef PROTOCOLACTUALIZAREDATE_H
#define PROTOCOLACTUALIZAREDATE_H
#include "iprotocol.h"


class ProtocolActualizareDate:public IProtocol
{
public:
    ProtocolActualizareDate(QString username, QString greutate);
    virtual QString raspuns() final ;

private:
    QString username;
    QString greutate;
};

#endif // PROTOCOLACTUALIZAREDATE_H
