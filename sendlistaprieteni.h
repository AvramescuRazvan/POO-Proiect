#ifndef SENDLISTAPRIETENI_H
#define SENDLISTAPRIETENI_H
//aici sunt cererile de prietenie
#include "csend.h"

class Sendlistaprieteni : public CSend
{
private:
    QString info;
public:
    bool sendinfo();
    QString cereri();
    Sendlistaprieteni(QString username);
    ~Sendlistaprieteni(){};
};

#endif // SENDLISTAPRIETENI_H
