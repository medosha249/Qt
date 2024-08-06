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
QMessageBox* message;

void MainWindow::on_actionNew_triggered()
{
    message->information(this,"New File","Choose a File");
}


void MainWindow::on_actionOpen_triggered()
{
    message->information(this,"Open File","Choose a File");

}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

