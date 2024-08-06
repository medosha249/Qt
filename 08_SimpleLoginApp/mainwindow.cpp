#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include<QPixmap>
#include<QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->password->setEchoMode(QLineEdit::Password);
    QPixmap pix("/home/alashkar/Desktop/Github/Qt/08_SimpleLoginApp/resources/pic.png");
    int w = ui->labelPic->width();
    int h = ui->labelPic->height();
    ui->labelPic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    QWidget *window = new QWidget();
    window->move(400,400);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    QMessageBox *message;
    if(username == "test" && password == "71011")
    {
        message->information(this,"Login","Welcome!");
        dialog = new Dialog(this);
        dialog->show();
    }
    else
    {
        nDialog = new Ndialog(this);
        nDialog->show();
    }
}

