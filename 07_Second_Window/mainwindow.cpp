#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
    // SecDialog sec_dialog;
    // sec_dialog.setModal(true);
    // sec_dialog.exec() ;
    hide();
    secdialog = new SecDialog(this);
    secdialog->show();
}

