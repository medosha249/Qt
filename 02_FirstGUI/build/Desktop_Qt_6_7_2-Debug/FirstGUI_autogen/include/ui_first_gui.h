/********************************************************************************
** Form generated from reading UI file 'first_gui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_GUI_H
#define UI_FIRST_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstGui
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FirstGui)
    {
        if (FirstGui->objectName().isEmpty())
            FirstGui->setObjectName("FirstGui");
        FirstGui->resize(800, 600);
        centralwidget = new QWidget(FirstGui);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 240, 201, 71));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 340, 191, 91));
        FirstGui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FirstGui);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        FirstGui->setMenuBar(menubar);
        statusbar = new QStatusBar(FirstGui);
        statusbar->setObjectName("statusbar");
        FirstGui->setStatusBar(statusbar);

        retranslateUi(FirstGui);

        QMetaObject::connectSlotsByName(FirstGui);
    } // setupUi

    void retranslateUi(QMainWindow *FirstGui)
    {
        FirstGui->setWindowTitle(QCoreApplication::translate("FirstGui", "FirstGui", nullptr));
        pushButton->setText(QCoreApplication::translate("FirstGui", "ClickMe!!!!", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FirstGui: public Ui_FirstGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_GUI_H
