#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->password->setEchoMode(QLineEdit::Password);
    ui->statusbar->addPermanentWidget(ui->label_3);
    ui->statusbar->addPermanentWidget(ui->progressBar);
    QPixmap pic(":/resources/img/pic.png");
    int w = ui->labelPic->width();
    int h = ui->labelPic->height();
    ui->labelPic->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_loginButton_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    QMessageBox* message;
    if(username == "test" && password == "71011")
    {
        //message->information(this,"Login","Welcome!");
        ui->statusbar->showMessage("Welcome!",5000);
    }
    else
    {/*
        QMessageBox::StandardButton reply = message->question(this,
                                                              "Login","Password or username is not correct! \n Do you want to exit",
                                                              message->Yes | message->No);
        if(reply == message->Yes)
        {
            QApplication::quit();
        }*/
        ui->statusbar->showMessage("Username or password not correct!",5000);

    }
}

