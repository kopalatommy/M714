/********************************************************************************
** Form generated from reading UI file 'outputno2form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTNO2FORM_H
#define UI_OUTPUTNO2FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputNO2Form
{
public:
    QLabel *Title;
    QLabel *NO2ValueLabel;
    QLabel *NO2UnitsLabel;
    QLabel *NOsetpointLabel_2;
    QLabel *NOValueLabel;
    QLabel *NOsetpointLabel;
    QLabel *NOUnitsLabel;
    QLabel *noLightIconLabel;
    QLabel *noFlowIconLabel;
    QLabel *noTempIconLabel;
    QLabel *label;
    QLabel *o3FlowIconLabel;
    QLabel *label_2;
    QLabel *o3LightIconLabel;
    QLabel *o3TempIconLabel;
    QPushButton *quitButton;
    QPushButton *scrollRightButton;
    QPushButton *scrollLeftButton;
    QLabel *diagnosticData;
    QWidget *TitleBackground;
    QLabel *blockingLabel;

    void setupUi(QWidget *OutputNO2Form)
    {
        if (OutputNO2Form->objectName().isEmpty())
            OutputNO2Form->setObjectName(QString::fromUtf8("OutputNO2Form"));
        OutputNO2Form->resize(480, 277);
        OutputNO2Form->setMinimumSize(QSize(480, 277));
        OutputNO2Form->setMaximumSize(QSize(480, 277));
        Title = new QLabel(OutputNO2Form);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(0, 0, 481, 51));
        QFont font;
        font.setPointSize(20);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);
        NO2ValueLabel = new QLabel(OutputNO2Form);
        NO2ValueLabel->setObjectName(QString::fromUtf8("NO2ValueLabel"));
        NO2ValueLabel->setGeometry(QRect(240, 60, 100, 28));
        NO2ValueLabel->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setPointSize(15);
        NO2ValueLabel->setFont(font1);
        NO2ValueLabel->setAlignment(Qt::AlignCenter);
        NO2UnitsLabel = new QLabel(OutputNO2Form);
        NO2UnitsLabel->setObjectName(QString::fromUtf8("NO2UnitsLabel"));
        NO2UnitsLabel->setGeometry(QRect(360, 60, 61, 28));
        NO2UnitsLabel->setFont(font1);
        NOsetpointLabel_2 = new QLabel(OutputNO2Form);
        NOsetpointLabel_2->setObjectName(QString::fromUtf8("NOsetpointLabel_2"));
        NOsetpointLabel_2->setGeometry(QRect(40, 60, 200, 28));
        NOsetpointLabel_2->setMinimumSize(QSize(200, 0));
        NOsetpointLabel_2->setMaximumSize(QSize(200, 16777215));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        NOsetpointLabel_2->setFont(font2);
        NOValueLabel = new QLabel(OutputNO2Form);
        NOValueLabel->setObjectName(QString::fromUtf8("NOValueLabel"));
        NOValueLabel->setGeometry(QRect(240, 110, 100, 28));
        NOValueLabel->setMinimumSize(QSize(100, 0));
        NOValueLabel->setFont(font1);
        NOValueLabel->setAlignment(Qt::AlignCenter);
        NOsetpointLabel = new QLabel(OutputNO2Form);
        NOsetpointLabel->setObjectName(QString::fromUtf8("NOsetpointLabel"));
        NOsetpointLabel->setGeometry(QRect(40, 110, 200, 28));
        NOsetpointLabel->setMinimumSize(QSize(200, 0));
        NOsetpointLabel->setMaximumSize(QSize(200, 30));
        NOsetpointLabel->setFont(font2);
        NOUnitsLabel = new QLabel(OutputNO2Form);
        NOUnitsLabel->setObjectName(QString::fromUtf8("NOUnitsLabel"));
        NOUnitsLabel->setGeometry(QRect(360, 110, 51, 28));
        NOUnitsLabel->setFont(font1);
        noLightIconLabel = new QLabel(OutputNO2Form);
        noLightIconLabel->setObjectName(QString::fromUtf8("noLightIconLabel"));
        noLightIconLabel->setGeometry(QRect(294, 151, 20, 25));
        noLightIconLabel->setMinimumSize(QSize(20, 20));
        noLightIconLabel->setMaximumSize(QSize(25, 25));
        noFlowIconLabel = new QLabel(OutputNO2Form);
        noFlowIconLabel->setObjectName(QString::fromUtf8("noFlowIconLabel"));
        noFlowIconLabel->setGeometry(QRect(150, 151, 20, 25));
        noFlowIconLabel->setMinimumSize(QSize(20, 20));
        noFlowIconLabel->setMaximumSize(QSize(25, 25));
        noTempIconLabel = new QLabel(OutputNO2Form);
        noTempIconLabel->setObjectName(QString::fromUtf8("noTempIconLabel"));
        noTempIconLabel->setGeometry(QRect(222, 151, 20, 25));
        noTempIconLabel->setMinimumSize(QSize(20, 20));
        noTempIconLabel->setMaximumSize(QSize(25, 25));
        label = new QLabel(OutputNO2Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 150, 58, 28));
        QFont font3;
        font3.setPointSize(8);
        label->setFont(font3);
        o3FlowIconLabel = new QLabel(OutputNO2Form);
        o3FlowIconLabel->setObjectName(QString::fromUtf8("o3FlowIconLabel"));
        o3FlowIconLabel->setGeometry(QRect(149, 181, 20, 25));
        o3FlowIconLabel->setMinimumSize(QSize(20, 20));
        o3FlowIconLabel->setMaximumSize(QSize(25, 25));
        o3FlowIconLabel->setScaledContents(true);
        label_2 = new QLabel(OutputNO2Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(38, 180, 57, 28));
        label_2->setFont(font3);
        o3LightIconLabel = new QLabel(OutputNO2Form);
        o3LightIconLabel->setObjectName(QString::fromUtf8("o3LightIconLabel"));
        o3LightIconLabel->setGeometry(QRect(296, 181, 20, 25));
        o3LightIconLabel->setMinimumSize(QSize(20, 20));
        o3LightIconLabel->setMaximumSize(QSize(25, 25));
        o3TempIconLabel = new QLabel(OutputNO2Form);
        o3TempIconLabel->setObjectName(QString::fromUtf8("o3TempIconLabel"));
        o3TempIconLabel->setGeometry(QRect(222, 181, 20, 25));
        o3TempIconLabel->setMinimumSize(QSize(20, 20));
        o3TempIconLabel->setMaximumSize(QSize(25, 25));
        quitButton = new QPushButton(OutputNO2Form);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(350, 180, 105, 28));
        quitButton->setMinimumSize(QSize(105, 0));
        quitButton->setMaximumSize(QSize(70, 16777215));
        QFont font4;
        font4.setPointSize(12);
        quitButton->setFont(font4);
        scrollRightButton = new QPushButton(OutputNO2Form);
        scrollRightButton->setObjectName(QString::fromUtf8("scrollRightButton"));
        scrollRightButton->setGeometry(QRect(362, 220, 80, 50));
        scrollRightButton->setMinimumSize(QSize(80, 50));
        scrollRightButton->setMaximumSize(QSize(80, 50));
        QFont font5;
        font5.setPointSize(30);
        font5.setBold(true);
        font5.setWeight(75);
        scrollRightButton->setFont(font5);
        scrollLeftButton = new QPushButton(OutputNO2Form);
        scrollLeftButton->setObjectName(QString::fromUtf8("scrollLeftButton"));
        scrollLeftButton->setGeometry(QRect(33, 220, 80, 50));
        scrollLeftButton->setMinimumSize(QSize(80, 50));
        scrollLeftButton->setMaximumSize(QSize(80, 50));
        scrollLeftButton->setFont(font5);
        diagnosticData = new QLabel(OutputNO2Form);
        diagnosticData->setObjectName(QString::fromUtf8("diagnosticData"));
        diagnosticData->setGeometry(QRect(120, 220, 235, 50));
        diagnosticData->setMinimumSize(QSize(235, 0));
        diagnosticData->setFont(font4);
        diagnosticData->setAlignment(Qt::AlignCenter);
        TitleBackground = new QWidget(OutputNO2Form);
        TitleBackground->setObjectName(QString::fromUtf8("TitleBackground"));
        TitleBackground->setGeometry(QRect(0, 0, 481, 51));
        blockingLabel = new QLabel(OutputNO2Form);
        blockingLabel->setObjectName(QString::fromUtf8("blockingLabel"));
        blockingLabel->setGeometry(QRect(0, 0, 481, 281));
        blockingLabel->setPixmap(QPixmap(QString::fromUtf8(":/Resources/hourGlassPleaseWait.png")));
        TitleBackground->raise();
        Title->raise();
        NO2ValueLabel->raise();
        NO2UnitsLabel->raise();
        NOsetpointLabel_2->raise();
        NOValueLabel->raise();
        NOsetpointLabel->raise();
        NOUnitsLabel->raise();
        noLightIconLabel->raise();
        noFlowIconLabel->raise();
        noTempIconLabel->raise();
        label->raise();
        o3FlowIconLabel->raise();
        label_2->raise();
        o3LightIconLabel->raise();
        o3TempIconLabel->raise();
        quitButton->raise();
        scrollRightButton->raise();
        scrollLeftButton->raise();
        diagnosticData->raise();
        blockingLabel->raise();

        retranslateUi(OutputNO2Form);

        QMetaObject::connectSlotsByName(OutputNO2Form);
    } // setupUi

    void retranslateUi(QWidget *OutputNO2Form)
    {
        OutputNO2Form->setWindowTitle(QApplication::translate("OutputNO2Form", "Form", nullptr));
        Title->setText(QApplication::translate("OutputNO2Form", "Outputting NO2", nullptr));
        NO2ValueLabel->setText(QApplication::translate("OutputNO2Form", "0", nullptr));
        NO2UnitsLabel->setText(QApplication::translate("OutputNO2Form", "ppb", nullptr));
        NOsetpointLabel_2->setText(QApplication::translate("OutputNO2Form", "NO2 Output:", nullptr));
        NOValueLabel->setText(QApplication::translate("OutputNO2Form", "0", nullptr));
        NOsetpointLabel->setText(QApplication::translate("OutputNO2Form", "NO Output:", nullptr));
        NOUnitsLabel->setText(QApplication::translate("OutputNO2Form", "ppb", nullptr));
        noLightIconLabel->setText(QString());
        noFlowIconLabel->setText(QString());
        noTempIconLabel->setText(QString());
        label->setText(QApplication::translate("OutputNO2Form", "NOChannel:", nullptr));
        o3FlowIconLabel->setText(QString());
        label_2->setText(QApplication::translate("OutputNO2Form", "O3Channel:", nullptr));
        o3LightIconLabel->setText(QString());
        o3TempIconLabel->setText(QString());
        quitButton->setText(QApplication::translate("OutputNO2Form", "Done", nullptr));
        scrollRightButton->setText(QApplication::translate("OutputNO2Form", ">", nullptr));
        scrollLeftButton->setText(QApplication::translate("OutputNO2Form", "<", nullptr));
        diagnosticData->setText(QApplication::translate("OutputNO2Form", "Diagnostics", nullptr));
        blockingLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OutputNO2Form: public Ui_OutputNO2Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTNO2FORM_H
