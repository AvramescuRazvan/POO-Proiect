#ifndef PROTOCOLSTERGEPRIETEN_H
#define PROTOCOLSTERGEPRIETEN_H
#include "iprotocol.h"

class ProtocolStergePrieten:public IProtocol
{
public:
    ProtocolStergePrieten(QString username, QString prieten);
    virtual QString raspuns() final ;

private:
    QString username;
    QString prieten;
};

#endif // PROTOCOLSTERGEPRIETEN_H
