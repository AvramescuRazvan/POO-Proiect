#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    socket=new QTcpSocket(this);
    socket->connectToHost("127.0.0.1", 1234);
    connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_inregistrare_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_autentificare_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_inapoi_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_conectare_clicked()
{
    QString usr_pass="1";
    usr_pass+="|";
    usr_pass+=ui->lineEdit_nume_utilizator->text();
    usr_pass+="|";
    usr_pass+=ui->lineEdit_parola->text();
    socket->write(usr_pass.toUtf8());
    socket->waitForReadyRead();
    if(socket->readAll()=="1")
    {
        ui->stackedWidget->setCurrentIndex(3);
        username=ui->lineEdit_nume_utilizator->text();
    }
    else{
        ui->stackedWidget->setCurrentIndex(1);
    }
}


void MainWindow::on_pushButton_inapoi_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_inregistrare_2_clicked()
{
    QString info="2";
    info+="|";
    info+=ui->lineEdit_nume_utiliazator2->text();
    info+="|";
    info+=ui->lineEdit_parola_2->text();
    info+="|";
    info+=ui->lineEdit_adres_de_mail->text();
    info+="|";
    info+=ui->lineEdit_nume->text();
    info+="|";
    info+=ui->lineEdit_prenume->text();
    info+="|";
    info+=ui->spinBox_varsta->text();
    info+="|";
    info+=ui->doubleSpinBox_inaltime->text();
    info+="|";
    info+=ui->spinBox_greutate->text();
    socket->write(info.toUtf8());
    socket->waitForReadyRead();
    if(socket->readAll()=="1")
    {
        qDebug()<<"Inregistrare realizata cu succes";
        ui->stackedWidget->setCurrentIndex(1);
    }
    else{
        qDebug()<<"Problema la inregistrare";
        ui->stackedWidget->setCurrentIndex(2);
    }
}


void MainWindow::on_pushButton_inapoi_3_clicked()
{
    username="";
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_prieteni_clicked()
{
    ui->listWidget->clear();
    ui->stackedWidget->setCurrentIndex(4);
    QString mesaj="10|";
    mesaj+=username;

    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead(4000);

    QByteArray data=socket->readAll();

    if(data!="0")
    {QString prieteni=QString(data);

    QStringList lista_prieteni=prieteni.split("|");

    foreach(QString item, lista_prieteni)
        ui->listWidget->addItem(item);}

}


void MainWindow::on_pushButton_actualizare_date_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_inapoi_5_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_inapoi_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_inapoi_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_antrenamente_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_inapoi_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_vizualizare_evolutie_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    QString mesaj="5|"+username;
    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead();
    ui->textBrowser_evolutie->setText(socket->readAll());
}

void MainWindow::on_pushButton_salveaza_clicked()
{
    QString info="4";
    info+="|";
    info+=username;
    info+="|";
    info+=ui->spinBox_greutate_2->text();
    socket->write(info.toUtf8());
    socket->waitForBytesWritten();
}


void MainWindow::on_pushButton_ziua1_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    socket->write("3|1");
    socket->waitForReadyRead();
    ui->textBrowser_antrenamente->setText(socket->readAll());
}

void MainWindow::on_pushButton_ziua2_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    socket->write("3|2");
    socket->waitForReadyRead();
    ui->textBrowser_antrenamente->setText(socket->readAll());
}


void MainWindow::on_pushButton_ziua3_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    socket->write("3|3");
    socket->waitForReadyRead();
    ui->textBrowser_antrenamente->setText(socket->readAll());
}


void MainWindow::on_pushButton_ziua4_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    socket->write("3|4");
    socket->waitForReadyRead();
    ui->textBrowser_antrenamente->setText(socket->readAll());
}


void MainWindow::on_pushButton_ziua5_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    socket->write("3|5");
    socket->waitForReadyRead();
    ui->textBrowser_antrenamente->setText(socket->readAll());
}

void MainWindow::on_pushButton_inapoi_selectare_zi_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_cereri_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_pushButton_Inapoi_la_prieteni_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_trimite_cereri_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_pushButton_trimite_cerere_clicked()
{
    QString mesaj="6";
    mesaj+="|";
    mesaj+=username;
    mesaj+="|";
    mesaj+=ui->lineEdit_cerere_prietenie->text();
    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead();
    QByteArray date=socket->readAll();
    qDebug()<<date;
    if(date=="1")
    {
        qDebug()<<"Cerere trimisa cu succes";
    }
    else if(date=="0")
    {
        qDebug()<<"Contul nu exista";
    }
    else if(date=="-1")
    {
        qDebug()<<"Cererea a fost trimisa deja";
    }
    else if(date=="-4")
    {
        qDebug()<<"Nu puteti trimite cerere catre dumneavoastra";
    }
    else
    {
        qDebug()<<"Utilizatorul este deja pritenul dumneavoastra";
    }

}


void MainWindow::on_pushButton_sterge_prieten_clicked()
{
    if(ui->listWidget->currentRow()>=0)
    {QString cerere="9|";
    cerere+=username;
    cerere+="|";
    cerere+=ui->listWidget->currentItem()->text();

    socket->write(cerere.toUtf8());
    socket->waitForReadyRead();
    if(socket->readAll()=="1")
        qDebug()<<"Prietenul a fost sters cu succes";
    else
    {
        qDebug()<<"A aparut o eroare la stergerea prietenului";
    }

    QListWidgetItem* item=ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;}
}



void MainWindow::on_pushButton_cereri_prietenie_clicked()
{
    ui->listWidget_cereri_prietenie->clear();
    ui->stackedWidget->setCurrentIndex(10);
    QString mesaj="11|";
    mesaj+=username;

    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead(5000);
    QByteArray data=socket->readAll();
    QString cereri=QString(data);

    if(data!="0"){
    QStringList lista_cereri=cereri.split("|");

    foreach(QString item, lista_cereri)
        ui->listWidget_cereri_prietenie->addItem(item);}
}


void MainWindow::on_pushButton_inapoit_de_la_acceptare_cereri_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    QString mesaj2="10|";
    mesaj2+=username;

    socket->write(mesaj2.toUtf8());
    socket->waitForReadyRead(5000);
    QByteArray data1=socket->readAll();
    QString prieteni=QString(data1);

    ui->listWidget->clear();

    if(data1!="0")
    {QStringList lista_prieteni=prieteni.split("|");

    foreach(QString item, lista_prieteni)
        ui->listWidget->addItem(item);
    }
}


void MainWindow::on_pushButton_accepta_cerere_clicked()
{
    if(ui->listWidget_cereri_prietenie->currentRow()>=0)
    {QString mesaj="7|1|";
    mesaj+=username;
    mesaj+="|";
    mesaj+=ui->listWidget_cereri_prietenie->currentItem()->text();

    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead(5000);
    if(socket->readAll()=="1")
    {
        qDebug()<<"Prieten adaugat cu succes";
    }
    else
    {
        qDebug()<<"A aparut o eroare in timpul adaugarii prietenului";
    }

    QListWidgetItem* item=ui->listWidget_cereri_prietenie->takeItem(ui->listWidget_cereri_prietenie->currentRow());
    delete item;
    }
}


void MainWindow::on_pushButton_respinge_cerere_clicked()
{
    if(ui->listWidget_cereri_prietenie->currentRow()>=0)
    {

        QString mesaj="7|0|";
        mesaj+=username;
        mesaj+="|";
        mesaj+=ui->listWidget_cereri_prietenie->currentItem()->text();

        socket->write(mesaj.toUtf8());
        socket->waitForReadyRead(5000);
        if(socket->readAll()=="1")
        {
            qDebug()<<"Prieten a fost sters cu succes";
        }
        else
        {
            qDebug()<<"A aparut o eroare in timpul stergerii cererii";
        }

    QListWidgetItem* item=ui->listWidget_cereri_prietenie->takeItem(ui->listWidget_cereri_prietenie->currentRow());
    delete item;
    }

}


void MainWindow::on_pushButton_clicked()
{
    if(ui->listWidget->currentRow()>=0)
    {ui->stackedWidget->setCurrentIndex(7);
    QString mesaj="8|";
    mesaj+=ui->listWidget->currentItem()->text();

    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead();
    ui->textBrowser_evolutie->setText(socket->readAll());}
}


