#ifndef SENDPRIETEN_H
#define SENDPRIETEN_H

#include "csend.h"

class SendPrieten : public CSend
{
private:
    QString info;
public:
    bool sendinfo();
    QString prieteni_utiliztor();
    SendPrieten(QString username);
    ~SendPrieten(){};
};

#endif // SENDPRIETEN_H
