/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Select_label;
    QPushButton *Ozone_button;
    QPushButton *NO_button;
    QPushButton *NO2_button;
    QLabel *Status_label;
    QPushButton *Settings_button;
    QPushButton *SEQ_buttton;
    QPushButton *Diag_left;
    QPushButton *Diag_right;
    QLabel *Diag_label;
    QPushButton *Help_button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 277);
        MainWindow->setMinimumSize(QSize(480, 277));
        MainWindow->setMaximumSize(QSize(480, 277));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Select_label = new QLabel(centralWidget);
        Select_label->setObjectName(QString::fromUtf8("Select_label"));
        Select_label->setGeometry(QRect(10, 0, 461, 21));
        Select_label->setAlignment(Qt::AlignCenter);
        Ozone_button = new QPushButton(centralWidget);
        Ozone_button->setObjectName(QString::fromUtf8("Ozone_button"));
        Ozone_button->setGeometry(QRect(20, 30, 140, 51));
        NO_button = new QPushButton(centralWidget);
        NO_button->setObjectName(QString::fromUtf8("NO_button"));
        NO_button->setGeometry(QRect(170, 30, 150, 51));
        NO2_button = new QPushButton(centralWidget);
        NO2_button->setObjectName(QString::fromUtf8("NO2_button"));
        NO2_button->setGeometry(QRect(330, 30, 140, 51));
        Status_label = new QLabel(centralWidget);
        Status_label->setObjectName(QString::fromUtf8("Status_label"));
        Status_label->setGeometry(QRect(10, 90, 461, 21));
        Status_label->setAlignment(Qt::AlignCenter);
        Settings_button = new QPushButton(centralWidget);
        Settings_button->setObjectName(QString::fromUtf8("Settings_button"));
        Settings_button->setGeometry(QRect(50, 110, 141, 51));
        SEQ_buttton = new QPushButton(centralWidget);
        SEQ_buttton->setObjectName(QString::fromUtf8("SEQ_buttton"));
        SEQ_buttton->setGeometry(QRect(280, 110, 141, 51));
        Diag_left = new QPushButton(centralWidget);
        Diag_left->setObjectName(QString::fromUtf8("Diag_left"));
        Diag_left->setGeometry(QRect(10, 220, 50, 50));
        Diag_right = new QPushButton(centralWidget);
        Diag_right->setObjectName(QString::fromUtf8("Diag_right"));
        Diag_right->setGeometry(QRect(420, 220, 50, 50));
        Diag_label = new QLabel(centralWidget);
        Diag_label->setObjectName(QString::fromUtf8("Diag_label"));
        Diag_label->setGeometry(QRect(70, 230, 341, 41));
        QFont font;
        font.setPointSize(15);
        Diag_label->setFont(font);
        Diag_label->setAlignment(Qt::AlignCenter);
        Help_button = new QPushButton(centralWidget);
        Help_button->setObjectName(QString::fromUtf8("Help_button"));
        Help_button->setGeometry(QRect(190, 170, 91, 51));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Select_label->setText(QApplication::translate("MainWindow", "Select Gas to output", nullptr));
        Ozone_button->setText(QApplication::translate("MainWindow", "Ozone", nullptr));
        NO_button->setText(QApplication::translate("MainWindow", "Nitric Oxide", nullptr));
        NO2_button->setText(QApplication::translate("MainWindow", "Nitrogen Dioxide", nullptr));
        Status_label->setText(QApplication::translate("MainWindow", "Status:", nullptr));
        Settings_button->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        SEQ_buttton->setText(QApplication::translate("MainWindow", "SEQ", nullptr));
        Diag_left->setText(QApplication::translate("MainWindow", "<", nullptr));
        Diag_right->setText(QApplication::translate("MainWindow", ">", nullptr));
        Diag_label->setText(QApplication::translate("MainWindow", "Diagnostic Data", nullptr));
        Help_button->setText(QApplication::translate("MainWindow", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
