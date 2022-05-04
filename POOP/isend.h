#ifndef ISEND_H
#define ISEND_H

#include <QObject>
#include"client.h"
class ISend
{
public:
    virtual bool sendinfo()=0;
    ISend();
    ~ISend(){};
};

#endif // ISEND_H
