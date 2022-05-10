#ifndef CSEND_H
#define CSEND_H

#include "isend.h"

class CSend : public ISend
{
public:
    virtual bool sendinfo()=0;
    CSend();
    ~CSend(){};
};

#endif // CSEND_H
