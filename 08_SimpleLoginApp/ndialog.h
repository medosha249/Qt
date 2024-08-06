#ifndef NDIALOG_H
#define NDIALOG_H

#include <QDialog>

namespace Ui {
class Ndialog;
}

class Ndialog : public QDialog
{
    Q_OBJECT

public:
    explicit Ndialog(QWidget *parent = nullptr);
    ~Ndialog();

private:
    Ui::Ndialog *ui;
};

#endif // NDIALOG_H
