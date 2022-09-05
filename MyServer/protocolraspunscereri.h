#ifndef PROTOCOLRASPUNSCERERI_H
#define PROTOCOLRASPUNSCERERI_H
#include "iprotocol.h"

class ProtocolRaspunsCereri:public IProtocol
{
public:
    ProtocolRaspunsCereri(QString acceptare, QString username, QString cerere);
    virtual QString raspuns() final ;

private:
    QString acceptare;
    QString username;
    QString cerere;
};

#endif // PROTOCOLRASPUNSCERERI_H
