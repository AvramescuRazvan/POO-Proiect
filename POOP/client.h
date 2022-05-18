#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

class QTcpSocket;

class Client : public QObject
{
    Q_OBJECT
public:
    static Client& getinstance();
    static void destroyinstance();
    void porneste(QString ip_server,unsigned short port_server);
    void opreste();
    QString getRaspuns(QString sendmessage);
signals:
private slots:
    QString readyRead();
private:
    static Client* instance;;
    QTcpSocket* socket;
    static bool readFlag;
    static QString readString;

    //static User* user;
    explicit Client(QObject *parent=nullptr);




};

#endif // CLIENT_H
