#ifndef SENDINREGISTRARE_H
#define SENDINREGISTRARE_H

#include "csend.h"

class SendInregistrare : public CSend
{
private:
    QString info;
public:

    bool sendinfo();
    SendInregistrare(QString nume,QString prenume, QString adresa, int varsta, int inaltime, int greutate, QString username, QString parola);
    ~SendInregistrare(){};
};


#endif // SENDINREGISTRARE_H
