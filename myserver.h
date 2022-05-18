#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QDebug>
#include<QTcpServer>
#include<QTcpSocket>

class myserver : public QObject
{
    Q_OBJECT
public:
    explicit myserver(QObject *parent = nullptr);

signals:

  public slots:
    void newConnection();
    void onReadyRead();
private:
    QTcpServer *server;
    QTcpSocket *s;
};

#endif // MYSERVER_H
