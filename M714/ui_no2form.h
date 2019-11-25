/********************************************************************************
** Form generated from reading UI file 'no2form.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NO2FORM_H
#define UI_NO2FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NO2Form
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *o3Concentration;
    QLCDNumber *o3Concentration_2;
    QLCDNumber *o3Concentration_3;
    QPushButton *increaseNOButton;
    QPushButton *decreaseNOButton;
    QPushButton *increaseNOButton_2;
    QPushButton *decreaseNOButton_2;
    QPushButton *backButton;
    QPushButton *nextButton;

    void setupUi(QWidget *NO2Form)
    {
        if (NO2Form->objectName().isEmpty())
            NO2Form->setObjectName(QStringLiteral("NO2Form"));
        NO2Form->resize(480, 277);
        label = new QLabel(NO2Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 461, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(NO2Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 121, 61));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(NO2Form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 121, 61));
        label_3->setFont(font1);
        label_4 = new QLabel(NO2Form);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 200, 151, 41));
        label_4->setFont(font1);
        o3Concentration = new QLCDNumber(NO2Form);
        o3Concentration->setObjectName(QStringLiteral("o3Concentration"));
        o3Concentration->setGeometry(QRect(170, 130, 121, 61));
        o3Concentration_2 = new QLCDNumber(NO2Form);
        o3Concentration_2->setObjectName(QStringLiteral("o3Concentration_2"));
        o3Concentration_2->setGeometry(QRect(170, 60, 121, 61));
        o3Concentration_3 = new QLCDNumber(NO2Form);
        o3Concentration_3->setObjectName(QStringLiteral("o3Concentration_3"));
        o3Concentration_3->setGeometry(QRect(170, 200, 121, 61));
        increaseNOButton = new QPushButton(NO2Form);
        increaseNOButton->setObjectName(QStringLiteral("increaseNOButton"));
        increaseNOButton->setGeometry(QRect(320, 70, 41, 41));
        QFont font2;
        font2.setPointSize(20);
        increaseNOButton->setFont(font2);
        decreaseNOButton = new QPushButton(NO2Form);
        decreaseNOButton->setObjectName(QStringLiteral("decreaseNOButton"));
        decreaseNOButton->setGeometry(QRect(390, 70, 41, 41));
        QFont font3;
        font3.setPointSize(30);
        decreaseNOButton->setFont(font3);
        increaseNOButton_2 = new QPushButton(NO2Form);
        increaseNOButton_2->setObjectName(QStringLiteral("increaseNOButton_2"));
        increaseNOButton_2->setGeometry(QRect(320, 140, 41, 41));
        increaseNOButton_2->setFont(font2);
        decreaseNOButton_2 = new QPushButton(NO2Form);
        decreaseNOButton_2->setObjectName(QStringLiteral("decreaseNOButton_2"));
        decreaseNOButton_2->setGeometry(QRect(390, 140, 41, 41));
        decreaseNOButton_2->setFont(font3);
        backButton = new QPushButton(NO2Form);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(330, 230, 91, 31));
        backButton->setFont(font);
        nextButton = new QPushButton(NO2Form);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(330, 190, 91, 31));
        nextButton->setFont(font);

        retranslateUi(NO2Form);

        QMetaObject::connectSlotsByName(NO2Form);
    } // setupUi

    void retranslateUi(QWidget *NO2Form)
    {
        NO2Form->setWindowTitle(QApplication::translate("NO2Form", "Form", 0));
        label->setText(QApplication::translate("NO2Form", "Select NO and O3 for step: 1 of 4", 0));
        label_2->setText(QApplication::translate("NO2Form", "Select NO\n"
"to output", 0));
        label_3->setText(QApplication::translate("NO2Form", "Select O3\n"
"to output", 0));
        label_4->setText(QApplication::translate("NO2Form", "Titrated NO2:", 0));
        increaseNOButton->setText(QApplication::translate("NO2Form", "+", 0));
        decreaseNOButton->setText(QApplication::translate("NO2Form", "-", 0));
        increaseNOButton_2->setText(QApplication::translate("NO2Form", "+", 0));
        decreaseNOButton_2->setText(QApplication::translate("NO2Form", "-", 0));
        backButton->setText(QApplication::translate("NO2Form", "Back", 0));
        nextButton->setText(QApplication::translate("NO2Form", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class NO2Form: public Ui_NO2Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NO2FORM_H
