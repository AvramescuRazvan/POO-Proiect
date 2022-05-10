/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_inregistrare;
    QPushButton *pushButton_autentificare;
    QWidget *autentificare;
    QGroupBox *groupBox;
    QPushButton *pushButton_conectare;
    QPushButton *pushButton_inapoi;
    QGroupBox *groupBox_9;
    QLineEdit *lineEdit_nume_2;
    QLineEdit *lineEdit_parola;
    QLabel *label_nume_utilizator;
    QLabel *label_parila;
    QPushButton *pushButton_am_uitat_parola;
    QWidget *inregistrare;
    QGroupBox *groupBox_2;
    QLabel *label_nume;
    QLabel *label_prenume;
    QLabel *label_adresa_de_mail;
    QLabel *label_varsta;
    QLabel *label_inaltime;
    QLabel *label_greutate;
    QLineEdit *lineEdit_nume;
    QLineEdit *lineEdit_prenume;
    QLineEdit *lineEdit_adres_de_mail;
    QSpinBox *spinBox_varsta;
    QPushButton *pushButton_inregistrare_2;
    QLabel *label_nume_utilizato;
    QLabel *label_parola;
    QLineEdit *lineEdit_nume_utiliazator;
    QLineEdit *lineEdit_parola_2;
    QPushButton *pushButton_inapoi_2;
    QDoubleSpinBox *spinBox_inaltime;
    QDoubleSpinBox *spinBox_greutate;
    QWidget *meniu;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_actualizare_date;
    QPushButton *pushButton_vizualizare_evolutie;
    QPushButton *pushButton_antrenamente;
    QPushButton *pushButton_prieteni;
    QPushButton *pushButton_inapoi_3;
    QWidget *prieteni;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_cereri;
    QPushButton *pushButton_inapoi_4;
    QWidget *actualizaredate;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_salveaza;
    QPushButton *pushButton_inapoi_5;
    QGroupBox *groupBox_10;
    QDateEdit *dateEdit_data;
    QSpinBox *spinBox_greutate_2;
    QLabel *label_data;
    QLabel *label_grutate;
    QWidget *antrenamente;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_inapoi_6;
    QGroupBox *groupBox_12;
    QComboBox *comboBox_zile;
    QLabel *label_selectati_o_zi;
    QPushButton *pushButton_antrenament;
    QWidget *listaevolutie;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_inapoi_7;
    QListWidget *listevolution;
    QWidget *amuitatparola;
    QGroupBox *groupBox_11;
    QLineEdit *lineEdit_nou_paroola;
    QLineEdit *lineEdit_noua_parola2;
    QLabel *label_noua_parola;
    QLabel *label_noua_parola2;
    QLabel *label_adresa_mail;
    QLineEdit *lineEdit_nou_adresamail;
    QPushButton *pushButton_salveaza_2;
    QWidget *listaprieteni;
    QPushButton *pushButton_inapoi_10;
    QListWidget *listfriends;
    QWidget *antrenament1;
    QPlainTextEdit *plainTextEdit_a1;
    QLabel *label;
    QPushButton *pushButton_inapoi_8;
    QWidget *antrenament2;
    QPlainTextEdit *plainTextEdit_a2;
    QLabel *label_2;
    QPushButton *pushButton_inapoi_17;
    QWidget *antrenament3;
    QPlainTextEdit *plainTextEdit_a3;
    QLabel *label_3;
    QPushButton *pushButton_inapoi_9;
    QWidget *antrenament4;
    QLabel *label_8;
    QPushButton *pushButton_inapoi_14;
    QPlainTextEdit *plainTextEdit_a4;
    QWidget *antrenament5;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit_a5;
    QPushButton *pushButton_inapoi_11;
    QWidget *antrenament6;
    QLabel *label_6;
    QPlainTextEdit *plainTextEdit_a6;
    QPushButton *pushButton_inapoi_12;
    QWidget *antrenament7;
    QLabel *label_7;
    QPushButton *pushButton_inapoi_13;
    QPlainTextEdit *plainTextEdit_a7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 350);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 350));
        stackedWidget->setStyleSheet(QString::fromUtf8("#page\n"
"{background-image: url(:/img/1.jpeg);}\n"
"\n"
"#actualizaredate\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"#amuitatparola\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"#antrenament1\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"#antrenament2\n"
"{background-image: url(:/img/12.jpeg);}\n"
"\n"
"\n"
"#antrenament3\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"#antrenament4\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"#antrenament5\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"#antrenament6\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"#antrenament7\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"#autentificare\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"#inregistrare\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"#listaevolutie\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"\n"
"#plistaprieteni\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"\n"
"#meniu\n"
"{	\n"
""
                        "background-image: url(:/img/12.jpeg);}\n"
"\n"
"\n"
"#prieteni\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"#antrenamente\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}\n"
"\n"
"\n"
"#listaprieteni\n"
"{	\n"
"background-image: url(:/img/12.jpeg);}"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox_8 = new QGroupBox(page);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(160, 130, 180, 140));
        groupBox_8->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 215, 184);"));
        pushButton_inregistrare = new QPushButton(groupBox_8);
        pushButton_inregistrare->setObjectName(QString::fromUtf8("pushButton_inregistrare"));
        pushButton_inregistrare->setGeometry(QRect(30, 30, 120, 30));
        pushButton_inregistrare->setStyleSheet(QString::fromUtf8("#pushButton_inregistrare{\n"
"	font: 12pt \"Times New Roman\";\n"
"		background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inregistrare:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(197, 235, 173);\n"
"border-radius:5px;\n"
"\n"
"}"));
        pushButton_autentificare = new QPushButton(groupBox_8);
        pushButton_autentificare->setObjectName(QString::fromUtf8("pushButton_autentificare"));
        pushButton_autentificare->setGeometry(QRect(30, 80, 120, 30));
        pushButton_autentificare->setStyleSheet(QString::fromUtf8("#pushButton_autentificare{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_autentificare:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"	\n"
"background-color: rgb(197, 235, 173);\n"
"border-radius:5px;\n"
"\n"
"}"));
        pushButton_autentificare->setCheckable(false);
        pushButton_autentificare->setFlat(false);
        stackedWidget->addWidget(page);
        autentificare = new QWidget();
        autentificare->setObjectName(QString::fromUtf8("autentificare"));
        groupBox = new QGroupBox(autentificare);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 491, 311));
        groupBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";\n"
""));
        pushButton_conectare = new QPushButton(groupBox);
        pushButton_conectare->setObjectName(QString::fromUtf8("pushButton_conectare"));
        pushButton_conectare->setGeometry(QRect(360, 250, 100, 30));
        pushButton_conectare->setStyleSheet(QString::fromUtf8("#pushButton_conectare{\n"
"	font: 12pt \"Times New Roman\";\n"
"			background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_conectare:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}\n"
""));
        pushButton_inapoi = new QPushButton(groupBox);
        pushButton_inapoi->setObjectName(QString::fromUtf8("pushButton_inapoi"));
        pushButton_inapoi->setGeometry(QRect(30, 250, 100, 30));
        pushButton_inapoi->setStyleSheet(QString::fromUtf8("#pushButton_inapoi{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
"	\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        groupBox_9 = new QGroupBox(groupBox);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(75, 80, 350, 130));
        groupBox_9->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 212, 124);\n"
""));
        lineEdit_nume_2 = new QLineEdit(groupBox_9);
        lineEdit_nume_2->setObjectName(QString::fromUtf8("lineEdit_nume_2"));
        lineEdit_nume_2->setGeometry(QRect(150, 20, 161, 31));
        lineEdit_nume_2->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        lineEdit_nume_2->setEchoMode(QLineEdit::Normal);
        lineEdit_parola = new QLineEdit(groupBox_9);
        lineEdit_parola->setObjectName(QString::fromUtf8("lineEdit_parola"));
        lineEdit_parola->setGeometry(QRect(150, 70, 161, 31));
        lineEdit_parola->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(245, 231, 192);"));
        lineEdit_parola->setEchoMode(QLineEdit::Password);
        label_nume_utilizator = new QLabel(groupBox_9);
        label_nume_utilizator->setObjectName(QString::fromUtf8("label_nume_utilizator"));
        label_nume_utilizator->setGeometry(QRect(20, 30, 111, 16));
        label_nume_utilizator->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_parila = new QLabel(groupBox_9);
        label_parila->setObjectName(QString::fromUtf8("label_parila"));
        label_parila->setGeometry(QRect(20, 70, 71, 31));
        label_parila->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        pushButton_am_uitat_parola = new QPushButton(groupBox_9);
        pushButton_am_uitat_parola->setObjectName(QString::fromUtf8("pushButton_am_uitat_parola"));
        pushButton_am_uitat_parola->setGeometry(QRect(-40, 110, 221, 20));
        pushButton_am_uitat_parola->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"text-decoration: underline;\n"
"font: 9pt \"Times New Roman\";\n"
"font: 12pt \"Segoe UI\";"));
        pushButton_am_uitat_parola->setFlat(true);
        stackedWidget->addWidget(autentificare);
        inregistrare = new QWidget();
        inregistrare->setObjectName(QString::fromUtf8("inregistrare"));
        groupBox_2 = new QGroupBox(inregistrare);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 501, 321));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_nume = new QLabel(groupBox_2);
        label_nume->setObjectName(QString::fromUtf8("label_nume"));
        label_nume->setGeometry(QRect(20, 20, 81, 21));
        label_prenume = new QLabel(groupBox_2);
        label_prenume->setObjectName(QString::fromUtf8("label_prenume"));
        label_prenume->setGeometry(QRect(20, 50, 91, 21));
        label_adresa_de_mail = new QLabel(groupBox_2);
        label_adresa_de_mail->setObjectName(QString::fromUtf8("label_adresa_de_mail"));
        label_adresa_de_mail->setGeometry(QRect(20, 80, 121, 21));
        label_varsta = new QLabel(groupBox_2);
        label_varsta->setObjectName(QString::fromUtf8("label_varsta"));
        label_varsta->setGeometry(QRect(20, 110, 61, 16));
        label_inaltime = new QLabel(groupBox_2);
        label_inaltime->setObjectName(QString::fromUtf8("label_inaltime"));
        label_inaltime->setGeometry(QRect(20, 140, 71, 21));
        label_greutate = new QLabel(groupBox_2);
        label_greutate->setObjectName(QString::fromUtf8("label_greutate"));
        label_greutate->setGeometry(QRect(20, 170, 91, 21));
        lineEdit_nume = new QLineEdit(groupBox_2);
        lineEdit_nume->setObjectName(QString::fromUtf8("lineEdit_nume"));
        lineEdit_nume->setGeometry(QRect(150, 20, 113, 20));
        lineEdit_nume->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        lineEdit_prenume = new QLineEdit(groupBox_2);
        lineEdit_prenume->setObjectName(QString::fromUtf8("lineEdit_prenume"));
        lineEdit_prenume->setGeometry(QRect(150, 50, 113, 20));
        lineEdit_prenume->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        lineEdit_adres_de_mail = new QLineEdit(groupBox_2);
        lineEdit_adres_de_mail->setObjectName(QString::fromUtf8("lineEdit_adres_de_mail"));
        lineEdit_adres_de_mail->setGeometry(QRect(150, 80, 113, 20));
        lineEdit_adres_de_mail->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        spinBox_varsta = new QSpinBox(groupBox_2);
        spinBox_varsta->setObjectName(QString::fromUtf8("spinBox_varsta"));
        spinBox_varsta->setGeometry(QRect(150, 110, 42, 22));
        spinBox_varsta->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        pushButton_inregistrare_2 = new QPushButton(groupBox_2);
        pushButton_inregistrare_2->setObjectName(QString::fromUtf8("pushButton_inregistrare_2"));
        pushButton_inregistrare_2->setGeometry(QRect(280, 280, 100, 20));
        pushButton_inregistrare_2->setStyleSheet(QString::fromUtf8("#pushButton_inregistrare_2{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inregistrare_2:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"	background-color: rgb(157, 217, 146);\n"
"\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        label_nume_utilizato = new QLabel(groupBox_2);
        label_nume_utilizato->setObjectName(QString::fromUtf8("label_nume_utilizato"));
        label_nume_utilizato->setGeometry(QRect(20, 200, 111, 21));
        label_parola = new QLabel(groupBox_2);
        label_parola->setObjectName(QString::fromUtf8("label_parola"));
        label_parola->setGeometry(QRect(20, 232, 71, 20));
        lineEdit_nume_utiliazator = new QLineEdit(groupBox_2);
        lineEdit_nume_utiliazator->setObjectName(QString::fromUtf8("lineEdit_nume_utiliazator"));
        lineEdit_nume_utiliazator->setGeometry(QRect(150, 200, 113, 20));
        lineEdit_nume_utiliazator->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        lineEdit_parola_2 = new QLineEdit(groupBox_2);
        lineEdit_parola_2->setObjectName(QString::fromUtf8("lineEdit_parola_2"));
        lineEdit_parola_2->setGeometry(QRect(150, 230, 113, 20));
        lineEdit_parola_2->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        lineEdit_parola_2->setEchoMode(QLineEdit::Password);
        pushButton_inapoi_2 = new QPushButton(groupBox_2);
        pushButton_inapoi_2->setObjectName(QString::fromUtf8("pushButton_inapoi_2"));
        pushButton_inapoi_2->setGeometry(QRect(10, 280, 100, 20));
        pushButton_inapoi_2->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_2{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_2:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        spinBox_inaltime = new QDoubleSpinBox(groupBox_2);
        spinBox_inaltime->setObjectName(QString::fromUtf8("spinBox_inaltime"));
        spinBox_inaltime->setGeometry(QRect(150, 140, 62, 22));
        spinBox_inaltime->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        spinBox_greutate = new QDoubleSpinBox(groupBox_2);
        spinBox_greutate->setObjectName(QString::fromUtf8("spinBox_greutate"));
        spinBox_greutate->setGeometry(QRect(150, 170, 62, 22));
        spinBox_greutate->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        stackedWidget->addWidget(inregistrare);
        meniu = new QWidget();
        meniu->setObjectName(QString::fromUtf8("meniu"));
        groupBox_3 = new QGroupBox(meniu);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 501, 331));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        pushButton_actualizare_date = new QPushButton(groupBox_3);
        pushButton_actualizare_date->setObjectName(QString::fromUtf8("pushButton_actualizare_date"));
        pushButton_actualizare_date->setGeometry(QRect(190, 110, 135, 35));
        pushButton_actualizare_date->setStyleSheet(QString::fromUtf8("#pushButton_actualizare_date{\n"
"	\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_actualizare_date:hover{\n"
"	\n"
"background-color: rgb(157, 217, 146);\n"
"\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        pushButton_vizualizare_evolutie = new QPushButton(groupBox_3);
        pushButton_vizualizare_evolutie->setObjectName(QString::fromUtf8("pushButton_vizualizare_evolutie"));
        pushButton_vizualizare_evolutie->setGeometry(QRect(190, 160, 135, 35));
        pushButton_vizualizare_evolutie->setStyleSheet(QString::fromUtf8("#pushButton_vizualizare_evolutie{\n"
"	\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_vizualizare_evolutie:hover{\n"
"	\n"
"background-color: rgb(157, 217, 146);\n"
"\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        pushButton_antrenamente = new QPushButton(groupBox_3);
        pushButton_antrenamente->setObjectName(QString::fromUtf8("pushButton_antrenamente"));
        pushButton_antrenamente->setGeometry(QRect(190, 60, 135, 35));
        pushButton_antrenamente->setStyleSheet(QString::fromUtf8("#pushButton_antrenamente{\n"
"	\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_antrenamente:hover{\n"
"	background-color: rgb(157, 217, 146);\n"
"\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        pushButton_prieteni = new QPushButton(groupBox_3);
        pushButton_prieteni->setObjectName(QString::fromUtf8("pushButton_prieteni"));
        pushButton_prieteni->setGeometry(QRect(190, 210, 135, 35));
        pushButton_prieteni->setStyleSheet(QString::fromUtf8("#pushButton_prieteni{\n"
"	\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_prieteni:hover{\n"
"	\n"
"	background-color: rgb(157, 217, 146);\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        pushButton_inapoi_3 = new QPushButton(groupBox_3);
        pushButton_inapoi_3->setObjectName(QString::fromUtf8("pushButton_inapoi_3"));
        pushButton_inapoi_3->setGeometry(QRect(10, 270, 135, 35));
        pushButton_inapoi_3->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_3{\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_3:hover{\n"
"background-color: rgb(157, 217, 146);\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        stackedWidget->addWidget(meniu);
        prieteni = new QWidget();
        prieteni->setObjectName(QString::fromUtf8("prieteni"));
        groupBox_4 = new QGroupBox(prieteni);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 501, 311));
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        pushButton_cereri = new QPushButton(groupBox_4);
        pushButton_cereri->setObjectName(QString::fromUtf8("pushButton_cereri"));
        pushButton_cereri->setGeometry(QRect(10, 40, 135, 35));
        pushButton_cereri->setStyleSheet(QString::fromUtf8("#pushButton_cereri{\n"
"	\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_cereri:hover{\n"
"	background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        pushButton_inapoi_4 = new QPushButton(groupBox_4);
        pushButton_inapoi_4->setObjectName(QString::fromUtf8("pushButton_inapoi_4"));
        pushButton_inapoi_4->setGeometry(QRect(10, 270, 135, 35));
        pushButton_inapoi_4->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_4{\n"
"	\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_4:hover{\n"
"	\n"
"	background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        stackedWidget->addWidget(prieteni);
        actualizaredate = new QWidget();
        actualizaredate->setObjectName(QString::fromUtf8("actualizaredate"));
        groupBox_5 = new QGroupBox(actualizaredate);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 0, 500, 300));
        groupBox_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        pushButton_salveaza = new QPushButton(groupBox_5);
        pushButton_salveaza->setObjectName(QString::fromUtf8("pushButton_salveaza"));
        pushButton_salveaza->setGeometry(QRect(340, 260, 120, 30));
        pushButton_salveaza->setStyleSheet(QString::fromUtf8("#pushButton_salveaza{\n"
"	\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_salveaza:hover{\n"
"	\n"
"background-color: rgb(157, 217, 146);\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        pushButton_inapoi_5 = new QPushButton(groupBox_5);
        pushButton_inapoi_5->setObjectName(QString::fromUtf8("pushButton_inapoi_5"));
        pushButton_inapoi_5->setGeometry(QRect(40, 260, 120, 30));
        pushButton_inapoi_5->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_5{\n"
"background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_5:hover{\n"
"	\n"
"	background-color: rgb(157, 217, 146);\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        groupBox_10 = new QGroupBox(groupBox_5);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(115, 60, 270, 120));
        groupBox_10->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 212, 124);\n"
""));
        dateEdit_data = new QDateEdit(groupBox_10);
        dateEdit_data->setObjectName(QString::fromUtf8("dateEdit_data"));
        dateEdit_data->setGeometry(QRect(100, 70, 110, 22));
        dateEdit_data->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        spinBox_greutate_2 = new QSpinBox(groupBox_10);
        spinBox_greutate_2->setObjectName(QString::fromUtf8("spinBox_greutate_2"));
        spinBox_greutate_2->setGeometry(QRect(101, 40, 111, 22));
        spinBox_greutate_2->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        label_data = new QLabel(groupBox_10);
        label_data->setObjectName(QString::fromUtf8("label_data"));
        label_data->setGeometry(QRect(20, 70, 61, 16));
        label_grutate = new QLabel(groupBox_10);
        label_grutate->setObjectName(QString::fromUtf8("label_grutate"));
        label_grutate->setGeometry(QRect(20, 40, 81, 16));
        stackedWidget->addWidget(actualizaredate);
        antrenamente = new QWidget();
        antrenamente->setObjectName(QString::fromUtf8("antrenamente"));
        groupBox_6 = new QGroupBox(antrenamente);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 0, 491, 311));
        groupBox_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";\n"
"background-image: url(:/img/1.png);"));
        pushButton_inapoi_6 = new QPushButton(groupBox_6);
        pushButton_inapoi_6->setObjectName(QString::fromUtf8("pushButton_inapoi_6"));
        pushButton_inapoi_6->setGeometry(QRect(10, 270, 135, 35));
        pushButton_inapoi_6->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_6{\n"
"	\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_6:hover{\n"
"	\n"
"background-color: rgb(157, 217, 146);\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        groupBox_12 = new QGroupBox(groupBox_6);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(75, 80, 350, 130));
        groupBox_12->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 212, 124);\n"
""));
        comboBox_zile = new QComboBox(groupBox_12);
        comboBox_zile->addItem(QString());
        comboBox_zile->addItem(QString());
        comboBox_zile->addItem(QString());
        comboBox_zile->addItem(QString());
        comboBox_zile->addItem(QString());
        comboBox_zile->addItem(QString());
        comboBox_zile->addItem(QString());
        comboBox_zile->setObjectName(QString::fromUtf8("comboBox_zile"));
        comboBox_zile->setGeometry(QRect(130, 20, 81, 41));
        comboBox_zile->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(245, 231, 192);"));
        label_selectati_o_zi = new QLabel(groupBox_12);
        label_selectati_o_zi->setObjectName(QString::fromUtf8("label_selectati_o_zi"));
        label_selectati_o_zi->setGeometry(QRect(10, 30, 121, 20));
        label_selectati_o_zi->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        pushButton_antrenament = new QPushButton(groupBox_12);
        pushButton_antrenament->setObjectName(QString::fromUtf8("pushButton_antrenament"));
        pushButton_antrenament->setGeometry(QRect(250, 90, 91, 31));
        pushButton_antrenament->setStyleSheet(QString::fromUtf8("#pushButton_antrenament{\n"
"	\n"
"	background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_antrenament:hover{\n"
"	\n"
"background-color: rgb(157, 217, 146);\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        stackedWidget->addWidget(antrenamente);
        listaevolutie = new QWidget();
        listaevolutie->setObjectName(QString::fromUtf8("listaevolutie"));
        groupBox_7 = new QGroupBox(listaevolutie);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 0, 500, 350));
        groupBox_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        pushButton_inapoi_7 = new QPushButton(groupBox_7);
        pushButton_inapoi_7->setObjectName(QString::fromUtf8("pushButton_inapoi_7"));
        pushButton_inapoi_7->setGeometry(QRect(10, 270, 135, 35));
        pushButton_inapoi_7->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_7{\n"
"\n"
"background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_7:hover{\n"
"	\n"
"	background-color: rgb(157, 217, 146);\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        listevolution = new QListWidget(groupBox_7);
        listevolution->setObjectName(QString::fromUtf8("listevolution"));
        listevolution->setGeometry(QRect(100, 40, 300, 200));
        listevolution->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        stackedWidget->addWidget(listaevolutie);
        amuitatparola = new QWidget();
        amuitatparola->setObjectName(QString::fromUtf8("amuitatparola"));
        groupBox_11 = new QGroupBox(amuitatparola);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(75, 59, 350, 151));
        groupBox_11->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 212, 124);\n"
""));
        lineEdit_nou_paroola = new QLineEdit(groupBox_11);
        lineEdit_nou_paroola->setObjectName(QString::fromUtf8("lineEdit_nou_paroola"));
        lineEdit_nou_paroola->setGeometry(QRect(150, 60, 161, 31));
        lineEdit_nou_paroola->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        lineEdit_nou_paroola->setEchoMode(QLineEdit::Password);
        lineEdit_noua_parola2 = new QLineEdit(groupBox_11);
        lineEdit_noua_parola2->setObjectName(QString::fromUtf8("lineEdit_noua_parola2"));
        lineEdit_noua_parola2->setGeometry(QRect(150, 100, 161, 31));
        lineEdit_noua_parola2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(245, 231, 192);"));
        lineEdit_noua_parola2->setEchoMode(QLineEdit::Password);
        label_noua_parola = new QLabel(groupBox_11);
        label_noua_parola->setObjectName(QString::fromUtf8("label_noua_parola"));
        label_noua_parola->setGeometry(QRect(20, 70, 111, 16));
        label_noua_parola->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_noua_parola2 = new QLabel(groupBox_11);
        label_noua_parola2->setObjectName(QString::fromUtf8("label_noua_parola2"));
        label_noua_parola2->setGeometry(QRect(20, 100, 111, 31));
        label_noua_parola2->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_adresa_mail = new QLabel(groupBox_11);
        label_adresa_mail->setObjectName(QString::fromUtf8("label_adresa_mail"));
        label_adresa_mail->setGeometry(QRect(20, 30, 111, 16));
        label_adresa_mail->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        lineEdit_nou_adresamail = new QLineEdit(groupBox_11);
        lineEdit_nou_adresamail->setObjectName(QString::fromUtf8("lineEdit_nou_adresamail"));
        lineEdit_nou_adresamail->setGeometry(QRect(150, 20, 161, 31));
        lineEdit_nou_adresamail->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        lineEdit_nou_adresamail->setEchoMode(QLineEdit::Password);
        pushButton_salveaza_2 = new QPushButton(amuitatparola);
        pushButton_salveaza_2->setObjectName(QString::fromUtf8("pushButton_salveaza_2"));
        pushButton_salveaza_2->setGeometry(QRect(320, 240, 101, 21));
        pushButton_salveaza_2->setStyleSheet(QString::fromUtf8("#pushButton_salveaza_2{\n"
"	font: 12pt \"Times New Roman\";\n"
"			background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_salveaza_2:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}\n"
""));
        stackedWidget->addWidget(amuitatparola);
        listaprieteni = new QWidget();
        listaprieteni->setObjectName(QString::fromUtf8("listaprieteni"));
        pushButton_inapoi_10 = new QPushButton(listaprieteni);
        pushButton_inapoi_10->setObjectName(QString::fromUtf8("pushButton_inapoi_10"));
        pushButton_inapoi_10->setGeometry(QRect(10, 270, 135, 35));
        pushButton_inapoi_10->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_10{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(245, 231, 192);\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_10:hover{\n"
"	\n"
"	background-color: rgb(157, 217, 146);\n"
"\n"
"border-radius:5px;\n"
"\n"
"}"));
        listfriends = new QListWidget(listaprieteni);
        listfriends->setObjectName(QString::fromUtf8("listfriends"));
        listfriends->setGeometry(QRect(100, 40, 300, 200));
        listfriends->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 231, 192);"));
        stackedWidget->addWidget(listaprieteni);
        antrenament1 = new QWidget();
        antrenament1->setObjectName(QString::fromUtf8("antrenament1"));
        plainTextEdit_a1 = new QPlainTextEdit(antrenament1);
        plainTextEdit_a1->setObjectName(QString::fromUtf8("plainTextEdit_a1"));
        plainTextEdit_a1->setGeometry(QRect(15, 70, 471, 181));
        plainTextEdit_a1->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 223, 150);\n"
"font: 12pt \"Times New Roman\";"));
        label = new QLabel(antrenament1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 441, 41));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        pushButton_inapoi_8 = new QPushButton(antrenament1);
        pushButton_inapoi_8->setObjectName(QString::fromUtf8("pushButton_inapoi_8"));
        pushButton_inapoi_8->setGeometry(QRect(15, 270, 100, 30));
        pushButton_inapoi_8->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_8{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
"	\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_8:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        stackedWidget->addWidget(antrenament1);
        antrenament2 = new QWidget();
        antrenament2->setObjectName(QString::fromUtf8("antrenament2"));
        plainTextEdit_a2 = new QPlainTextEdit(antrenament2);
        plainTextEdit_a2->setObjectName(QString::fromUtf8("plainTextEdit_a2"));
        plainTextEdit_a2->setGeometry(QRect(15, 70, 471, 191));
        plainTextEdit_a2->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 223, 150);\n"
"font: 12pt \"Times New Roman\";"));
        label_2 = new QLabel(antrenament2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 20, 441, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        pushButton_inapoi_17 = new QPushButton(antrenament2);
        pushButton_inapoi_17->setObjectName(QString::fromUtf8("pushButton_inapoi_17"));
        pushButton_inapoi_17->setGeometry(QRect(15, 270, 100, 30));
        pushButton_inapoi_17->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_17{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
"	\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_17:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        stackedWidget->addWidget(antrenament2);
        antrenament3 = new QWidget();
        antrenament3->setObjectName(QString::fromUtf8("antrenament3"));
        plainTextEdit_a3 = new QPlainTextEdit(antrenament3);
        plainTextEdit_a3->setObjectName(QString::fromUtf8("plainTextEdit_a3"));
        plainTextEdit_a3->setGeometry(QRect(15, 70, 471, 191));
        plainTextEdit_a3->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 223, 150);\n"
"font: 12pt \"Times New Roman\";"));
        label_3 = new QLabel(antrenament3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 20, 441, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        pushButton_inapoi_9 = new QPushButton(antrenament3);
        pushButton_inapoi_9->setObjectName(QString::fromUtf8("pushButton_inapoi_9"));
        pushButton_inapoi_9->setGeometry(QRect(15, 270, 100, 30));
        pushButton_inapoi_9->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_9{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
"	\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_9:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        stackedWidget->addWidget(antrenament3);
        antrenament4 = new QWidget();
        antrenament4->setObjectName(QString::fromUtf8("antrenament4"));
        label_8 = new QLabel(antrenament4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 20, 441, 41));
        label_8->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        pushButton_inapoi_14 = new QPushButton(antrenament4);
        pushButton_inapoi_14->setObjectName(QString::fromUtf8("pushButton_inapoi_14"));
        pushButton_inapoi_14->setGeometry(QRect(15, 270, 100, 30));
        pushButton_inapoi_14->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_14{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
"	\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_14:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        plainTextEdit_a4 = new QPlainTextEdit(antrenament4);
        plainTextEdit_a4->setObjectName(QString::fromUtf8("plainTextEdit_a4"));
        plainTextEdit_a4->setGeometry(QRect(15, 70, 471, 181));
        plainTextEdit_a4->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 223, 150);\n"
"font: 12pt \"Times New Roman\";"));
        stackedWidget->addWidget(antrenament4);
        antrenament5 = new QWidget();
        antrenament5->setObjectName(QString::fromUtf8("antrenament5"));
        label_5 = new QLabel(antrenament5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 20, 441, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        plainTextEdit_a5 = new QPlainTextEdit(antrenament5);
        plainTextEdit_a5->setObjectName(QString::fromUtf8("plainTextEdit_a5"));
        plainTextEdit_a5->setGeometry(QRect(15, 70, 471, 181));
        plainTextEdit_a5->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 223, 150);\n"
"font: 12pt \"Times New Roman\";"));
        pushButton_inapoi_11 = new QPushButton(antrenament5);
        pushButton_inapoi_11->setObjectName(QString::fromUtf8("pushButton_inapoi_11"));
        pushButton_inapoi_11->setGeometry(QRect(15, 270, 100, 30));
        pushButton_inapoi_11->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_11{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
"	\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_11:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        stackedWidget->addWidget(antrenament5);
        antrenament6 = new QWidget();
        antrenament6->setObjectName(QString::fromUtf8("antrenament6"));
        label_6 = new QLabel(antrenament6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 20, 441, 41));
        label_6->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        plainTextEdit_a6 = new QPlainTextEdit(antrenament6);
        plainTextEdit_a6->setObjectName(QString::fromUtf8("plainTextEdit_a6"));
        plainTextEdit_a6->setGeometry(QRect(15, 70, 471, 181));
        plainTextEdit_a6->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 223, 150);\n"
"font: 12pt \"Times New Roman\";"));
        pushButton_inapoi_12 = new QPushButton(antrenament6);
        pushButton_inapoi_12->setObjectName(QString::fromUtf8("pushButton_inapoi_12"));
        pushButton_inapoi_12->setGeometry(QRect(15, 270, 100, 30));
        pushButton_inapoi_12->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_12{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
"	\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_12:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        stackedWidget->addWidget(antrenament6);
        antrenament7 = new QWidget();
        antrenament7->setObjectName(QString::fromUtf8("antrenament7"));
        label_7 = new QLabel(antrenament7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 20, 441, 41));
        label_7->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        pushButton_inapoi_13 = new QPushButton(antrenament7);
        pushButton_inapoi_13->setObjectName(QString::fromUtf8("pushButton_inapoi_13"));
        pushButton_inapoi_13->setGeometry(QRect(15, 270, 100, 30));
        pushButton_inapoi_13->setStyleSheet(QString::fromUtf8("#pushButton_inapoi_13{\n"
"	font: 12pt \"Times New Roman\";\n"
"	background-color: rgb(245, 231, 192);\n"
"	\n"
" border-radius:8px;\n"
"}\n"
"#pushButton_inapoi_13:hover{\n"
"	font: 12pt \"Times New Roman\";\n"
"\n"
"background-color: rgb(157, 217, 146);\n"
"border-radius:5px;\n"
"\n"
"}"));
        plainTextEdit_a7 = new QPlainTextEdit(antrenament7);
        plainTextEdit_a7->setObjectName(QString::fromUtf8("plainTextEdit_a7"));
        plainTextEdit_a7->setGeometry(QRect(15, 70, 471, 181));
        plainTextEdit_a7->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 223, 150);\n"
"font: 12pt \"Times New Roman\";"));
        stackedWidget->addWidget(antrenament7);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_8->setTitle(QString());
        pushButton_inregistrare->setText(QCoreApplication::translate("MainWindow", "Autentificare", nullptr));
        pushButton_autentificare->setText(QCoreApplication::translate("MainWindow", "\303\216nregistrare", nullptr));
        groupBox->setTitle(QString());
        pushButton_conectare->setText(QCoreApplication::translate("MainWindow", "Conectare", nullptr));
        pushButton_inapoi->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        groupBox_9->setTitle(QString());
        label_nume_utilizator->setText(QCoreApplication::translate("MainWindow", "Nume utilizator", nullptr));
        label_parila->setText(QCoreApplication::translate("MainWindow", "Parol\304\203", nullptr));
        pushButton_am_uitat_parola->setText(QCoreApplication::translate("MainWindow", "Am uitat parola", nullptr));
        groupBox_2->setTitle(QString());
        label_nume->setText(QCoreApplication::translate("MainWindow", "Nume", nullptr));
        label_prenume->setText(QCoreApplication::translate("MainWindow", "Prenume", nullptr));
        label_adresa_de_mail->setText(QCoreApplication::translate("MainWindow", "Adresa de mail", nullptr));
        label_varsta->setText(QCoreApplication::translate("MainWindow", "V\303\242rst\304\203", nullptr));
        label_inaltime->setText(QCoreApplication::translate("MainWindow", "\303\216n\304\203l\310\233ime", nullptr));
        label_greutate->setText(QCoreApplication::translate("MainWindow", "Greutate", nullptr));
        pushButton_inregistrare_2->setText(QCoreApplication::translate("MainWindow", "\303\216nregistrare", nullptr));
        label_nume_utilizato->setText(QCoreApplication::translate("MainWindow", "Nume utilizator", nullptr));
        label_parola->setText(QCoreApplication::translate("MainWindow", "Parol\304\203", nullptr));
        pushButton_inapoi_2->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        groupBox_3->setTitle(QString());
        pushButton_actualizare_date->setText(QCoreApplication::translate("MainWindow", "Actualizare date", nullptr));
        pushButton_vizualizare_evolutie->setText(QCoreApplication::translate("MainWindow", "Vizualizare evolu\310\233ie", nullptr));
        pushButton_antrenamente->setText(QCoreApplication::translate("MainWindow", "Antrenamente", nullptr));
        pushButton_prieteni->setText(QCoreApplication::translate("MainWindow", "Prieteni", nullptr));
        pushButton_inapoi_3->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        groupBox_4->setTitle(QString());
        pushButton_cereri->setText(QCoreApplication::translate("MainWindow", "Cereri de prietenie", nullptr));
        pushButton_inapoi_4->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        groupBox_5->setTitle(QString());
        pushButton_salveaza->setText(QCoreApplication::translate("MainWindow", "Salveaz\304\203", nullptr));
        pushButton_inapoi_5->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        groupBox_10->setTitle(QString());
        label_data->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        label_grutate->setText(QCoreApplication::translate("MainWindow", "Greutate", nullptr));
        groupBox_6->setTitle(QString());
        pushButton_inapoi_6->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        groupBox_12->setTitle(QString());
        comboBox_zile->setItemText(0, QCoreApplication::translate("MainWindow", "Luni", nullptr));
        comboBox_zile->setItemText(1, QCoreApplication::translate("MainWindow", "Mar\310\233i", nullptr));
        comboBox_zile->setItemText(2, QCoreApplication::translate("MainWindow", "Miercuri", nullptr));
        comboBox_zile->setItemText(3, QCoreApplication::translate("MainWindow", "Joi", nullptr));
        comboBox_zile->setItemText(4, QCoreApplication::translate("MainWindow", "Vineri", nullptr));
        comboBox_zile->setItemText(5, QCoreApplication::translate("MainWindow", "S\303\242mb\304\203t\304\203", nullptr));
        comboBox_zile->setItemText(6, QCoreApplication::translate("MainWindow", "Duminic\304\203", nullptr));

        label_selectati_o_zi->setText(QCoreApplication::translate("MainWindow", "Selecta\310\233i o zi", nullptr));
        pushButton_antrenament->setText(QCoreApplication::translate("MainWindow", "Antrenament", nullptr));
        groupBox_7->setTitle(QString());
        pushButton_inapoi_7->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        groupBox_11->setTitle(QString());
        label_noua_parola->setText(QCoreApplication::translate("MainWindow", "Noua parol\304\203", nullptr));
        label_noua_parola2->setText(QCoreApplication::translate("MainWindow", "Noua parol\304\203", nullptr));
        label_adresa_mail->setText(QCoreApplication::translate("MainWindow", "Adresa de mail", nullptr));
        pushButton_salveaza_2->setText(QCoreApplication::translate("MainWindow", "Salveaz\304\203", nullptr));
        pushButton_inapoi_10->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        plainTextEdit_a1->setPlainText(QCoreApplication::translate("MainWindow", "Po\310\233i s\304\203-\310\233i lucrezi eficient bra\310\233ele, spatele \310\231i pectoralii \303\256n mii \310\231i mii de feluri, acas\304\203, folosindu-te doar de greutatea corpului \310\231i de c\303\242teva obiecte din spa\310\233iul \303\256n care te antrenezi. Executate \303\256n mod corect, exerci\310\233iile de mai jos asigur\304\203 rezultate vizibile, \303\256ntr-un timp c\303\242t se poate de scurt.\n"
"Iat\304\203 c\303\242teva tipuri de exerci\310\233ii pe care le po\310\233i include \303\256n programul t\304\203u zilnic de antrenament:\n"
"\n"
"1. Flot\304\203ri simple\n"
"Pentru a-\310\233i lucra eficient bicep\310\231ii \310\231i pectoralii, \303\256\310\233i recomand\304\203m s\304\203 faci flot\304\203ri. Aceste exerci\310\233ii complete se pot realiza \303\256n mai multe feluri, \303\256n func\310\233ie de nivelul t\304\203u de practic\304\203: \303\256n genunchi sau pe picioare, modific\303\242nd \303\256nclinarea, schimb\303\242nd pozi\310\233ia m\303\242inilor (mai pu\310\233in sau mai"
                        " mult, apropiate una de cealalt\304\203), adapt\303\242nd viteza sau num\304\203rul de repet\304\203ri. Zi dup\304\203 zi, vei realiza progrese vizibile \310\231i \303\256\310\233i vei tonifia bra\310\233ele.\n"
"\n"
"2. Flot\304\203ri la paralele\n"
"Pentru a-\310\233i lucra tricep\310\231ii, mu\310\231chii cei mai lungi de la nivelul bra\310\233elor, alege flot\304\203rile la paralele. Sprijin\304\203-te de o mas\304\203 joas\304\203 sau de un scaun, cu picioarele mai mult sau mai pu\310\233in \303\256n fa\310\233\304\203, \303\256n func\310\233ie de nivel, \310\231i coboar\304\203 bra\310\233ele p\303\242n\304\203 formezi un unghi de 90\302\260 cu cotul. Num\304\203rul de repet\304\203ri depinde de nivelul t\304\203u de practic\304\203.\n"
"\n"
"3. Trac\310\233iuni\n"
"Pentru a realiza aceste exerci\310\233ii, ai nevoie de o bar\304\203 de trac\310\233iune. Pe l\303\242ng\304\203 lucrarea bra\310\233elor, trac\310\233iunile te ajut\304\203 s\304\203 \303\256\310\233i lucrezi eficient spatele (exact ca spate"
                        "le \303\256n \342\200\236V\342\200\235 al \303\256not\304\203torilor). Acest exerci\310\233iu este dificil, deci nu te \303\256ngrijora dac\304\203 la \303\256nceput nu reu\310\231e\310\231ti s\304\203 faci dec\303\242t o trac\310\233iune. Odat\304\203 cu trecerea timpului, vei vedea progrese notabile. ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " Exerci\310\233ii fizice pentru partea superioar\304\203 a corpului", nullptr));
        pushButton_inapoi_8->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        plainTextEdit_a2->setPlainText(QCoreApplication::translate("MainWindow", "Cine nu \303\256\310\231i dore\310\231te s\304\203 aib\304\203 coapse \310\231i fese bine lucrate \310\231i tonifiate? Realiz\303\242nd exerci\310\233iile care urmeaz\304\203, acest vis poate deveni realitate. Avem \303\256ncredere \303\256n tine!\n"
"\n"
"1. Genuflexiuni\n"
"Aceste exerci\310\233ii sunt ideale pentru lucrarea musculaturii picioarelor. Realizate corect, genuflexiunile te ajut\304\203 s\304\203 \303\256\310\233i lucrezi coapsele \310\231i fesele.\n"
"\n"
"Sigur cuno\310\231ti aceste exerci\310\233ii, dar reamintim cum se execut\304\203 \310\231i pentru persoanele care nu le-au realizat niciodat\304\203: bine \303\256ncordat, cu picioarele dep\304\203rtate la l\304\203\310\233imea umerilor, \303\256ndoaie picioarele p\303\242n\304\203 formezi un unghi de 90\302\260 cu genunchii.\n"
"\n"
"Trage posteriorul c\304\203tre spate. Linia umerilor nu trebuie s\304\203 dep\304\203\310\231easc\304\203 niciodat\304\203 linia genunchilor. Po\310\233i cre\310\231te dificultatea exerci\310\233iului, realiz\303"
                        "\242nd mai multe repet\304\203ri, \303\256ncetinind cobor\303\242rea sau ridicarea. \303\216n cur\303\242nd, vei avea picioarele tonifiate!\n"
"\n"
"Spatele trebuie \310\233inut c\303\242t mai drept, iar privirea trebuie orientat\304\203 spre \303\256nainte. Cobor\303\242rea se realizeaz\304\203 p\303\242n\304\203 \303\256n punctul \303\256n care sim\310\233i c\304\203 exist\304\203 un nivel considerabil de tensiune la nivelul coapselor. Pentru un plus de dificultate, utilizeaz\304\203 gantere de greutate redus\304\203. \n"
"\n"
"2. Fand\304\203ri \310\231i step\n"
"Acest exerci\310\233iu pune accentul pe lucrarea mu\310\231chilor fesieri. Prin realizarea de fand\304\203ri, \303\256\310\233i lucrezi \310\231i coapsele. Mi\310\231carea este simpl\304\203: este suficient s\304\203 avansezi cu un picior \303\256n fa\310\233\304\203, flexion\303\242ndu-l p\303\242n\304\203 c\303\242nd genunchiul piciorului din spate aproape atinge solul.\n"
"\n"
"\310\232i se pare prea u\310\231or? Atunci realizeaz\304\203 fand\304"
                        "\203ri cu s\304\203rituri, altern\303\242nd picioarele. Pentru step, po\310\233i aborda un mers de urcat sc\304\203rile, pentru a simula urcarea \310\231i cobor\303\242rea. Nu ezita s\304\203 faci exerci\310\233iile cu muzic\304\203 pe fundal, pentru a fi mai distractive \310\231i a alunga eventuala monotonie din timpul practic\304\203rii acestora.\n"
"", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " Exerci\310\233ii pentru partea inferioar\304\203 a corpului", nullptr));
        pushButton_inapoi_17->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        plainTextEdit_a3->setPlainText(QCoreApplication::translate("MainWindow", "Exist\304\203 numeroase exerci\310\233ii u\310\231or de realizat \310\231i foarte eficiente pentru lucrarea acestei p\304\203r\310\233i a corpului, chiar \310\231i f\304\203r\304\203 aparate de fitness. Iat\304\203 c\303\242teva exemple:\n"
"\n"
"1. Plank / plan\310\231\304\203\n"
"Acest exerci\310\233iu este ideal pentru persoanele care \303\256\310\231i doresc un abdomen plat. Pozi\310\233ia este urm\304\203toarea: sprijin\304\203-te pe antebra\310\233e \310\231i pe v\303\242rfurile picioarelor. Este important s\304\203 nu curbezi spatele. Ideal ar fi s\304\203 realizezi 3 serii de c\303\242te 30 de secunde, pentru \303\256nceput. Po\310\233i cre\310\231te acest interval de timp pe m\304\203sur\304\203 ce progresezi.\n"
"\n"
"2. Abdomene\n"
"Acesta este unul din exerci\310\233iile de baz\304\203 pentru lucrarea abdomenului. \303\216ntins pe spate, cu genunchii \303\256ndoi\310\233i \310\231i m\303\242inile la ceaf\304\203, \303\256\310\233i ridici trunchiul, \303\256nchipuindu-\310\233i c\304\203 \303\256\310"
                        "\233i \303\256mpingi abdomenul \303\256nspre spate.  \n"
"\n"
"3. Ridic\304\203ri ale picioarelor\n"
"Este un exerci\310\233iu ideal pentru a lucra partea inferioar\304\203 a mu\310\231chilor abdominali. \303\216ntins/\304\203 pe spate, este suficient s\304\203 ridici picioarele c\303\242t mai sus posibil (ideal \303\256n pozi\310\233ie vertical\304\203), f\304\203r\304\203 a curba spatele.\n"
"\n"
"Men\310\233ine picioarele \303\256ntr-o pozi\310\233ie dreapt\304\203, cu bra\310\233ele orientate \303\256n sus, la un unghi de aproximativ 45\302\260 fa\310\233\304\203 de suprafa\310\233a solului. La fel ca \303\256n cazul execut\304\203rii plan\310\231ei, include \303\256n rutina de antrenamente pentru acas\304\203 un set de 3-5 serii, a c\303\242te 30 de secunde fiecare. ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", " Exerci\310\233ii pentru mu\310\231chii abdominali", nullptr));
        pushButton_inapoi_9->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Antrenamentul cardio acas\304\203", nullptr));
        pushButton_inapoi_14->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        plainTextEdit_a4->setPlainText(QCoreApplication::translate("MainWindow", "Poate p\304\203rea complicat s\304\203 faci antrenamente cardio la domiciliu, f\304\203r\304\203 echipament costisitor. Cu toate acestea, exist\304\203 c\303\242teva tipuri de exerci\310\233ii care \303\256\310\233i vor pune s\303\242ngele \303\256n mi\310\231care \310\231i te vor ajuta s\304\203 scapi de kilogramele \303\256n plus:\n"
"\n"
"s\304\203riturile cu coarda (10-20 de minute \303\256n fiecare zi);\n"
"s\304\203rituri cu genunchii la piept;\n"
"alergarea pe loc;\n"
"exerci\310\233iile burpees \342\200\223 un amestec \303\256ntre flot\304\203ri, genuflexiuni \310\231i s\304\203rituri, acest exerci\310\233iu este apreciat pentru capacitatea de a arde calorii \303\256ntr-un timp scurt. \303\216ncearc\304\203-l!\n"
"Jumping Jacks  sau s\304\203riturile pe loc, dep\304\203rt\303\242nd picioarele \310\231i ridic\303\242nd bra\310\233ele \303\256n acela\310\231i timp \342\200\223 pot arde circa 100 de calorii \303\256n doar 10 minute.\n"
"\n"
"SFAT: Pentru a arde mai multe gr\304\203simi \310\231i s\304\203"
                        " ai un boost de energie pentru \303\256ntreaga zi, f\304\203 antrenamente cardiovasculare diminea\310\233a, pe stomacul gol.", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Antrenament pentru picioare", nullptr));
        plainTextEdit_a5->setPlainText(QCoreApplication::translate("MainWindow", " Genuflexiuni cu propria greutate:\n"
"\n"
"Stai in picioare, cu talpile departate la o latime de umeri si lasa-ti greutatea pe calcaie\n"
"Apleaca-te in fata din solduri si lasa-te in jos, cu fundul in spate. Indoaie genunchii, pana cand coapsele formeaza o linie paralela cu podeaua\n"
"Impinge in calcaie pentru a te ridica din nou in pozitia de start, tinand fundul si trunchiul incordate in timpul ridicarii\n"
"\n"
"Fandari inverse cu ridicarea genunchiului:\n"
"\n"
"Incepi din pozitia stand, cu picioarele departate la o latime de umeri\n"
"Paseste in spate cu piciorul stang, calcand pe talpa indoita si indoind amandoi genunchii, pentru a crea doua unghiuri de 90 de grade\n"
"Impinge in calcaiul drept pentru a reveni in pozitia de start. Cand te ridici, impinge genunchiul stang catre piept\n"
"Repeta miscarea pornind cu celalalt picior.\n"
"\n"
"Genuflexiuni in plie cu ridicarea gambei:\n"
"\n"
"Porneste din pozitia stand, cu picioarele mai departate de o latime de umeri, cu varfurile indreptate catre exteri"
                        "or si mainile pe solduri sau unite in fata pieptului\n"
"Coboara in genuflexiune pana cand coapsele ajung parelele cu podeaua\n"
"Stand in pozitia de genuflexiune, ridica ambele calcaie de pe podea si mentine pozitia pentru doua secunde\n"
"Coboara calcaiele inapoi pe podea.\n"
"\n"
"Genuflexiuni cu saritura:\n"
"\n"
"Porneste din pozitia stand, cu picioarele usor mai apropiate de o latime de sold\n"
"Apleaca-te inainte din solduri si coboara fundul intr-o pozitie de genuflexiune. Indoaie genunchii pana cand coapsele sunt paralele cu podeaua\n"
"Sari in aer cat de sus poti si intinde picioarele. Lasa bratele in jos pentru elan si tine spatele drept si pieptul ridicat\n"
"Aterizeaza inapoi pe podea cu genunchii moi, coborand direct in alta genuflexiune.\n"
"\n"
"Sarituri cu varfurile picioarelor pe banca (scaun):\n"
"\n"
"Stai cu fata la o banca sau la o cutie (sau la un scaun daca nu ai altceva la indemana), cu mainile pe solduri sau pe langa corp\n"
"Pune piciorul stang pe banca, apoi schimba picioarele si pu"
                        "ne piciorul drept pe banca, alternand rapid\n"
"Tine spatele drept si pieptul ridicat pe toata durata exercitiului.\n"
"\n"
"Fandari laterale:\n"
"\n"
"Stai in picioare, cu talpile departate la o latime de sold\n"
"Fa un pas mare catre dreapta. Indoaie genunchiul drept si impinge fundul in spate, tinand piciorul stang drept. Mentine pieptul ridicat si trunchiul incordat.\n"
"Repeta fandarea cu celalalt picior.\n"
"", nullptr));
        pushButton_inapoi_11->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Antrenament pentru abdomen", nullptr));
        plainTextEdit_a6->setPlainText(QCoreApplication::translate("MainWindow", "Abdomene\n"
"Seturi 3: Repet\304\203ri 15-20\n"
"\n"
"Stai \303\256ntins pe spate cu genunchii \303\256ndoi\310\233i \310\231i picioarele pe podea. Plaseaz\304\203 m\303\242inile \303\256n spatele capului sau \303\256ncruci\310\231eaz\304\203-le pe piept. Contracteaz\304\203-\310\233i mu\310\231chii abdominali tr\304\203g\303\242nd burta spre coloana vertebral\304\203 \310\231i stai cu spatele \303\256ntins pe podea. Ridic\304\203 umerii u\310\231or de pe podea. Str\303\242nge abdomenul \303\256n partea de sus a mi\310\231c\304\203rii \310\231i coboar\304\203 \303\256napoi la pozi\310\233ia de pornire realiz\303\242ndo mi\310\231care controlat\304\203.\n"
"\n"
"Heel Reach \n"
"Seturi: 3 Repet\304\203ri: 15-20\n"
"\n"
"Metod\304\203: Stai \303\256ntins pe spate cu genunchii \303\256ndoi\310\233i \310\231i picioarele pe podea. Pune bra\310\233ele pe l\303\242ng\304\203 corp. Contracteaz\304\203-\310\233i oblicii duc\303\242nd m\303\242na dreapt\304\203 la c\304\203lc\303\242iul drept, de \303\256ndat\304\203 ce "
                        "ai atins c\304\203lc\303\242iul, repet\304\203 aceast\304\203 mi\310\231care cu m\303\242na st\303\242ng\304\203. Men\310\233ine aceste mi\310\231c\304\203ri alternativ. Asigur\304\203-te c\304\203 partea inferioar\304\203 a spatelui r\304\203m\303\242ne lipit\304\203 de podea, iar umerii sunt u\310\231or ridica\310\233i.\n"
"\n"
"Abdomene inverse \342\200\223 pe blog, e o descriere gre\310\231it\304\203, am f\304\203cut eu una.\n"
"Seturi: 3 Repet\304\203ri 15-20\n"
"\n"
"Stai \303\256ntins pe podea cu partea inferioar\304\203 a spatelui lipit\304\203 de aceasta, genunchii pu\310\233in \303\256ndoi\310\233i \310\231i talpa piciorului lipit\304\203 de podea. Pozi\310\233ioneaz\304\203 m\303\242inile pe l\303\242ng\304\203 corp. Ca pozi\310\233ie de plecare, ridic\304\203 genunchii \310\231i picioarele f\304\203r\304\203 s\304\203 te aju\310\233i de m\303\242ini la un unghi de 90 de grade fa\310\233\304\203 de podea \310\231i, atunci c\303\242nd ai ajuns la un unghi de 90 de grade, \303\256mpinge din abdomen.. "
                        "Dup\304\203 aceea, cu o mi\310\231care controlat\304\203, las\304\203 jos genunchii \310\231i picioarele f\304\203r\304\203 s\304\203 atingi podeaua. Aceast\304\203 mi\310\231care reprezint\304\203 o repetare. \n"
"\n"
"Glute Bridge \n"
"Seturi: 3 Repet\304\203ri 15-20\n"
"\n"
"Stai \303\256ntins pe spate cu genunchii ridica\310\233i \310\231i cu picioarele pe podea. Stai cu bra\310\233ele relaxate, pe l\303\242ng\304\203 corp. Ridic\304\203-te de \310\231olduri p\304\203str\303\242nd umerii \310\231i bra\310\233ele pe podea. La cel mai \303\256nalt punct, men\310\233ine o pauz\304\203 \310\231i str\303\242nge din mu\310\231chii fesieri \310\231i dup\304\203 aceea coboar\304\203 la podea. \n"
"\n"
"Forearm Plank\n"
"Seturi: 3 Repet\304\203ri: Men\310\233inere 30-60 secunde\n"
"\n"
"Stai \303\256ntr-o pozi\310\233ie de flotare cu coatele pe podea la un unghi de 90 de grade. \303\216ncordeaz\304\203 abdomenul \310\231i men\310\233ine pozi\310\233ia timp de 30-60 de secunde.", nullptr));
        pushButton_inapoi_12->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Antrenament pentru partea inferioar\304\203 f\304\203r\304\203 echipament", nullptr));
        pushButton_inapoi_13->setText(QCoreApplication::translate("MainWindow", "\303\216napoi", nullptr));
        plainTextEdit_a7->setPlainText(QCoreApplication::translate("MainWindow", "Ridicari de gambe cu un singur picior:\n"
"\n"
"Stai in picioare, cu talpile departate la o latime de sold\n"
"Ridica genunchiul stang la nivelul soldului, cu varfurile in jos, cu mainile pe solduri sau in spatele capului (alege o pozitie in care sa iti mentii echilibrul)\n"
"Tine trunchiul incordat in timp ce ridici calcaiul drept cat de sus poti, balansandu-te pe centrul talpii\n"
"Mentine pozitia timp de trei secunde, apoi coboara calcaiul inapoi pe podea.\n"
"Repeta cu celalalt picior.\n"
"\n"
"Fandari reverenta:\n"
"\n"
"Stai in picioare, cu talpile departate la o latime de umeri\n"
"Paseste cu piciorul drept in spatele piciorului stang si indoaie genunchii pentru a cobori intr-o fandare\n"
"Impinge in calcaiul drept pentru a te ridica si adu piciorul drept inapoi in pozitia de start.\n"
"Repeta miscarea cu celalalt picior.\n"
"\n"
"Genuflexiuni pistol (genuflexiuni pe un picior):\n"
"\n"
"Stai in picioare cu talpile unite\n"
"Ridica piciorul stang cativa centimetri si intinde-l in fata, cu talpa flexata."
                        "\n"
"Indoaie genunchiul drept, inclina-te in fata din solduri si coboara intr-o genuflexiune, in timp ce ridici piciorul stang la inaltimea soldului. Intinde bratele in laterale pentru echilibru\n"
"Incearca sa indoi genunchiul la 90 de grade daca poti. Este o miscare foarte grea, asa ca nu te descuraja daca nu o poti face de la prima incercare\n"
"Impinge in calcaiul drept pentru a indrepta piciorul si revino la start.\n"
"Repeta miscarea cu celalalt picior.\n"
"\n"
"Ridicari de picior in lateral:\n"
"\n"
"Intinde-te pe o parte cu picioarele drepte si puse unul peste altul. Sprijina-te pe antebrat sau lasa-ti torsul pe saltea\n"
"Ridica piciorul de deasupra catre tavan intr-o miscare lenta si controlata. Ai grija sa ridici de la sold si fund, nu din zona lombara\n"
"Revino la start.\n"
"Repeta cu piciorul celalalt.\n"
"\n"
" Ridicari de picioare pentru interiorul coapselor:\n"
"\n"
"Porneste din intins pe o parte, cu picioarele drepte, puse unul peste celalalt si cu torsul pe saltea sau sprijinit pe antebrat\n"
""
                        "Incruciseaza piciorul de deasupra peste cel de jos, indoind genunchiul, astfel incat piciorul de sus sa fie in fata genunchiului piciorului de jos\n"
"Ridica piciorul de jos catre tavan intr-o miscare lenta si controlata. Mentine torsul stabil pe toata durata miscarii\n"
"Revino la start.\n"
"Repeta cu celalalt picior.\n"
"\n"
"Podul pentru fesieri pe un singur picior:\n"
"\n"
"Stai pe spate, cu genunchii indoiti si cu talpile pe podea\n"
"Ridica piciorul drept si indreapta genunchiul. Tine coapsele paralele una cu cealalta. Indreapta degetele catre tavan\n"
"Impinge in calcaie pentru a ridica soldurile, incordand fesierii. Incearca sa creezi o linie diagonala intre umeri si genunchi\n"
"Mentine podul timp de doua secunde, apoi coboara spatele.\n"
"Repeta cu celalalt picior.\n"
"\n"
"Deschideri pentru interiorul coapselor:\n"
"\n"
"Stai pe spate, cu genunchii indoiti si cu talpile pe podea. Ridica piciorul drept, mentinand coapsele lipite si intinde piciorul catre tavan\n"
"Coboara usor piciorul drept catre pa"
                        "rtea dreapta cat de mult poti, mentinand soldurile si zona lombara lipite de podea\n"
"Adu piciorul inapoi la pozitia de start.\n"
"Repeta cu celalalt picior.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
