/********************************************************************************
** Form generated from reading UI file 'noform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOFORM_H
#define UI_NOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NOForm
{
public:
    QWidget *titleBackground;
    QLabel *label;
    QPushButton *increaseNOButton;
    QPushButton *decreaseNOButton;
    QLCDNumber *nitricOxideConcentration;
    QPushButton *cancelButton;
    QPushButton *startButton;
    QLabel *pleaseWaitLabel;

    void setupUi(QWidget *NOForm)
    {
        if (NOForm->objectName().isEmpty())
            NOForm->setObjectName(QString::fromUtf8("NOForm"));
        NOForm->resize(480, 277);
        NOForm->setMinimumSize(QSize(480, 277));
        NOForm->setMaximumSize(QSize(480, 277));
        titleBackground = new QWidget(NOForm);
        titleBackground->setObjectName(QString::fromUtf8("titleBackground"));
        titleBackground->setGeometry(QRect(0, 0, 481, 50));
        label = new QLabel(titleBackground);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(4, 5, 481, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        increaseNOButton = new QPushButton(NOForm);
        increaseNOButton->setObjectName(QString::fromUtf8("increaseNOButton"));
        increaseNOButton->setGeometry(QRect(300, 90, 41, 41));
        QFont font1;
        font1.setPointSize(20);
        increaseNOButton->setFont(font1);
        decreaseNOButton = new QPushButton(NOForm);
        decreaseNOButton->setObjectName(QString::fromUtf8("decreaseNOButton"));
        decreaseNOButton->setGeometry(QRect(300, 150, 41, 41));
        QFont font2;
        font2.setPointSize(30);
        decreaseNOButton->setFont(font2);
        nitricOxideConcentration = new QLCDNumber(NOForm);
        nitricOxideConcentration->setObjectName(QString::fromUtf8("nitricOxideConcentration"));
        nitricOxideConcentration->setGeometry(QRect(150, 110, 120, 60));
        cancelButton = new QPushButton(NOForm);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(150, 220, 91, 31));
        cancelButton->setFont(font);
        startButton = new QPushButton(NOForm);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(250, 220, 91, 31));
        startButton->setFont(font);
        pleaseWaitLabel = new QLabel(NOForm);
        pleaseWaitLabel->setObjectName(QString::fromUtf8("pleaseWaitLabel"));
        pleaseWaitLabel->setGeometry(QRect(0, 0, 481, 281));

        retranslateUi(NOForm);

        QMetaObject::connectSlotsByName(NOForm);
    } // setupUi

    void retranslateUi(QWidget *NOForm)
    {
        NOForm->setWindowTitle(QApplication::translate("NOForm", "Form", nullptr));
        label->setText(QApplication::translate("NOForm", "Select NO Concentration to Ouput", nullptr));
        increaseNOButton->setText(QApplication::translate("NOForm", "+", nullptr));
        decreaseNOButton->setText(QApplication::translate("NOForm", "-", nullptr));
        cancelButton->setText(QApplication::translate("NOForm", "Cancel", nullptr));
        startButton->setText(QApplication::translate("NOForm", "Start", nullptr));
        pleaseWaitLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NOForm: public Ui_NOForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOFORM_H
