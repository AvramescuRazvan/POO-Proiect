#include "ProtocolFactory.h"
#include "protocolconectare.h"
#include "protocolinregistrare.h"
#include "protocolafisareantrenament.h"
#include "protocolactualizaredate.h"
#include "protocolvizualizareevolutie.h"
#include "protocolafisareprieteni.h"
#include "protocoltrimitecerere.h"
#include "protocolafisarecereriprietenie.h"
#include "protocolraspunscereri.h"
#include "protocolstergeprieten.h"

ProtocolFactory::ProtocolFactory()
{

}

IProtocol *ProtocolFactory::creare_protocol(QStringList date)
{
    if(date.value(0)=="1")
       return new ProtocolConectare(date.value(1), date.value(2));
    else if(date.value(0)=="2")
        return new ProtocolInregistrare(date.value(1), date.value(2), date.value(3), date.value(4), date.value(5), date.value(6), date.value(7), date.value(8));
    else if(date.value(0)=="3")
         return new ProtocolAfisareAntrenament(date.value(1));
    else if(date.value(0)=="4")
        return new ProtocolActualizareDate(date.value(1), date.value(2));
    else if(date.value(0)=="5")
        return new ProtocolVizualizareEvolutie(date.value(1));
    else if(date.value(0)=="6")
        return new ProtocolTrimiteCerere(date.value(1), date.value(2));
    else if(date.value(0)=="7")
        return new ProtocolRaspunsCereri(date.value(1), date.value(2), date.value(3));
    else if(date.value(0)=="8")
        return new ProtocolVizualizareEvolutie(date.value(1));
    else if(date.value(0)=="9")
        return new ProtocolStergePrieten(date.value(1), date.value(2));
    else if(date.value(0)=="10")
        return new ProtocolAfisarePrieteni(date.value(1));
    else if(date.value(0)=="11")
        return new ProtocolAfisareCereriPrietenie(date.value(1));

    return NULL;
}
