#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStringList>
#include"sendvizualizareevolutie.h"
#include"sendlistaprieteni.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_inregistrare_clicked();

    void on_pushButton_autentificare_clicked();

    void on_pushButton_inapoi_clicked();

    void on_pushButton_conectare_clicked();

    void on_pushButton_inapoi_2_clicked();

    void on_pushButton_inregistrare_2_clicked();

    void on_pushButton_inapoi_3_clicked();



    void on_pushButton_prieteni_clicked();

    void on_pushButton_actualizare_date_clicked();

    void on_pushButton_inapoi_5_clicked();

    void on_pushButton_inapoi_4_clicked();

    void on_pushButton_inapoi_6_clicked();

    void on_pushButton_antrenamente_clicked();

    void on_pushButton_inapoi_7_clicked();

    void on_pushButton_vizualizare_evolutie_clicked();

    void on_pushButton_am_uitat_parola_clicked();

    void on_pushButton_salveaza_2_clicked();

    void on_pushButton_antrenament_clicked();

    void on_pushButton_inapoi_17_clicked();

    void on_pushButton_inapoi_8_clicked();

    void on_pushButton_inapoi_9_clicked();

    void on_pushButton_inapoi_13_clicked();

    void on_pushButton_inapoi_12_clicked();

    void on_pushButton_inapoi_11_clicked();

    void on_pushButton_inapoi_14_clicked();

    void on_pushButton_inapoi_10_clicked();

    void on_pushButton_cereri_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
