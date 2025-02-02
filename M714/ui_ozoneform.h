/********************************************************************************
** Form generated from reading UI file 'ozoneform.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OZONEFORM_H
#define UI_OZONEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OzoneForm
{
public:
    QFrame *line;
    QLabel *label;
    QLCDNumber *ozoneConcentration;
    QPushButton *increaseO3Button;
    QPushButton *decreaseO3Button;
    QPushButton *startButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *OzoneForm)
    {
        if (OzoneForm->objectName().isEmpty())
            OzoneForm->setObjectName(QStringLiteral("OzoneForm"));
        OzoneForm->resize(480, 277);
        OzoneForm->setMinimumSize(QSize(480, 277));
        OzoneForm->setMaximumSize(QSize(480, 277));
        line = new QFrame(OzoneForm);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 50, 481, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(OzoneForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 461, 41));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        ozoneConcentration = new QLCDNumber(OzoneForm);
        ozoneConcentration->setObjectName(QStringLiteral("ozoneConcentration"));
        ozoneConcentration->setGeometry(QRect(110, 100, 120, 60));
        increaseO3Button = new QPushButton(OzoneForm);
        increaseO3Button->setObjectName(QStringLiteral("increaseO3Button"));
        increaseO3Button->setGeometry(QRect(270, 80, 41, 41));
        QFont font1;
        font1.setPointSize(20);
        increaseO3Button->setFont(font1);
        increaseO3Button->setAutoRepeat(true);
        decreaseO3Button = new QPushButton(OzoneForm);
        decreaseO3Button->setObjectName(QStringLiteral("decreaseO3Button"));
        decreaseO3Button->setGeometry(QRect(270, 140, 41, 41));
        QFont font2;
        font2.setPointSize(30);
        decreaseO3Button->setFont(font2);
        decreaseO3Button->setAutoRepeat(true);
        startButton = new QPushButton(OzoneForm);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(370, 230, 91, 31));
        QFont font3;
        font3.setPointSize(15);
        startButton->setFont(font3);
        cancelButton = new QPushButton(OzoneForm);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(260, 230, 91, 31));
        cancelButton->setFont(font3);

        retranslateUi(OzoneForm);

        QMetaObject::connectSlotsByName(OzoneForm);
    } // setupUi

    void retranslateUi(QWidget *OzoneForm)
    {
        OzoneForm->setWindowTitle(QApplication::translate("OzoneForm", "Form", 0));
        label->setText(QApplication::translate("OzoneForm", "Select O3 Concentration to output", 0));
        increaseO3Button->setText(QApplication::translate("OzoneForm", "+", 0));
        decreaseO3Button->setText(QApplication::translate("OzoneForm", "-", 0));
        startButton->setText(QApplication::translate("OzoneForm", "Start", 0));
        cancelButton->setText(QApplication::translate("OzoneForm", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class OzoneForm: public Ui_OzoneForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OZONEFORM_H
