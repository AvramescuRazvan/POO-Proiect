#ifndef SENDEVOLUTIEPRIETEN_H
#define SENDEVOLUTIEPRIETEN_H

#include "csend.h"

class SendEvolutiePrieten : public CSend
{
private:
    QString info;
public:
    bool sendinfo();
    QString evolutie_prieten();
    SendEvolutiePrieten(QString username);
    ~SendEvolutiePrieten(){};
};

#endif // SENDEVOLUTIEPRIETEN_H
