#ifndef SENDSTERGERE_H
#define SENDSTERGERE_H

#include "csend.h"

class SendStergere : public CSend
{

private:
    QString info;
public:

    bool sendinfo();
    SendStergere(QString username);
    ~SendStergere(){};
};

#endif // SENDSTERGERE_H
