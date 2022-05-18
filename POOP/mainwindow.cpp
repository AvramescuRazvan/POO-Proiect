#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QPushButton>
#include<QVBoxLayout>
#include<QTextBlock>
#include<QSpinBox>
#include"sendautentificare.h"
#include"sendinregistrare.h"
#include"sendactualizaredate.h"
#include"sendamuitatparola.h"
#include"sendantrenament.h"
#include"sendvizualizareevolutie.h"
#include"sendprieten.h"
#include"sendlistaprieteni.h"
#include"sendacceptare_respingere.h"
#include"sendinformatii.h"
#include"sendevolutieprieten.h"
#include"sendstergere.h"

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

    int ok=1;
    if(username=="")
    {
        ok=0;
        QMessageBox::critical(this,"Conectare","Numele de utilizator nu a fost introdus.");}
    if(password=="")
       {
        ok=0;
        QMessageBox::critical(this,"Conectare","Parola nu a fost introdusa.");}

    if(username.length()>25)
       {
        ok=0;
        QMessageBox::critical(this,"Conectare","Numele de utilizator este prea lung.");}
    if(password.length()>25)
    {
        ok=0;
        QMessageBox::critical(this,"Conectare","Parola este prea lunga.");}


    for(int i=0;i<username.size();i++)
        if(username.at(i)<QChar('a')|| username.at(i)>QChar('z'))
           {
            ok=0;
            QMessageBox::critical(this,"Conectare"," Numele de utilizator poate sa contina doar litere mici");
            break;
            }
    SendAutentificare obj(username,password);

    //introduc datele in informatii client
    SendInformatii obj1(username);

    QString informatii=obj1.lista_informatii();
    QStringList listainfo;
    listainfo=informatii.split("|");

    foreach(QString item,listainfo)
    {
      ui->listWidget_informstii_client->addItem(item);
    }

    //introduc cererile de prietenie
    Sendlistaprieteni obj2(username);
    QString lista=obj2.cereri();
    QStringList listacereri;
    listacereri=lista.split("|");

    foreach(QString item,listacereri)
    {
      ui->listfriends->addItem(item);
    }


    // introduc prietenii

    SendPrieten obj3(username);
    QString lista1=obj3.prieteni_utiliztor();
    QStringList lista_prieteni;
    lista_prieteni=lista1.split("|");

    foreach(QString item,lista_prieteni)
    {
      ui->lista_prieteni_a->addItem(item);
    }


    //introfuc antrenamentele
    //introduc antrenamentul de luni
    SendAntrenament obj4(username,"Luni");
    QString a1=obj4.antrenamente();
    ui->textBrowser->insertPlainText(a1);

    //introduc antrenamentul de marti
    SendAntrenament obj5(username,"Marti");
    QString a2=obj5.antrenamente();
    ui->textBrowser_2->insertPlainText(a2);

    //introduc antrenamentul de miercuri
    SendAntrenament obj6(username,"Miercuri");
    QString a3=obj6.antrenamente();
    ui->textBrowser_3->insertPlainText(a3);

    //introduc antrenamentul de joi
    SendAntrenament obj7(username,"Joi");
    QString a4=obj7.antrenamente();
    ui->textBrowser_4->insertPlainText(a4);

    //introduc antrenamentul de vineri
    SendAntrenament obj8(username,"Vineri");
    QString a5=obj8.antrenamente();
    ui->textBrowser_5->insertPlainText(a5);

    //introduc antrenamentul de sambata
    SendAntrenament obj9(username,"Sambata");
    QString a6=obj9.antrenamente();
    ui->textBrowser_6->insertPlainText(a6);

    //introduc antrenamentul de duminica
    SendAntrenament obj10(username,"Duminica");
    QString a7=obj10.antrenamente();
    ui->textBrowser_7->insertPlainText(a7);


    if(obj.sendinfo() && ok==1){
        QMessageBox::about(this,"Conectare"," Conectarea s-a realizat cu succes!");

         ui->stackedWidget->setCurrentIndex(3);
  };

    //if(username=="test" && password=="test")
    //    ui->stackedWidget->setCurrentIndex(3);
   // else
   //     QMessageBox::information(this,"Conectare","Numele de utilizator și parola nu sunt corecte.");
}


void MainWindow::on_pushButton_inapoi_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_inregistrare_2_clicked()
{
    QString nume=ui->lineEdit_nume->text();
    QString prenume=ui->lineEdit_prenume->text();
    QString adresa=ui->lineEdit_adres_de_mail->text();
    QString varsta=ui->spinBox_varsta->text();
    QString inaltime=ui->spinBox_inaltime->text();
    QString greutate=ui->spinBox_greutate->text();
    QString username=ui->lineEdit_nume_utiliazator->text();
    QString parola=ui->lineEdit_parola_2->text();

    int ok=1;
    if(username=="")
       {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Numele de utilizator nu a fost introdus.");}
    if(parola=="")
       {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Parola nu a fost introdusa.");}
    if(nume=="")
       {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Numele nu a fost introdus.");}
    if(prenume=="")
    {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Preumele nu a fost introdus.");}
    if(adresa=="")
       {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Adresa nu a fost introdusa.");}
    if(varsta=="0")
    {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Varsta nu a fost introdusa.");}
    if(inaltime=="0,00")
    {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Inaltimea nu a fost introdusa.");}
    if(greutate=="0,00")
      {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Greutatea nu a fost introdusa.");}

    if(inaltime[1]!=',' ||inaltime[0]>'2' || (inaltime[0]=='2'&&(inaltime[2]!='0'||inaltime[3]!='0') ))
      {  ok=0;
        QMessageBox::critical(this,"Inregistrare","Inaltimea introdusa este prea mare.");}

    for(int i=0;i<username.size();i++)
        if(username.at(i)<QChar('a')|| username.at(i)>QChar('z'))
           {
            ok=0;
            QMessageBox::critical(this,"Inregistrare"," Numele de utilizator poate sa contina doar litere mici");
            break;   }

    for(int i=1;i<nume.size();i++)
        if(nume.at(i)<QChar('a')|| nume.at(i)>QChar('z') || (nume[0]<QChar('A')||nume[0]>QChar('Z')))
           {
            ok=0;
            QMessageBox::critical(this,"Inregistrare"," Numele poate sa contina doar litere mici si trebuie sa inceapa cu litera mare");
            break; }

    for(int i=1;i<prenume.size();i++)
        if(nume.at(i)<QChar('a')|| nume.at(i)>QChar('z')||(prenume[0]<QChar('A')||prenume[0]>QChar('Z')))
           {
            ok=0;
            QMessageBox::critical(this,"Inregistrare"," Prenumele poate sa contina doar litere mici si trebuie sa inceapa cu litera mare.");
            break; }

    if(username.length()>25)
       {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Numele de utilizator este prea lung.");}
    if(parola.length()>25)
    {
        ok=0;
        QMessageBox::critical(this,"Inregistrare","Parola este prea lunga.");}


     SendInregistrare obj(username,  parola,  adresa, varsta,inaltime, greutate,  nume, prenume);

    if(obj.sendinfo( ) && ok==1){
        QMessageBox::about(this,"Inregistrare"," Inregistrare s-a realizat cu succes!");
        ui->stackedWidget->setCurrentIndex(1);
    }
}


void MainWindow::on_pushButton_inapoi_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_prieteni_clicked()
{
   // QString username=ui->lineEdit_nume_2->text();
    //SendPrieten obj(username);
    //if(obj.sendinfo())
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
     ui->lineEdit_nou_adresamail->setEchoMode(QLineEdit::Normal);
}


void MainWindow::on_pushButton_salveaza_2_clicked()
{
    QString mail=ui->lineEdit_nou_adresamail->text();
    QString parola1=ui->lineEdit_nou_paroola->text();
    QString parola2=ui->lineEdit_noua_parola2->text();
    int ok=1;
    if(mail=="")
       {ok=0;
        QMessageBox::critical(this,"Am uitat parola","Nu ati introdus adresa de mail.");}
    if (parola1=="")
         {ok=0;
        QMessageBox::critical(this,"Am uitat parola","Nu ati introdus parola.");}
   if(parola2=="")
   {ok=0;
       QMessageBox::critical(this,"Am uitat parola","Nu ati introdus parola si a doua oara.");}
    if(parola1!=parola2)
    {    ok=0;
        QMessageBox::critical(this,"Am uitat parola","Cele 2 parole trebuie sa fie identice.");}
    if(parola1.length()>25)
    {
        ok=0;
        QMessageBox::critical(this,"Am uitat parola","Parola este prea lunga.");}

  SendAmUitatParola obj(mail,parola1,parola2);
    if(obj.sendinfo() && ok==1)
      ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_antrenament_clicked()
{
    QString zi=ui->comboBox_zile->currentText();
    QString username=ui->lineEdit_nume_2->text();
    SendAntrenament obj(username,zi);

    if( zi=="Luni")
        ui->stackedWidget->setCurrentIndex(10);
    if(zi=="Marti")
        ui->stackedWidget->setCurrentIndex(11);
    if(zi=="Miercuri")
        ui->stackedWidget->setCurrentIndex(12);
    if(zi=="Joi")
        ui->stackedWidget->setCurrentIndex(13);
    if(zi=="Vineri")
        ui->stackedWidget->setCurrentIndex(14);
    if(zi=="Sambata")
        ui->stackedWidget->setCurrentIndex(15);
    if(zi=="Duminica")
        ui->stackedWidget->setCurrentIndex(16);


}


void MainWindow::on_pushButton_inapoi_17_clicked()
{
      ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_inapoi_8_clicked()
{
      ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_inapoi_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_inapoi_13_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_inapoi_12_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_inapoi_11_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_inapoi_14_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_inapoi_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_cereri_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_pushButton_salveaza_clicked()
{
    QString greutate=ui->spinBox_greutate_2->text();
    QString data=ui->dateEdit_data->text();
    QString username=ui->lineEdit_nume_2->text();
    SendActualizareDate obj(username,greutate,data);
    int ok=1;
    if(greutate=="0")
    {
        ok=0;
        QMessageBox::critical(this,"Actualizare date","Greutatea nu a fost introdusa."); }

    if(data=="01.01.2000")
     {
        ok=0;
        QMessageBox::critical(this,"Actualizare date","Data nu a fost introdusa.");}

    //introduc evolutie in vizualizare evolutie
    SendVizualizareEvolutie ev(username);
    QString evolutie=ev.evolutie();
    QStringList listaevolutie;
    listaevolutie=evolutie.split("|");

    foreach(QString item,listaevolutie)
    {
      ui->listevolution->addItem(item);
    }


     if(ok==1 && obj.sendinfo())
        //datele au fost introduse cu succes
       { QMessageBox::about(this,"Actualizare date","Datele au fost introduse cu succes.");
         ui->stackedWidget->setCurrentIndex(3);}

}


void MainWindow::on_pushButton_informatii_client_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_pushButton_clicked()
{
    QString username=ui->lineEdit_nume_2->text();
    QString username_prieten;
    username_prieten=ui->listfriends->currentItem()->text();

 SendAcceptare_Respingere obj(username,username_prieten,"accept");


 if(obj.sendinfo())
 {
     QListWidgetItem *it = ui->listfriends->takeItem(ui->listfriends->currentRow());
     delete it;
     if(ui->listfriends->count()==0)
         QMessageBox::critical(this,"Cereri de prietenie","Nu mai sunt cereri de prietenie.");

 }

}


void MainWindow::on_pushButton_respinge_clicked()
{
    QString username=ui->lineEdit_nume_2->text();
    QString username_prieten;
    username_prieten=ui->listfriends->currentItem()->text();

 SendAcceptare_Respingere obj(username,username_prieten,"resping");

  if(obj.sendinfo())
 {
     QListWidgetItem *it = ui->listfriends->takeItem(ui->listfriends->currentRow());
     delete it;
     if(ui->listfriends->count()==0)
         QMessageBox::critical(this,"Cereri de prietenie","Nu mai sunt cereri de prietenie.");
 }


}


void MainWindow::on_pushButton_inapoi_15_clicked()
{
 ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_vizualizatre_evolutie_prieten_clicked()
{   ui->stackedWidget->setCurrentIndex(18);
    QString obiect;
    obiect=ui->lista_prieteni_a->currentItem()->text();
    SendEvolutiePrieten obj(obiect);

//if(obj.sendinfo()){
    QString evolutie_p=obj.evolutie_prieten();
    QStringList listaevolutie_p;
    listaevolutie_p=evolutie_p.split("|");
    foreach(QString item,listaevolutie_p)
    {
      ui->lista_evolutie_prieteni->addItem(item);
    }

//}

}


void MainWindow::on_pushButton_inapoi_16_clicked()
{
    ui->lista_evolutie_prieteni->clear();
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_adaugare_prieten_clicked()
{
    QString nume_prieten=ui->lineEdit_nume_prieten_nou->text();
    int ok=1;
    for(int i=0;i<nume_prieten.size();i++)
        if(nume_prieten.at(i)<QChar('a')|| nume_prieten.at(i)>QChar('z'))
           {
            ok=0;
            QMessageBox::critical(this,"Cereri de prietenie"," Numele de utilizator al prietenului poate sa contina doar litere mici");
            break;
            }
    if(nume_prieten=="")
       { ok=0;
        QMessageBox::critical(this,"Cereri de prietenie","Nu s-a introdus numele prietenului.");}
    if(ok==1)
        QMessageBox::about(this,"Cereri de prietenie","S-a trimis o cerere de prietenie");
}


void MainWindow::on_pushButton_stergere_clicked()
{

    QString username=ui->lineEdit_nume_2->text();
    SendStergere obj(username);

    //QMessageBox::about(this,"Ștergere cont","Contul utilizatorului a fost șters");
    QMessageBox::StandardButton raspuns=QMessageBox::question(this,"Ștergere cont","Sigur doriți să ștergeți contul?",
                                                            QMessageBox::Yes|QMessageBox::No );
    if(raspuns==QMessageBox::Yes && obj.sendinfo())
        ui->stackedWidget->setCurrentIndex(0);
}

