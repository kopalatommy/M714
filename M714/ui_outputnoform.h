/********************************************************************************
** Form generated from reading UI file 'outputnoform.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTNOFORM_H
#define UI_OUTPUTNOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QLabel *label_5;
    QLabel *flowIconLabel;
    QLabel *tempIconLabel;
    QLabel *lightIconLabel;
    QPushButton *quitButton;
    QLabel *WaitLabel;

    void setupUi(QWidget *OutputNOForm)
    {
        if (OutputNOForm->objectName().isEmpty())
            OutputNOForm->setObjectName(QStringLiteral("OutputNOForm"));
        OutputNOForm->resize(480, 277);
        OutputNOForm->setMinimumSize(QSize(480, 277));
        OutputNOForm->setMaximumSize(QSize(480, 277));
        TitleBackground = new QWidget(OutputNOForm);
        TitleBackground->setObjectName(QStringLiteral("TitleBackground"));
        TitleBackground->setGeometry(QRect(0, 0, 481, 50));
        label = new QLabel(TitleBackground);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(4, 5, 471, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        DiagLeft = new QPushButton(OutputNOForm);
        DiagLeft->setObjectName(QStringLiteral("DiagLeft"));
        DiagLeft->setGeometry(QRect(10, 220, 50, 50));
        QFont font1;
        font1.setPointSize(15);
        DiagLeft->setFont(font1);
        DiagRight = new QPushButton(OutputNOForm);
        DiagRight->setObjectName(QStringLiteral("DiagRight"));
        DiagRight->setGeometry(QRect(420, 220, 50, 50));
        DiagRight->setFont(font1);
        diagLabel = new QLabel(OutputNOForm);
        diagLabel->setObjectName(QStringLiteral("diagLabel"));
        diagLabel->setGeometry(QRect(60, 220, 361, 51));
        diagLabel->setFont(font1);
        diagLabel->setAlignment(Qt::AlignCenter);
        NOOutput = new QLabel(OutputNOForm);
        NOOutput->setObjectName(QStringLiteral("NOOutput"));
        NOOutput->setGeometry(QRect(10, 100, 201, 50));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        NOOutput->setFont(font2);
        valueLabel = new QLabel(OutputNOForm);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));
        valueLabel->setGeometry(QRect(220, 100, 100, 50));
        QFont font3;
        font3.setPointSize(20);
        valueLabel->setFont(font3);
        label_5 = new QLabel(OutputNOForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 100, 100, 50));
        label_5->setFont(font3);
        flowIconLabel = new QLabel(OutputNOForm);
        flowIconLabel->setObjectName(QStringLiteral("flowIconLabel"));
        flowIconLabel->setGeometry(QRect(60, 170, 25, 25));
        flowIconLabel->setMinimumSize(QSize(25, 20));
        flowIconLabel->setMaximumSize(QSize(25, 25));
        flowIconLabel->setAlignment(Qt::AlignCenter);
        tempIconLabel = new QLabel(OutputNOForm);
        tempIconLabel->setObjectName(QStringLiteral("tempIconLabel"));
        tempIconLabel->setGeometry(QRect(100, 170, 25, 25));
        tempIconLabel->setMinimumSize(QSize(25, 20));
        tempIconLabel->setMaximumSize(QSize(25, 25));
        tempIconLabel->setAlignment(Qt::AlignCenter);
        lightIconLabel = new QLabel(OutputNOForm);
        lightIconLabel->setObjectName(QStringLiteral("lightIconLabel"));
        lightIconLabel->setGeometry(QRect(140, 170, 25, 25));
        lightIconLabel->setMinimumSize(QSize(25, 20));
        lightIconLabel->setMaximumSize(QSize(25, 25));
        lightIconLabel->setAlignment(Qt::AlignCenter);
        quitButton = new QPushButton(OutputNOForm);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(380, 160, 93, 50));
        quitButton->setMinimumSize(QSize(0, 50));
        QFont font4;
        font4.setPointSize(12);
        quitButton->setFont(font4);
        WaitLabel = new QLabel(OutputNOForm);
        WaitLabel->setObjectName(QStringLiteral("WaitLabel"));
        WaitLabel->setGeometry(QRect(-6, -5, 491, 281));

        retranslateUi(OutputNOForm);

        QMetaObject::connectSlotsByName(OutputNOForm);
    } // setupUi

    void retranslateUi(QWidget *OutputNOForm)
    {
        OutputNOForm->setWindowTitle(QApplication::translate("OutputNOForm", "Form", 0));
        label->setText(QApplication::translate("OutputNOForm", "Outputting Nitric Oxide", 0));
        DiagLeft->setText(QApplication::translate("OutputNOForm", "<", 0));
        DiagRight->setText(QApplication::translate("OutputNOForm", ">", 0));
        diagLabel->setText(QApplication::translate("OutputNOForm", "Diagnostics", 0));
        NOOutput->setText(QApplication::translate("OutputNOForm", "NO Output:", 0));
        valueLabel->setText(QApplication::translate("OutputNOForm", "2000", 0));
        label_5->setText(QApplication::translate("OutputNOForm", "ppb", 0));
        flowIconLabel->setText(QApplication::translate("OutputNOForm", "A", 0));
        tempIconLabel->setText(QApplication::translate("OutputNOForm", "B", 0));
        lightIconLabel->setText(QApplication::translate("OutputNOForm", "C", 0));
        quitButton->setText(QApplication::translate("OutputNOForm", "Done", 0));
        WaitLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OutputNOForm: public Ui_OutputNOForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTNOFORM_H
