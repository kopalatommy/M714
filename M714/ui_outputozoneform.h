/********************************************************************************
** Form generated from reading UI file 'outputozoneform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTOZONEFORM_H
#define UI_OUTPUTOZONEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputOzoneForm
{
public:
    QLabel *Title;
    QPushButton *diagRight;
    QPushButton *diagLeft;
    QLabel *DiagnosticLabel;
    QLabel *OutputLabel;
    QLabel *FlowLabel;
    QLabel *TempIconLabel;
    QLabel *LightIconLabel;
    QPushButton *quitButton;
    QWidget *widgetBackground;
    QLabel *BlockingLabel;

    void setupUi(QWidget *OutputOzoneForm)
    {
        if (OutputOzoneForm->objectName().isEmpty())
            OutputOzoneForm->setObjectName(QString::fromUtf8("OutputOzoneForm"));
        OutputOzoneForm->resize(480, 277);
        OutputOzoneForm->setMinimumSize(QSize(480, 277));
        OutputOzoneForm->setMaximumSize(QSize(480, 277));
        Title = new QLabel(OutputOzoneForm);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(10, 10, 461, 41));
        QFont font;
        font.setPointSize(15);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);
        diagRight = new QPushButton(OutputOzoneForm);
        diagRight->setObjectName(QString::fromUtf8("diagRight"));
        diagRight->setGeometry(QRect(422, 217, 51, 51));
        diagRight->setFont(font);
        diagLeft = new QPushButton(OutputOzoneForm);
        diagLeft->setObjectName(QString::fromUtf8("diagLeft"));
        diagLeft->setGeometry(QRect(10, 220, 51, 51));
        diagLeft->setFont(font);
        DiagnosticLabel = new QLabel(OutputOzoneForm);
        DiagnosticLabel->setObjectName(QString::fromUtf8("DiagnosticLabel"));
        DiagnosticLabel->setGeometry(QRect(60, 220, 361, 51));
        DiagnosticLabel->setFont(font);
        DiagnosticLabel->setAlignment(Qt::AlignCenter);
        OutputLabel = new QLabel(OutputOzoneForm);
        OutputLabel->setObjectName(QString::fromUtf8("OutputLabel"));
        OutputLabel->setGeometry(QRect(20, 70, 451, 61));
        OutputLabel->setFont(font);
        OutputLabel->setAlignment(Qt::AlignCenter);
        FlowLabel = new QLabel(OutputOzoneForm);
        FlowLabel->setObjectName(QString::fromUtf8("FlowLabel"));
        FlowLabel->setGeometry(QRect(40, 150, 50, 50));
        FlowLabel->setAlignment(Qt::AlignCenter);
        TempIconLabel = new QLabel(OutputOzoneForm);
        TempIconLabel->setObjectName(QString::fromUtf8("TempIconLabel"));
        TempIconLabel->setGeometry(QRect(110, 150, 50, 50));
        TempIconLabel->setAlignment(Qt::AlignCenter);
        LightIconLabel = new QLabel(OutputOzoneForm);
        LightIconLabel->setObjectName(QString::fromUtf8("LightIconLabel"));
        LightIconLabel->setGeometry(QRect(190, 150, 50, 50));
        LightIconLabel->setAlignment(Qt::AlignCenter);
        quitButton = new QPushButton(OutputOzoneForm);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(380, 160, 93, 51));
        widgetBackground = new QWidget(OutputOzoneForm);
        widgetBackground->setObjectName(QString::fromUtf8("widgetBackground"));
        widgetBackground->setGeometry(QRect(0, 0, 481, 61));
        BlockingLabel = new QLabel(OutputOzoneForm);
        BlockingLabel->setObjectName(QString::fromUtf8("BlockingLabel"));
        BlockingLabel->setGeometry(QRect(0, 0, 491, 281));
        BlockingLabel->setPixmap(QPixmap(QString::fromUtf8(":/Resources/hourGlassPleaseWait.png")));
        widgetBackground->raise();
        Title->raise();
        diagRight->raise();
        diagLeft->raise();
        DiagnosticLabel->raise();
        OutputLabel->raise();
        FlowLabel->raise();
        TempIconLabel->raise();
        LightIconLabel->raise();
        quitButton->raise();
        BlockingLabel->raise();

        retranslateUi(OutputOzoneForm);

        QMetaObject::connectSlotsByName(OutputOzoneForm);
    } // setupUi

    void retranslateUi(QWidget *OutputOzoneForm)
    {
        OutputOzoneForm->setWindowTitle(QApplication::translate("OutputOzoneForm", "Form", nullptr));
        Title->setText(QApplication::translate("OutputOzoneForm", "Outputting Ozone", nullptr));
        diagRight->setText(QApplication::translate("OutputOzoneForm", ">", nullptr));
        diagLeft->setText(QApplication::translate("OutputOzoneForm", "<", nullptr));
        DiagnosticLabel->setText(QApplication::translate("OutputOzoneForm", "Diagnostics", nullptr));
        OutputLabel->setText(QApplication::translate("OutputOzoneForm", "O3 Output: 0 ppb", nullptr));
        FlowLabel->setText(QApplication::translate("OutputOzoneForm", "A", nullptr));
        TempIconLabel->setText(QApplication::translate("OutputOzoneForm", "B", nullptr));
        LightIconLabel->setText(QApplication::translate("OutputOzoneForm", "C", nullptr));
        quitButton->setText(QApplication::translate("OutputOzoneForm", "Done", nullptr));
        BlockingLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OutputOzoneForm: public Ui_OutputOzoneForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTOZONEFORM_H
