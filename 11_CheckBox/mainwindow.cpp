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


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    QMessageBox* message;
    if(ui->checkBox->isChecked())
    {
        message->information(this,"Title","Yes user is gay");
    }
    else
    {
        message->information(this,"Title","No user is not gay");
    }
}

