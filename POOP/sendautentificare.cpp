#include "sendautentificare.h"



bool SendAutentificare::sendinfo()
{
return 0;
}

SendAutentificare::SendAutentificare(QString username, QString parola)
{
  info.append("100|");
  info.append(username);
  info.append("|");
  info.append(parola);
  info.append("|");
}
