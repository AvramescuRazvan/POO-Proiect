#include "sendantrenament.h"

bool SendAntrenament::sendinfo()
{   QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns[0]=='1'){
        return true;
    }
    return false;
}

SendAntrenament::SendAntrenament(QString username, QString zi)
{
    info.append("4|");
    info.append(username);
    info.append("|");
    info.append(zi);
     info.append("|");
}

