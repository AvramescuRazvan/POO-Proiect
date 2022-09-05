#include "protocolafisareantrenament.h"
#include <QFile>
#include <QTextStream>

ProtocolAfisareAntrenament::ProtocolAfisareAntrenament(QString zi)
{
    this->zi=zi;
}

QString ProtocolAfisareAntrenament::raspuns()
{
    QString mesaj="0";
        QString zi_antrenament;
        if(zi=="1")
            zi_antrenament="Z1 P.Tri.U";
        if(zi=="2")
            zi_antrenament="Z2 S.B.Tra";
        if(zi=="3")
            zi_antrenament="Z3 P.G";
        if(zi=="4")
            zi_antrenament="Z4 P.Tri.U";
        if(zi=="5")
            zi_antrenament="Z5 S.B.Tra";

        QString nume_fisier="D:\\Proiect POO\\MyServer\\"+zi_antrenament+".txt";
        QFile f(nume_fisier);

        if(!f.open(QIODevice::ReadOnly))
        {
            return mesaj;
        }

        QTextStream stream(&f);
        QString antrenament;

        antrenament=stream.readAll();
        return antrenament;
}
