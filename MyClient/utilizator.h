#ifndef UTILIZATOR_H
#define UTILIZATOR_H

#include <QString>
#include <QTcpSocket>

class Utilizator
{

private:
    QTcpSocket * socket;
    QString username;

public:
    Utilizator();
};

#endif // UTILIZATOR_H
