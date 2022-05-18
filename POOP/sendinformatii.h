#ifndef SENDINFORMATII_H
#define SENDINFORMATII_H

#include "csend.h"

class SendInformatii : public CSend
{
private:
    QString info;
public:
    bool sendinfo();
    QString lista_informatii();
    SendInformatii(QString username);
    ~SendInformatii(){};
};

#endif // SENDINFORMATII_H
