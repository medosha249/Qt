#include "dialog.h"
#include "ui_dialog.h"
#include<QPixmap>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pic("/home/alashkar/Desktop/Github/Qt/08_SimpleLoginApp/resources/notGay.jpg");
    int w = ui->notGayLabel->width();
    int h = ui->notGayLabel->height();
    ui->notGayLabel->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
    QWidget::setWindowTitle("NotGay");
    QWidget* window = new QWidget();
    window->move(450,450);
}

Dialog::~Dialog()
{
    delete ui;
}
