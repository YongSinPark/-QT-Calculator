#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

#define PI 3.1415926

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setNumber(QString num)
{
    if(QString::compare(ui->lineEdit_4->text(), "") == 0)
    {
        if(QString::compare(ui->lineEdit_2->text(), "") == 0)
        {
            ui->lineEdit_1->setText(ui->lineEdit_1->text() + num);
        }
        else ui->lineEdit_3->setText(ui->lineEdit_3->text() + num);
    }
    else
    {
        ui->lineEdit_1->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        if(QString::compare(ui->lineEdit_2->text(), "") == 0)
        {
            ui->lineEdit_1->setText(ui->lineEdit_1->text() + num);
        }
        else ui->lineEdit_3->setText(ui->lineEdit_3->text() + num);
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    setNumber("1");
}

void MainWindow::on_pushButton_2_clicked()
{
    setNumber("2");
}

void MainWindow::on_pushButton_3_clicked()
{
    setNumber("3");
}

void MainWindow::on_pushButton_4_clicked()
{
    setNumber("4");
}

void MainWindow::on_pushButton_5_clicked()
{
    setNumber("5");
}

void MainWindow::on_pushButton_6_clicked()
{
    setNumber("6");
}

void MainWindow::on_pushButton_7_clicked()
{
    setNumber("7");
}

void MainWindow::on_pushButton_8_clicked()
{
    setNumber("8");
}

void MainWindow::on_pushButton_9_clicked()
{
    setNumber("9");
}

void MainWindow::on_pushButton_0_clicked()
{
    setNumber("0");
}

void MainWindow::on_pushButton_plus_clicked()
{
    ui->lineEdit_2->setText("+");
}

void MainWindow::on_pushButton_minus_clicked()
{
    ui->lineEdit_2->setText("-");
}

void MainWindow::on_pushButton_mul_clicked()
{
    ui->lineEdit_2->setText("*");
}

void MainWindow::on_pushButton_div_clicked()
{
    ui->lineEdit_2->setText("/");
}

void MainWindow::on_pushButton_equr_clicked()
{
    if(ui->lineEdit_2->text() == "+")
    {
        ui->lineEdit_4->setText(QString::number(ui->lineEdit_1->text().toDouble() + ui->lineEdit_3->text().toDouble()));
    }
    else if(ui->lineEdit_2->text() == "-")
    {
        ui->lineEdit_4->setText(QString::number(ui->lineEdit_1->text().toDouble() - ui->lineEdit_3->text().toDouble()));
    }
    else if(ui->lineEdit_2->text() == "*")
    {
        ui->lineEdit_4->setText(QString::number(ui->lineEdit_1->text().toDouble(nullptr) * ui->lineEdit_3->text().toDouble()));
    }
    else if(ui->lineEdit_2->text() == "/")
    {
        ui->lineEdit_4->setText(QString::number(ui->lineEdit_1->text().toDouble() / ui->lineEdit_3->text().toDouble()));
    }
    else if(ui->lineEdit_2->text() == "^")
    {
        int num(ui->lineEdit_1->text().toInt());

        for(int i = 0; i < ui->lineEdit_3->text().toInt(); i++)
        {
            num *= num;
        }
        ui->lineEdit_4->setText(QString::number(num));
    }

    if(ui->lineEdit_5->text() != "")
    {
        if(ui->lineEdit_6->text() != "")
        {
            ui->lineEdit_7->setText(ui->lineEdit_6->text());
            ui->lineEdit_6->setText(ui->lineEdit_5->text());
            ui->lineEdit_5->setText(ui->lineEdit_1->text() + ui->lineEdit_2->text() + ui->lineEdit_3->text() + "=" + ui->lineEdit_4->text());
        }
        else
        {
            ui->lineEdit_6->setText(ui->lineEdit_5->text());
            ui->lineEdit_5->setText(ui->lineEdit_1->text() + ui->lineEdit_2->text() + ui->lineEdit_3->text() + "=" + ui->lineEdit_4->text());
        }
    }
    else ui->lineEdit_5->setText(ui->lineEdit_1->text() + ui->lineEdit_2->text() + ui->lineEdit_3->text() + "=" + ui->lineEdit_4->text());
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->lineEdit_1->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->lineEdit_7->setText("");
}

void MainWindow::on_pushButton_exit_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_ans_clicked()
{
    if(QString::compare(ui->lineEdit_1->text(), "") != 0 || QString::compare(ui->lineEdit_2->text(), "") != 0 || QString::compare(ui->lineEdit_3->text(), "") != 0)
    {
        QString num;
        num = ui->lineEdit_4->text();
        ui->lineEdit_1->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_1->setText(num);
    }
}

void MainWindow::on_pushButton_BS_clicked()
{
    QString num1(ui->lineEdit_1->text());
    QString num3(ui->lineEdit_3->text());
    if(QString::compare(ui->lineEdit_2->text(), "") == 0)
    {
        ui->lineEdit_1->backspace();
    }
    else
    {
        ui->lineEdit_3->backspace();
    }
}

void MainWindow::on_pushButton_squair_clicked()
{
    QString num1(ui->lineEdit_1->text());
    QString num3(ui->lineEdit_3->text());
    if(QString::compare(ui->lineEdit_2->text(), "") == 0)
    {
        ui->lineEdit_1->setText(QString::number((num1.toDouble() * num1.toDouble())));
    }
    else ui->lineEdit_3->setText(QString::number((num3.toDouble() * num3.toDouble())));
}

void MainWindow::on_pushButton_dot_clicked()
{
    setNumber(".");
}

void MainWindow::on_pushButton_sin_clicked()
{
    QString num1(ui->lineEdit_1->text());
    QString num3(ui->lineEdit_3->text());
    if(QString::compare(ui->lineEdit_2->text(), "") == 0)
    {
        ui->lineEdit_1->setText(QString::number((sin(num1.toDouble()* PI / 180))));
    }
    else ui->lineEdit_3->setText(QString::number((sin(num3.toDouble()* PI / 180))));
}

void MainWindow::on_pushButton_cos_clicked()
{
    QString num1(ui->lineEdit_1->text());
    QString num3(ui->lineEdit_3->text());
    if(QString::compare(ui->lineEdit_2->text(), "") == 0)
    {
        ui->lineEdit_1->setText(QString::number((cos(num1.toDouble()* PI / 180))));
    }
    else ui->lineEdit_3->setText(QString::number((cos(num3.toDouble()* PI / 180))));
}

void MainWindow::on_pushButton_tan_clicked()
{
    QString num1(ui->lineEdit_1->text());
    QString num3(ui->lineEdit_3->text());
    if(QString::compare(ui->lineEdit_2->text(), "") == 0)
    {
        ui->lineEdit_1->setText(QString::number((tan(num1.toDouble()* PI / 180))));
    }
    else ui->lineEdit_3->setText(QString::number((tan(num3.toDouble()* PI / 180))));
}

void MainWindow::on_pushButton_PI_clicked()
{
    setNumber("3.1415926");
}

void MainWindow::on_pushButton_root_clicked()
{
    QString num1(ui->lineEdit_1->text());
    QString num3(ui->lineEdit_3->text());
    if(QString::compare(ui->lineEdit_2->text(), "") == 0)
    {
        ui->lineEdit_1->setText(QString::number((sqrt(num1.toDouble()))));
    }
    else ui->lineEdit_3->setText(QString::number((sqrt(num3.toDouble()))));
}

void MainWindow::on_pushButton_squire2_clicked()
{
    ui->lineEdit_2->setText("^");
}

void MainWindow::on_pushButton_pi_clicked()
{
    if(QString::compare(ui->lineEdit_4->text(), "") == 0)
    {
        if(QString::compare(ui->lineEdit_2->text(), "") == 0)
        {
            QString num1(ui->lineEdit_1->text());
            if(QString::compare(ui->lineEdit_1->text(), "") == 0)
            {
                ui->lineEdit_1->setText(ui->lineEdit_1->text() + QString::number(3.1415926));
            }
            else
            {
                ui->lineEdit_1->setText(QString::number((3.1415926 * (num1.toDouble()))));
            }
        }
        else
        {
            QString num3(ui->lineEdit_3->text());
            if(QString::compare(ui->lineEdit_3->text(), "") == 0) ui->lineEdit_3->setText(ui->lineEdit_3->text() + QString::number(3.1415926));
            else ui->lineEdit_3->setText(QString::number((3.1415926 * (num3.toDouble()))));
        }
    }
    else
    {
        ui->lineEdit_1->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
    }
}


void MainWindow::on_pushButton_log_clicked()
{
    QString num1(ui->lineEdit_1->text());
    QString num3(ui->lineEdit_3->text());
    if(QString::compare(ui->lineEdit_2->text(), "") == 0)
    {
        ui->lineEdit_1->setText(QString::number((log10(num1.toDouble()))));
    }
    else ui->lineEdit_3->setText(QString::number((log10(num3.toDouble()))));
}
