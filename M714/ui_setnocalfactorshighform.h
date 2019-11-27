/********************************************************************************
** Form generated from reading UI file 'setnocalfactorshighform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETNOCALFACTORSHIGHFORM_H
#define UI_SETNOCALFACTORSHIGHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetNOCalFactorsHighForm
{
public:
    QFrame *line;
    QLabel *label;
    QPushButton *increaseButton;
    QPushButton *decreaseButton;
    QPushButton *saveButton;
    QPushButton *backButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLCDNumber *NOSlopeLCD;
    QLCDNumber *NOZeroLCD;
    QLabel *NOZeroLabel;
    QLabel *NOSlopeLabel;
    QLabel *pidGainNOLabel;
    QLCDNumber *pidGainNOLCD;
    QPushButton *pidGainInfo;
    QPushButton *NOSlopeCB;
    QPushButton *NOZeroCB;
    QPushButton *pidGainNOCB;

    void setupUi(QWidget *SetNOCalFactorsHighForm)
    {
        if (SetNOCalFactorsHighForm->objectName().isEmpty())
            SetNOCalFactorsHighForm->setObjectName(QString::fromUtf8("SetNOCalFactorsHighForm"));
        SetNOCalFactorsHighForm->resize(480, 277);
        SetNOCalFactorsHighForm->setMinimumSize(QSize(480, 277));
        SetNOCalFactorsHighForm->setMaximumSize(QSize(480, 277));
        line = new QFrame(SetNOCalFactorsHighForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 40, 491, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(SetNOCalFactorsHighForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 481, 51));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        increaseButton = new QPushButton(SetNOCalFactorsHighForm);
        increaseButton->setObjectName(QString::fromUtf8("increaseButton"));
        increaseButton->setGeometry(QRect(300, 70, 75, 40));
        QFont font1;
        font1.setPointSize(18);
        increaseButton->setFont(font1);
        decreaseButton = new QPushButton(SetNOCalFactorsHighForm);
        decreaseButton->setObjectName(QString::fromUtf8("decreaseButton"));
        decreaseButton->setGeometry(QRect(390, 70, 75, 40));
        decreaseButton->setFont(font1);
        saveButton = new QPushButton(SetNOCalFactorsHighForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(390, 160, 75, 40));
        saveButton->setFont(font1);
        backButton = new QPushButton(SetNOCalFactorsHighForm);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(390, 220, 75, 40));
        backButton->setFont(font1);
        gridLayoutWidget = new QWidget(SetNOCalFactorsHighForm);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 70, 285, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        NOSlopeLCD = new QLCDNumber(gridLayoutWidget);
        NOSlopeLCD->setObjectName(QString::fromUtf8("NOSlopeLCD"));
        NOSlopeLCD->setMinimumSize(QSize(0, 40));
        NOSlopeLCD->setMaximumSize(QSize(75, 40));
        NOSlopeLCD->setDigitCount(5);

        gridLayout->addWidget(NOSlopeLCD, 0, 1, 1, 1);

        NOZeroLCD = new QLCDNumber(gridLayoutWidget);
        NOZeroLCD->setObjectName(QString::fromUtf8("NOZeroLCD"));
        NOZeroLCD->setMinimumSize(QSize(0, 40));
        NOZeroLCD->setMaximumSize(QSize(75, 30));
        NOZeroLCD->setDigitCount(5);

        gridLayout->addWidget(NOZeroLCD, 1, 1, 1, 1);

        NOZeroLabel = new QLabel(gridLayoutWidget);
        NOZeroLabel->setObjectName(QString::fromUtf8("NOZeroLabel"));
        NOZeroLabel->setMaximumSize(QSize(100, 30));
        QFont font2;
        font2.setPointSize(15);
        NOZeroLabel->setFont(font2);

        gridLayout->addWidget(NOZeroLabel, 1, 0, 1, 1);

        NOSlopeLabel = new QLabel(gridLayoutWidget);
        NOSlopeLabel->setObjectName(QString::fromUtf8("NOSlopeLabel"));
        NOSlopeLabel->setMaximumSize(QSize(100, 16777215));
        QFont font3;
        font3.setPointSize(13);
        NOSlopeLabel->setFont(font3);

        gridLayout->addWidget(NOSlopeLabel, 0, 0, 1, 1);

        pidGainNOLabel = new QLabel(gridLayoutWidget);
        pidGainNOLabel->setObjectName(QString::fromUtf8("pidGainNOLabel"));
        pidGainNOLabel->setMaximumSize(QSize(100, 30));
        pidGainNOLabel->setFont(font2);

        gridLayout->addWidget(pidGainNOLabel, 2, 0, 1, 1);

        pidGainNOLCD = new QLCDNumber(gridLayoutWidget);
        pidGainNOLCD->setObjectName(QString::fromUtf8("pidGainNOLCD"));
        pidGainNOLCD->setMinimumSize(QSize(0, 40));
        pidGainNOLCD->setMaximumSize(QSize(75, 30));
        pidGainNOLCD->setDigitCount(5);

        gridLayout->addWidget(pidGainNOLCD, 2, 1, 1, 1);

        pidGainInfo = new QPushButton(gridLayoutWidget);
        pidGainInfo->setObjectName(QString::fromUtf8("pidGainInfo"));
        pidGainInfo->setMinimumSize(QSize(10, 10));
        pidGainInfo->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(pidGainInfo, 2, 3, 1, 1);

        NOSlopeCB = new QPushButton(gridLayoutWidget);
        NOSlopeCB->setObjectName(QString::fromUtf8("NOSlopeCB"));
        NOSlopeCB->setMinimumSize(QSize(30, 30));
        NOSlopeCB->setMaximumSize(QSize(30, 30));
        NOSlopeCB->setCheckable(true);
        NOSlopeCB->setChecked(true);

        gridLayout->addWidget(NOSlopeCB, 0, 2, 1, 1);

        NOZeroCB = new QPushButton(gridLayoutWidget);
        NOZeroCB->setObjectName(QString::fromUtf8("NOZeroCB"));
        NOZeroCB->setMinimumSize(QSize(30, 30));
        NOZeroCB->setMaximumSize(QSize(30, 30));
        NOZeroCB->setCheckable(true);
        NOZeroCB->setChecked(false);

        gridLayout->addWidget(NOZeroCB, 1, 2, 1, 1);

        pidGainNOCB = new QPushButton(gridLayoutWidget);
        pidGainNOCB->setObjectName(QString::fromUtf8("pidGainNOCB"));
        pidGainNOCB->setMinimumSize(QSize(30, 30));
        pidGainNOCB->setMaximumSize(QSize(30, 30));
        pidGainNOCB->setCheckable(true);
        pidGainNOCB->setChecked(false);

        gridLayout->addWidget(pidGainNOCB, 2, 2, 1, 1);


        retranslateUi(SetNOCalFactorsHighForm);

        QMetaObject::connectSlotsByName(SetNOCalFactorsHighForm);
    } // setupUi

    void retranslateUi(QWidget *SetNOCalFactorsHighForm)
    {
        SetNOCalFactorsHighForm->setWindowTitle(QApplication::translate("SetNOCalFactorsHighForm", "Form", nullptr));
        label->setText(QApplication::translate("SetNOCalFactorsHighForm", "Set Low NO Cal Factors (<= 100 ppb)", nullptr));
        increaseButton->setText(QApplication::translate("SetNOCalFactorsHighForm", "+", nullptr));
        decreaseButton->setText(QApplication::translate("SetNOCalFactorsHighForm", "-", nullptr));
        saveButton->setText(QApplication::translate("SetNOCalFactorsHighForm", "Save", nullptr));
        backButton->setText(QApplication::translate("SetNOCalFactorsHighForm", "Back", nullptr));
        NOZeroLabel->setText(QApplication::translate("SetNOCalFactorsHighForm", "NO Zero", nullptr));
        NOSlopeLabel->setText(QApplication::translate("SetNOCalFactorsHighForm", "NO Slope", nullptr));
        pidGainNOLabel->setText(QApplication::translate("SetNOCalFactorsHighForm", "PID Gain", nullptr));
        pidGainInfo->setText(QApplication::translate("SetNOCalFactorsHighForm", "?", nullptr));
        NOSlopeCB->setText(QString());
        NOZeroCB->setText(QString());
        pidGainNOCB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SetNOCalFactorsHighForm: public Ui_SetNOCalFactorsHighForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETNOCALFACTORSHIGHFORM_H
