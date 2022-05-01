#include "sendprieten.h"


bool SendPrieten::sendinfo()
{
    return 0;
}

SendPrieten::SendPrieten(QString username)
{
    info.append("106|");
    info.append(username);
    info.append("|");
}
