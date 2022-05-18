#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>

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

    void on_pushButton_salveaza_clicked();

    void on_pushButton_ziua1_clicked();

    void on_pushButton_inapoi_selectare_zi_clicked();

    void on_pushButton_ziua2_clicked();

    void on_pushButton_ziua3_clicked();

    void on_pushButton_ziua4_clicked();

    void on_pushButton_ziua5_clicked();

    void on_pushButton_cereri_2_clicked();

    void on_pushButton_Inapoi_la_prieteni_clicked();

    void on_pushButton_trimite_cereri_clicked();

    void on_pushButton_trimite_cerere_clicked();

    void on_pushButton_sterge_prieten_clicked();

    void on_pushButton_cereri_prietenie_clicked();

    void on_pushButton_inapoit_de_la_acceptare_cereri_clicked();

    void on_pushButton_accepta_cerere_clicked();

    void on_pushButton_respinge_cerere_clicked();

    void on_pushButton_clicked();



private:
    Ui::MainWindow *ui;
    QTcpSocket * socket;
    QString username;
};
#endif // MAINWINDOW_H
