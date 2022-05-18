#ifndef SENDVIZUALIZAREEVOLUTIE_H
#define SENDVIZUALIZAREEVOLUTIE_H

#include "csend.h"

class SendVizualizareEvolutie : public CSend
{
private:
    QString info;
public:
    bool sendinfo();
    QString evolutie();
    SendVizualizareEvolutie(QString username);
    ~SendVizualizareEvolutie(){};
};

#endif // SENDVIZUALIZAREEVOLUTIE_H
