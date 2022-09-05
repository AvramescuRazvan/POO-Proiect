#ifndef PROTOCOLTRIMITECERERE_H
#define PROTOCOLTRIMITECERERE_H
#include "iprotocol.h"

class ProtocolTrimiteCerere:public IProtocol
{
public:
    ProtocolTrimiteCerere(QString username, QString destinatar);
    virtual QString raspuns() final ;

private:
    QString username;
    QString destinatar;
};

#endif // PROTOCOLTRIMITECERERE_H
