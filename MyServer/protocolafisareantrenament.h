#ifndef PROTOCOLAFISAREANTRENAMENT_H
#define PROTOCOLAFISAREANTRENAMENT_H
#include "iprotocol.h"


class ProtocolAfisareAntrenament:public IProtocol
{
public:
    ProtocolAfisareAntrenament(QString zi);
    virtual QString raspuns() final ;

private:
    QString zi;
};

#endif // PROTOCOLAFISAREANTRENAMENT_H
