#ifndef SENDANTRENAMENT_H
#define SENDANTRENAMENT_H

#include "csend.h"

class SendAntrenament : public CSend
{
private:
    QString info;
public:
    bool sendinfo();
    SendAntrenament(QString username,QString zi);
    ~SendAntrenament(){};
};

#endif // SENDANTRENAMENT_H
