#include "sendantrenament.h"

bool SendAntrenament::sendinfo()
{
    return 0;
}

SendAntrenament::SendAntrenament(QString username, QString zi)
{
    info.append("103|");
    info.append(username);
    info.append("|");
    info.append(zi);
     info.append("|");
}

