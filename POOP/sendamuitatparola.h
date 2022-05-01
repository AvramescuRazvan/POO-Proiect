#ifndef SENDAMUITATPAROLA_H
#define SENDAMUITATPAROLA_H

#include "csend.h"

class SendAmUitatParola : public CSend
{

private:
    QString info;

public:
    bool sendinfo();
    SendAmUitatParola(QString adresa_mail,QString parola1,QString parola2);
    ~SendAmUitatParola(){};
};

#endif // SENDAMUITATPAROLA_H
