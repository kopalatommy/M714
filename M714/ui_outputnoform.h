/********************************************************************************
** Form generated from reading UI file 'outputnoform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTNOFORM_H
#define UI_OUTPUTNOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputNOForm
{
public:
    QWidget *TitleBackground;
    QLabel *label;
    QPushButton *DiagLeft;
    QPushButton *DiagRight;
    QLabel *diagLabel;
    QLabel *NOOutput;
    QLabel *valueLabel;
    QLabel *units;
    QLabel *flowIconLabel;
    QLabel *tempIconLabel;
    QLabel *lightIconLabel;
    QPushButton *quitButton;
    QLabel *blockingLabel;

    void setupUi(QWidget *OutputNOForm)
    {
        if (OutputNOForm->objectName().isEmpty())
            OutputNOForm->setObjectName(QString::fromUtf8("OutputNOForm"));
        OutputNOForm->resize(480, 277);
        OutputNOForm->setMinimumSize(QSize(480, 277));
        OutputNOForm->setMaximumSize(QSize(480, 277));
        TitleBackground = new QWidget(OutputNOForm);
        TitleBackground->setObjectName(QString::fromUtf8("TitleBackground"));
        TitleBackground->setGeometry(QRect(0, 0, 481, 50));
        label = new QLabel(TitleBackground);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(4, 5, 471, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        DiagLeft = new QPushButton(OutputNOForm);
        DiagLeft->setObjectName(QString::fromUtf8("DiagLeft"));
        DiagLeft->setGeometry(QRect(10, 220, 50, 50));
        QFont font1;
        font1.setPointSize(15);
        DiagLeft->setFont(font1);
        DiagRight = new QPushButton(OutputNOForm);
        DiagRight->setObjectName(QString::fromUtf8("DiagRight"));
        DiagRight->setGeometry(QRect(420, 220, 50, 50));
        DiagRight->setFont(font1);
        diagLabel = new QLabel(OutputNOForm);
        diagLabel->setObjectName(QString::fromUtf8("diagLabel"));
        diagLabel->setGeometry(QRect(60, 220, 361, 51));
        diagLabel->setFont(font1);
        diagLabel->setAlignment(Qt::AlignCenter);
        NOOutput = new QLabel(OutputNOForm);
        NOOutput->setObjectName(QString::fromUtf8("NOOutput"));
        NOOutput->setGeometry(QRect(10, 100, 201, 50));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        NOOutput->setFont(font2);
        valueLabel = new QLabel(OutputNOForm);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        valueLabel->setGeometry(QRect(220, 100, 100, 50));
        QFont font3;
        font3.setPointSize(20);
        valueLabel->setFont(font3);
        units = new QLabel(OutputNOForm);
        units->setObjectName(QString::fromUtf8("units"));
        units->setGeometry(QRect(330, 100, 100, 50));
        units->setFont(font3);
        flowIconLabel = new QLabel(OutputNOForm);
        flowIconLabel->setObjectName(QString::fromUtf8("flowIconLabel"));
        flowIconLabel->setGeometry(QRect(60, 170, 25, 25));
        flowIconLabel->setMinimumSize(QSize(25, 20));
        flowIconLabel->setMaximumSize(QSize(25, 25));
        flowIconLabel->setAlignment(Qt::AlignCenter);
        tempIconLabel = new QLabel(OutputNOForm);
        tempIconLabel->setObjectName(QString::fromUtf8("tempIconLabel"));
        tempIconLabel->setGeometry(QRect(100, 170, 25, 25));
        tempIconLabel->setMinimumSize(QSize(25, 20));
        tempIconLabel->setMaximumSize(QSize(25, 25));
        tempIconLabel->setAlignment(Qt::AlignCenter);
        lightIconLabel = new QLabel(OutputNOForm);
        lightIconLabel->setObjectName(QString::fromUtf8("lightIconLabel"));
        lightIconLabel->setGeometry(QRect(140, 170, 25, 25));
        lightIconLabel->setMinimumSize(QSize(25, 20));
        lightIconLabel->setMaximumSize(QSize(25, 25));
        lightIconLabel->setAlignment(Qt::AlignCenter);
        quitButton = new QPushButton(OutputNOForm);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(380, 160, 93, 50));
        quitButton->setMinimumSize(QSize(0, 50));
        QFont font4;
        font4.setPointSize(12);
        quitButton->setFont(font4);
        blockingLabel = new QLabel(OutputNOForm);
        blockingLabel->setObjectName(QString::fromUtf8("blockingLabel"));
        blockingLabel->setGeometry(QRect(0, -10, 501, 291));
        blockingLabel->setPixmap(QPixmap(QString::fromUtf8(":/Resources/hourGlassPleaseWait.png")));

        retranslateUi(OutputNOForm);

        QMetaObject::connectSlotsByName(OutputNOForm);
    } // setupUi

    void retranslateUi(QWidget *OutputNOForm)
    {
        OutputNOForm->setWindowTitle(QApplication::translate("OutputNOForm", "Form", nullptr));
        label->setText(QApplication::translate("OutputNOForm", "Outputting Nitric Oxide", nullptr));
        DiagLeft->setText(QApplication::translate("OutputNOForm", "<", nullptr));
        DiagRight->setText(QApplication::translate("OutputNOForm", ">", nullptr));
        diagLabel->setText(QApplication::translate("OutputNOForm", "Diagnostics", nullptr));
        NOOutput->setText(QApplication::translate("OutputNOForm", "NO Output:", nullptr));
        valueLabel->setText(QApplication::translate("OutputNOForm", "2000", nullptr));
        units->setText(QApplication::translate("OutputNOForm", "ppb", nullptr));
        flowIconLabel->setText(QApplication::translate("OutputNOForm", "A", nullptr));
        tempIconLabel->setText(QApplication::translate("OutputNOForm", "B", nullptr));
        lightIconLabel->setText(QApplication::translate("OutputNOForm", "C", nullptr));
        quitButton->setText(QApplication::translate("OutputNOForm", "Done", nullptr));
        blockingLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OutputNOForm: public Ui_OutputNOForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTNOFORM_H
