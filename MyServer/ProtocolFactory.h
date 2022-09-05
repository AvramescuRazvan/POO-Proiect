#ifndef PROTOCOLFACTORY_H
#define PROTOCOLFACTORY_H
#include "iprotocol.h"

#include <QString>

class ProtocolFactory
{
public:
    ProtocolFactory();
    static IProtocol* creare_protocol(QStringList date);
};

#endif // PROTOCOLFACTORY_H
