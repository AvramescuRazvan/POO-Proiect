#include "sendvizualizareevolutie.h"

bool SendVizualizareEvolutie::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

QString SendVizualizareEvolutie::evolutie()
{

  return Client::getinstance().getRaspuns(info);
}

SendVizualizareEvolutie::SendVizualizareEvolutie(QString username)
{
    info.append("6|");
    info.append(username);
    info.append("|");
}


