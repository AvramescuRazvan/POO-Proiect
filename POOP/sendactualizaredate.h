#ifndef SENDACTUALIZAREDATE_H
#define SENDACTUALIZAREDATE_H

#include "csend.h"

class SendActualizareDate : public CSend
{
private:
    QString info;
public:
    bool sendinfo();
    SendActualizareDate(QString username, QString greutate, QString data);
    ~SendActualizareDate();
};

#endif // SENDACTUALIZAREDATE_H
