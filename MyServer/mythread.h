#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

using namespace std;

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(qintptr ID, QObject* parent=0);
    void run();

public slots:
    void readyRead();
    void disconnected();

signals:
    void error(QTcpSocket::SocketError socketerror);

private:
    QTcpSocket* socket;
    int socketDescriptor;

};

#endif // MYTHREAD_H
