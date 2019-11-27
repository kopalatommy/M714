/********************************************************************************
** Form generated from reading UI file 'no2form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NO2FORM_H
#define UI_NO2FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QLCDNumber *noConcentration;
    QLCDNumber *no2Concentration;
    QPushButton *increaseNOButton;
    QPushButton *decreaseNOButton;
    QPushButton *increaseOzoneButton;
    QPushButton *decreaseOzoneButton;
    QPushButton *cancelButton;
    QPushButton *startButton;

    void setupUi(QWidget *NO2Form)
    {
        if (NO2Form->objectName().isEmpty())
            NO2Form->setObjectName(QString::fromUtf8("NO2Form"));
        NO2Form->resize(480, 277);
        label = new QLabel(NO2Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 461, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(NO2Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 121, 61));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(NO2Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 121, 61));
        label_3->setFont(font1);
        label_4 = new QLabel(NO2Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 200, 151, 41));
        label_4->setFont(font1);
        o3Concentration = new QLCDNumber(NO2Form);
        o3Concentration->setObjectName(QString::fromUtf8("o3Concentration"));
        o3Concentration->setGeometry(QRect(170, 130, 121, 61));
        noConcentration = new QLCDNumber(NO2Form);
        noConcentration->setObjectName(QString::fromUtf8("noConcentration"));
        noConcentration->setGeometry(QRect(170, 60, 121, 61));
        no2Concentration = new QLCDNumber(NO2Form);
        no2Concentration->setObjectName(QString::fromUtf8("no2Concentration"));
        no2Concentration->setGeometry(QRect(170, 200, 121, 61));
        increaseNOButton = new QPushButton(NO2Form);
        increaseNOButton->setObjectName(QString::fromUtf8("increaseNOButton"));
        increaseNOButton->setGeometry(QRect(320, 70, 41, 41));
        QFont font2;
        font2.setPointSize(20);
        increaseNOButton->setFont(font2);
        decreaseNOButton = new QPushButton(NO2Form);
        decreaseNOButton->setObjectName(QString::fromUtf8("decreaseNOButton"));
        decreaseNOButton->setGeometry(QRect(390, 70, 41, 41));
        QFont font3;
        font3.setPointSize(30);
        decreaseNOButton->setFont(font3);
        increaseOzoneButton = new QPushButton(NO2Form);
        increaseOzoneButton->setObjectName(QString::fromUtf8("increaseOzoneButton"));
        increaseOzoneButton->setGeometry(QRect(320, 140, 41, 41));
        increaseOzoneButton->setFont(font2);
        decreaseOzoneButton = new QPushButton(NO2Form);
        decreaseOzoneButton->setObjectName(QString::fromUtf8("decreaseOzoneButton"));
        decreaseOzoneButton->setGeometry(QRect(390, 140, 41, 41));
        decreaseOzoneButton->setFont(font3);
        cancelButton = new QPushButton(NO2Form);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(330, 230, 91, 31));
        cancelButton->setFont(font);
        startButton = new QPushButton(NO2Form);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(330, 190, 91, 31));
        startButton->setFont(font);

        retranslateUi(NO2Form);

        QMetaObject::connectSlotsByName(NO2Form);
    } // setupUi

    void retranslateUi(QWidget *NO2Form)
    {
        NO2Form->setWindowTitle(QApplication::translate("NO2Form", "Form", nullptr));
        label->setText(QApplication::translate("NO2Form", "Select NO and O3 for step: 1 of 4", nullptr));
        label_2->setText(QApplication::translate("NO2Form", "Select NO\n"
"to output", nullptr));
        label_3->setText(QApplication::translate("NO2Form", "Select O3\n"
"to output", nullptr));
        label_4->setText(QApplication::translate("NO2Form", "Titrated NO2:", nullptr));
        increaseNOButton->setText(QApplication::translate("NO2Form", "+", nullptr));
        decreaseNOButton->setText(QApplication::translate("NO2Form", "-", nullptr));
        increaseOzoneButton->setText(QApplication::translate("NO2Form", "+", nullptr));
        decreaseOzoneButton->setText(QApplication::translate("NO2Form", "-", nullptr));
        cancelButton->setText(QApplication::translate("NO2Form", "Cancel", nullptr));
        startButton->setText(QApplication::translate("NO2Form", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NO2Form: public Ui_NO2Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NO2FORM_H
