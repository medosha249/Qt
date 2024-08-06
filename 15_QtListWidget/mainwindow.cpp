#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/file.jpg"),"Mark");
    ui->listWidget->addItem(item);
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/new.png"),"John");
    ui->listWidget->addItem(item2);
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/Close.png"),"Other");
    ui->listWidget->addItem(item3);

}

MainWindow::~MainWindow()
{
    delete ui;
}
QMessageBox* message;
void MainWindow::on_pushButton_clicked()
{
   // message->information(this,"Title",ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackground(Qt::red);
   ui->listWidget->currentItem()->setForeground(Qt::white);

}

