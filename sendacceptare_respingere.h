#ifndef SENDACCEPTARE_RESPINGERE_H
#define SENDACCEPTARE_RESPINGERE_H

#include "csend.h"

class SendAcceptare_Respingere : public CSend
{
private:
    QString info;
public:

    bool sendinfo();
     SendAcceptare_Respingere(QString username,QString username_friend,QString status);
    ~SendAcceptare_Respingere(){};


};

#endif // SENDACCEPTARE_RESPINGERE_H
