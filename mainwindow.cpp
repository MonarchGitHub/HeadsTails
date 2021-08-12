#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QPushButton {color : red}
    ui->lineEdit->setStyleSheet("background-color: black; color: white");
    ui->label->setStyleSheet("background-color: black; color: white");
    ui->label_2->setStyleSheet("background-color: black; color: white");
    ui->lcdNumber->setStyleSheet("background-color: black; color: white");
    ui->lcdNumber_2->setStyleSheet("background-color: black; color: white");
    ui->centralwidget->setStyleSheet("background-color: black; color: white");
    ui->pushButton->setStyleSheet("border: 1px solid red");
    ui->menubar->setStyleSheet("background-color: black; color: white");
    ui->statusbar->setStyleSheet("background-color: black; color: white");
    ui->pushButton_2->setStyleSheet("border: 1px solid red");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    static int heads = 1;
    static int tails = 1;

    srand(time(0));

    if (rand() % 2 == 0)
    {
        ui->lineEdit->setText("Heads");
        ui->lcdNumber->display(heads);
        heads++;
    }

    else if (rand() % 2 != 0)
    {
        ui->lineEdit->setText("Tails");
        ui->lcdNumber_2->display(tails);
        tails++;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QString mode=ui->pushButton_2->text();

    if(mode=="Light Mode"){

    ui->lineEdit->setStyleSheet("background-color: white; color: black");
    ui->label->setStyleSheet("background-color: white; color: black");
    ui->label_2->setStyleSheet("background-color: white; color: black");
    ui->lcdNumber->setStyleSheet("background-color: white; color: black");
    ui->lcdNumber_2->setStyleSheet("background-color: white; color: black");
    ui->centralwidget->setStyleSheet("background-color: white; color: black");
    ui->pushButton->setStyleSheet("border: 1px solid red");
    ui->menubar->setStyleSheet("background-color: white; color: black");
    ui->statusbar->setStyleSheet("background-color: white; color: black");
    ui->pushButton_2->setText("Dark Mode");
    }

    else if(mode=="Dark Mode"){
        ui->lineEdit->setStyleSheet("background-color: black; color: white");
        ui->label->setStyleSheet("background-color: black; color: white");
        ui->label_2->setStyleSheet("background-color: black; color: white");
        ui->lcdNumber->setStyleSheet("background-color: black; color: white");
        ui->lcdNumber_2->setStyleSheet("background-color: black; color: white");
        ui->centralwidget->setStyleSheet("background-color: black; color: white");
        ui->pushButton->setStyleSheet("border: 1px solid red");
        ui->menubar->setStyleSheet("background-color: black; color: white");
        ui->statusbar->setStyleSheet("background-color: black; color: white");
        ui->pushButton_2->setText("Light Mode");

    }
}

