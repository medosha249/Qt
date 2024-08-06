#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox* message;
    QMessageBox::StandardButton reply = message->question(this,
                                                          "Exit","Do you want to exit ?",
                                                          message->Yes | message->No);
    if(reply == message->Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug() <<"No Pressed";
    }

}

