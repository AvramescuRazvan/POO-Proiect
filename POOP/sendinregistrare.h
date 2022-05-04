#ifndef SENDINREGISTRARE_H
#define SENDINREGISTRARE_H

#include "csend.h"

class SendInregistrare : public CSend
{
private:
    QString info;
public:

    bool sendinfo();
    SendInregistrare(QString username, QString parola, QString adresa, QString varsta, QString inaltime, QString greutate, QString nume, QString prenume);
    ~SendInregistrare(){};
};


#endif // SENDINREGISTRARE_H
