/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 277);
        MainWindow->setMinimumSize(QSize(480, 277));
        MainWindow->setMaximumSize(QSize(480, 277));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Select_label = new QLabel(centralWidget);
        Select_label->setObjectName(QStringLiteral("Select_label"));
        Select_label->setGeometry(QRect(10, 0, 461, 21));
        Select_label->setAlignment(Qt::AlignCenter);
        Ozone_button = new QPushButton(centralWidget);
        Ozone_button->setObjectName(QStringLiteral("Ozone_button"));
        Ozone_button->setGeometry(QRect(20, 30, 140, 51));
        NO_button = new QPushButton(centralWidget);
        NO_button->setObjectName(QStringLiteral("NO_button"));
        NO_button->setGeometry(QRect(170, 30, 150, 51));
        NO2_button = new QPushButton(centralWidget);
        NO2_button->setObjectName(QStringLiteral("NO2_button"));
        NO2_button->setGeometry(QRect(330, 30, 140, 51));
        Status_label = new QLabel(centralWidget);
        Status_label->setObjectName(QStringLiteral("Status_label"));
        Status_label->setGeometry(QRect(10, 90, 461, 21));
        Status_label->setAlignment(Qt::AlignCenter);
        Settings_button = new QPushButton(centralWidget);
        Settings_button->setObjectName(QStringLiteral("Settings_button"));
        Settings_button->setGeometry(QRect(50, 110, 141, 51));
        SEQ_buttton = new QPushButton(centralWidget);
        SEQ_buttton->setObjectName(QStringLiteral("SEQ_buttton"));
        SEQ_buttton->setGeometry(QRect(280, 110, 141, 51));
        Diag_left = new QPushButton(centralWidget);
        Diag_left->setObjectName(QStringLiteral("Diag_left"));
        Diag_left->setGeometry(QRect(10, 220, 50, 50));
        Diag_right = new QPushButton(centralWidget);
        Diag_right->setObjectName(QStringLiteral("Diag_right"));
        Diag_right->setGeometry(QRect(420, 220, 50, 50));
        Diag_label = new QLabel(centralWidget);
        Diag_label->setObjectName(QStringLiteral("Diag_label"));
        Diag_label->setGeometry(QRect(70, 230, 341, 41));
        QFont font;
        font.setPointSize(15);
        Diag_label->setFont(font);
        Diag_label->setAlignment(Qt::AlignCenter);
        Help_button = new QPushButton(centralWidget);
        Help_button->setObjectName(QStringLiteral("Help_button"));
        Help_button->setGeometry(QRect(190, 170, 91, 51));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Select_label->setText(QApplication::translate("MainWindow", "Select Gas to output", 0));
        Ozone_button->setText(QApplication::translate("MainWindow", "Ozone", 0));
        NO_button->setText(QApplication::translate("MainWindow", "Nitric Oxide", 0));
        NO2_button->setText(QApplication::translate("MainWindow", "Nitrogen Dioxide", 0));
        Status_label->setText(QApplication::translate("MainWindow", "Status:", 0));
        Settings_button->setText(QApplication::translate("MainWindow", "Settings", 0));
        SEQ_buttton->setText(QApplication::translate("MainWindow", "SEQ", 0));
        Diag_left->setText(QApplication::translate("MainWindow", "<", 0));
        Diag_right->setText(QApplication::translate("MainWindow", ">", 0));
        Diag_label->setText(QApplication::translate("MainWindow", "Diagnostic Data", 0));
        Help_button->setText(QApplication::translate("MainWindow", "?", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
