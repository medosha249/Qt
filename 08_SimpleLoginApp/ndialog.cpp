#include "ndialog.h"
#include "ui_ndialog.h"
#include<QPixmap>

Ndialog::Ndialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Ndialog)
{
    ui->setupUi(this);
    QPixmap pic("/home/alashkar/Desktop/Github/Qt/08_SimpleLoginApp/resources/nigga.png");
    int w = ui->niggaLabel->width();
    int h = ui->niggaLabel->height();
    ui->niggaLabel->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
    QWidget::setWindowTitle("Gay");
    QWidget* window = new QWidget();
    window->move(450,450);

}

Ndialog::~Ndialog()
{
    delete ui;
}
