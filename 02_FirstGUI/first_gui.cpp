#include "first_gui.h"
#include "./ui_first_gui.h"

FirstGui::FirstGui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FirstGui)
{
    ui->setupUi(this);
}

FirstGui::~FirstGui()
{
    delete ui;
}

void FirstGui::on_pushButton_clicked()
{
    ui->label->setText("Button is clicked");
}

