#ifndef FIRST_GUI_H
#define FIRST_GUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class FirstGui;
}
QT_END_NAMESPACE

class FirstGui : public QMainWindow
{
    Q_OBJECT

public:
    FirstGui(QWidget *parent = nullptr);
    ~FirstGui();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FirstGui *ui;
};
#endif // FIRST_GUI_H
