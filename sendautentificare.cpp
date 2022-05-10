#include "sendautentificare.h"

bool SendAutentificare::sendinfo()
{
   QString raspuns=Client::getinstance().getRaspuns(info);
   if(raspuns[0]=='1'){
       return true;
   }
   return false;
}

SendAutentificare::SendAutentificare(QString username, QString parola)
{
  info.append("1|");
  info.append(username);
  info.append("|");
  info.append(parola);
  info.append("|");

}
