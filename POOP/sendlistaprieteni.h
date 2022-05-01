#ifndef SENDLISTAPRIETENI_H
#define SENDLISTAPRIETENI_H

#include "csend.h"

class Sendlistaprieteni : public CSend
{
private:
    QString info;
public:
    bool sendinfo();
    QString cereri();
    Sendlistaprieteni(QString username,QString prieten);
    ~Sendlistaprieteni(){};
};

#endif // SENDLISTAPRIETENI_H
