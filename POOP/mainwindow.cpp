#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_inregistrare_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_autentificare_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_inapoi_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_conectare_clicked()
{
    QString username=ui->lineEdit_nume_2->text();
    QString password=ui->lineEdit_parola->text();

    if(username=="test" && password=="test")
        ui->stackedWidget->setCurrentIndex(3);
    else
        QMessageBox::information(this,"Conectare","Numele de utilizator și parola nu sunt corecte.");
}


void MainWindow::on_pushButton_inapoi_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_inregistrare_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_inapoi_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_prieteni_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
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
}


void MainWindow::on_pushButton_am_uitat_parola_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_pushButton_salveaza_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_antrenament_clicked()
{
    if(ui->comboBox_zile->currentText()=="Luni")
        ui->stackedWidget->setCurrentIndex(9);

}

