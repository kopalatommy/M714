/********************************************************************************
** Form generated from reading UI file 'outputozoneform.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTOZONEFORM_H
#define UI_OUTPUTOZONEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            OutputOzoneForm->setObjectName(QStringLiteral("OutputOzoneForm"));
        OutputOzoneForm->resize(480, 277);
        OutputOzoneForm->setMinimumSize(QSize(480, 277));
        OutputOzoneForm->setMaximumSize(QSize(480, 277));
        Title = new QLabel(OutputOzoneForm);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(10, 10, 461, 41));
        QFont font;
        font.setPointSize(15);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);
        diagRight = new QPushButton(OutputOzoneForm);
        diagRight->setObjectName(QStringLiteral("diagRight"));
        diagRight->setGeometry(QRect(422, 217, 51, 51));
        diagRight->setFont(font);
        diagLeft = new QPushButton(OutputOzoneForm);
        diagLeft->setObjectName(QStringLiteral("diagLeft"));
        diagLeft->setGeometry(QRect(10, 220, 51, 51));
        diagLeft->setFont(font);
        DiagnosticLabel = new QLabel(OutputOzoneForm);
        DiagnosticLabel->setObjectName(QStringLiteral("DiagnosticLabel"));
        DiagnosticLabel->setGeometry(QRect(60, 220, 361, 51));
        DiagnosticLabel->setFont(font);
        DiagnosticLabel->setAlignment(Qt::AlignCenter);
        OutputLabel = new QLabel(OutputOzoneForm);
        OutputLabel->setObjectName(QStringLiteral("OutputLabel"));
        OutputLabel->setGeometry(QRect(20, 70, 451, 61));
        OutputLabel->setFont(font);
        OutputLabel->setAlignment(Qt::AlignCenter);
        FlowLabel = new QLabel(OutputOzoneForm);
        FlowLabel->setObjectName(QStringLiteral("FlowLabel"));
        FlowLabel->setGeometry(QRect(40, 150, 50, 50));
        FlowLabel->setAlignment(Qt::AlignCenter);
        TempIconLabel = new QLabel(OutputOzoneForm);
        TempIconLabel->setObjectName(QStringLiteral("TempIconLabel"));
        TempIconLabel->setGeometry(QRect(110, 150, 50, 50));
        TempIconLabel->setAlignment(Qt::AlignCenter);
        LightIconLabel = new QLabel(OutputOzoneForm);
        LightIconLabel->setObjectName(QStringLiteral("LightIconLabel"));
        LightIconLabel->setGeometry(QRect(190, 150, 50, 50));
        LightIconLabel->setAlignment(Qt::AlignCenter);
        quitButton = new QPushButton(OutputOzoneForm);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(380, 160, 93, 51));
        widgetBackground = new QWidget(OutputOzoneForm);
        widgetBackground->setObjectName(QStringLiteral("widgetBackground"));
        widgetBackground->setGeometry(QRect(0, 0, 481, 61));
        BlockingLabel = new QLabel(OutputOzoneForm);
        BlockingLabel->setObjectName(QStringLiteral("BlockingLabel"));
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
        OutputOzoneForm->setWindowTitle(QApplication::translate("OutputOzoneForm", "Form", 0));
        Title->setText(QApplication::translate("OutputOzoneForm", "Outputting Ozone", 0));
        diagRight->setText(QApplication::translate("OutputOzoneForm", ">", 0));
        diagLeft->setText(QApplication::translate("OutputOzoneForm", "<", 0));
        DiagnosticLabel->setText(QApplication::translate("OutputOzoneForm", "Diagnostics", 0));
        OutputLabel->setText(QApplication::translate("OutputOzoneForm", "O3 Output: 0 ppb", 0));
        FlowLabel->setText(QApplication::translate("OutputOzoneForm", "A", 0));
        TempIconLabel->setText(QApplication::translate("OutputOzoneForm", "B", 0));
        LightIconLabel->setText(QApplication::translate("OutputOzoneForm", "C", 0));
        quitButton->setText(QApplication::translate("OutputOzoneForm", "Done", 0));
        BlockingLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OutputOzoneForm: public Ui_OutputOzoneForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTOZONEFORM_H
