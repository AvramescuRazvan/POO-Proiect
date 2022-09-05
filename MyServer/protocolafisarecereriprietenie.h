#ifndef PROTOCOLAFISARECERERIPRIETENIE_H
#define PROTOCOLAFISARECERERIPRIETENIE_H
#include "iprotocol.h"

class ProtocolAfisareCereriPrietenie:public IProtocol
{
public:
    ProtocolAfisareCereriPrietenie(QString username);
    virtual QString raspuns() final ;

private:
    QString username;
};

#endif // PROTOCOLAFISARECERERIPRIETENIE_H
