#include "sendvizualizareevolutie.h"

bool SendVizualizareEvolutie::sendinfo()
{
    return 0;
}

QString SendVizualizareEvolutie::evolutie()
{

   QString pseudoraspuns("zi kg progres|zi1 kg1 progres1|");
   return pseudoraspuns;
}

SendVizualizareEvolutie::SendVizualizareEvolutie(QString username)
{
    info.append("105|");
    info.append(username);
    info.append("|");
}


