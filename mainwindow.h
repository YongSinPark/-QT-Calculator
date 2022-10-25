#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_equr_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_ans_clicked();

    void on_pushButton_BS_clicked();

    void on_pushButton_squair_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_PI_clicked();

    void on_pushButton_root_clicked();

    void on_pushButton_squire2_clicked();

    void on_pushButton_pi_clicked();

    void on_pushButton_log_clicked();

private:
    Ui::MainWindow *ui;
    void setNumber(QString num);
};
#endif // MAINWINDOW_H
