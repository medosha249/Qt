/********************************************************************************
** Form generated from reading UI file 'ndialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NDIALOG_H
#define UI_NDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Ndialog
{
public:
    QLabel *niggaLabel;

    void setupUi(QDialog *Ndialog)
    {
        if (Ndialog->objectName().isEmpty())
            Ndialog->setObjectName("Ndialog");
        Ndialog->resize(400, 300);
        niggaLabel = new QLabel(Ndialog);
        niggaLabel->setObjectName("niggaLabel");
        niggaLabel->setGeometry(QRect(70, 40, 221, 191));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(niggaLabel->sizePolicy().hasHeightForWidth());
        niggaLabel->setSizePolicy(sizePolicy);

        retranslateUi(Ndialog);

        QMetaObject::connectSlotsByName(Ndialog);
    } // setupUi

    void retranslateUi(QDialog *Ndialog)
    {
        Ndialog->setWindowTitle(QCoreApplication::translate("Ndialog", "Dialog", nullptr));
        niggaLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ndialog: public Ui_Ndialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NDIALOG_H
