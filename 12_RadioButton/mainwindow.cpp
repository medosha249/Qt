#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>

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
    QMessageBox* message;
    if(ui->radioButton_2->isChecked())
    {
        message->information(this,"RadioButton","Mark");
    }
    if(ui->radioButton->isChecked())
    {
        message->information(this,"RadioButton","John");
    }
}

