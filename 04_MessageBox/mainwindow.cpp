#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
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

void MainWindow::on_pushButton_clicked()
{

                            //QtMessages
    //void              about    -> you can write a custom message   3arg
    //void              aboutQt  -> shows about Qt                   3arg
    //StandardButton    critical -> shows an red x message           3arg
    //StandardButton    information -> shows information icon        3arg
    //StandardButton    question -> shows ? icon                     3arg   the 4 argument is optional
    //StandardButton    warning ->  show the yellow triangle icon    3arg
    QMessageBox *message;
    //message->about(this,"My Title","This is my Message!");
    QMessageBox::StandardButton reply = message->question(this,
                                                          "Qustion","Do you want to exit",
                                                          message->Yes | message->No);

    if( reply == message->Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug() <<"No is clicked";
    }
}

