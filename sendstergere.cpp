#include "sendstergere.h"

bool SendStergere::sendinfo()
{
    QString raspuns=Client::getinstance().getRaspuns(info);
    if(raspuns=="1"){
        return true;
    }
    return false;
}

SendStergere::SendStergere(QString username)
{
    info.append("12|");
    info.append(username);
     info.append("|");

}
