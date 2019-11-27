/********************************************************************************
** Form generated from reading UI file 'nocalfactorsform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOCALFACTORSFORM_H
#define UI_NOCALFACTORSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NOCalFactorsForm
{
public:
    QLabel *Title;
    QPushButton *lowButton;
    QPushButton *highButton;
    QPushButton *backButton;
    QLabel *lowLabel;
    QLabel *highLabel;

    void setupUi(QWidget *NOCalFactorsForm)
    {
        if (NOCalFactorsForm->objectName().isEmpty())
            NOCalFactorsForm->setObjectName(QString::fromUtf8("NOCalFactorsForm"));
        NOCalFactorsForm->resize(480, 277);
        NOCalFactorsForm->setMinimumSize(QSize(480, 277));
        NOCalFactorsForm->setMaximumSize(QSize(480, 277));
        Title = new QLabel(NOCalFactorsForm);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(4, 5, 471, 41));
        QFont font;
        font.setPointSize(18);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);
        lowButton = new QPushButton(NOCalFactorsForm);
        lowButton->setObjectName(QString::fromUtf8("lowButton"));
        lowButton->setGeometry(QRect(50, 80, 75, 50));
        lowButton->setMinimumSize(QSize(75, 50));
        lowButton->setMaximumSize(QSize(75, 16777215));
        highButton = new QPushButton(NOCalFactorsForm);
        highButton->setObjectName(QString::fromUtf8("highButton"));
        highButton->setGeometry(QRect(50, 150, 75, 50));
        highButton->setMinimumSize(QSize(75, 50));
        highButton->setMaximumSize(QSize(80, 16777215));
        backButton = new QPushButton(NOCalFactorsForm);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(380, 210, 80, 50));
        backButton->setMinimumSize(QSize(80, 50));
        backButton->setMaximumSize(QSize(120, 16777215));
        QFont font1;
        font1.setPointSize(15);
        backButton->setFont(font1);
        lowLabel = new QLabel(NOCalFactorsForm);
        lowLabel->setObjectName(QString::fromUtf8("lowLabel"));
        lowLabel->setGeometry(QRect(150, 80, 280, 50));
        lowLabel->setMinimumSize(QSize(280, 0));
        highLabel = new QLabel(NOCalFactorsForm);
        highLabel->setObjectName(QString::fromUtf8("highLabel"));
        highLabel->setGeometry(QRect(150, 150, 280, 50));
        highLabel->setMinimumSize(QSize(280, 0));

        retranslateUi(NOCalFactorsForm);

        QMetaObject::connectSlotsByName(NOCalFactorsForm);
    } // setupUi

    void retranslateUi(QWidget *NOCalFactorsForm)
    {
        NOCalFactorsForm->setWindowTitle(QApplication::translate("NOCalFactorsForm", "Form", nullptr));
        Title->setText(QApplication::translate("NOCalFactorsForm", "Select High or Low NO Cal Factors", nullptr));
        lowButton->setText(QApplication::translate("NOCalFactorsForm", "Low NO", nullptr));
        highButton->setText(QApplication::translate("NOCalFactorsForm", "High NO", nullptr));
        backButton->setText(QApplication::translate("NOCalFactorsForm", "Back", nullptr));
        lowLabel->setText(QApplication::translate("NOCalFactorsForm", "Slope and offset for NO <= 100 ppb", nullptr));
        highLabel->setText(QApplication::translate("NOCalFactorsForm", "Slope and offset for NO >= 101 ppb", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NOCalFactorsForm: public Ui_NOCalFactorsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOCALFACTORSFORM_H
