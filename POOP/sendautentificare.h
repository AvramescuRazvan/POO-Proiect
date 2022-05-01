#ifndef SENDAUTENTIFICARE_H
#define SENDAUTENTIFICARE_H

#include "csend.h"

class SendAutentificare : public CSend
{
private:
    QString info;
public:

    bool sendinfo();
    SendAutentificare(QString username, QString parola);
    ~SendAutentificare(){};
};

#endif // SENDAUTENTIFICARE_H
