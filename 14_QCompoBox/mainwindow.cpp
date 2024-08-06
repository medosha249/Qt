#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/apple"),"Apple");
    ui->comboBox->addItem(QIcon(":/Banana-Single.jpg"),"Banana");
    ui->comboBox->addItem(QIcon(":/Watermelon.jpeg"),"WaterMelon");

}

MainWindow::~MainWindow()
{
    delete ui;
}
QMessageBox* message;
void MainWindow::on_pushButton_clicked()
{
    message->information(this,"Fruit",ui->comboBox->currentText());
}

