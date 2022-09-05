#ifndef PROTOCOLAFISAREPRIETENI_H
#define PROTOCOLAFISAREPRIETENI_H
#include "iprotocol.h"


class ProtocolAfisarePrieteni:public IProtocol
{
public:
    ProtocolAfisarePrieteni(QString username);
    virtual QString raspuns() final ;

private:
    QString username;
};

#endif // PROTOCOLAFISAREPRIETENI_H
