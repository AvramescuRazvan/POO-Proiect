#ifndef IPROTOCOL_H
#define IPROTOCOL_H
#include <QString>

class IProtocol
{
public:
    IProtocol();
    virtual QString raspuns()=0;
};

#endif // IPROTOCOL_H
