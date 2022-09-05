#ifndef PROTOCOLVIZUALIZAREEVOLUTIE_H
#define PROTOCOLVIZUALIZAREEVOLUTIE_H
#include "iprotocol.h"

class ProtocolVizualizareEvolutie:public IProtocol
{
public:
    ProtocolVizualizareEvolutie(QString username);
    virtual QString raspuns() final ;

private:
    QString username;
};

#endif // PROTOCOLVIZUALIZAREEVOLUTIE_H
