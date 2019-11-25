/********************************************************************************
** Form generated from reading UI file 'settingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFORM_H
#define UI_SETTINGSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsForm
{
public:
    QLabel *appVersion;
    QLabel *ipAddressLabel;
    QLabel *ipAddress;
    QLabel *appVersionLabel;
    QPushButton *backButton;
    QLabel *label;
    QFrame *line;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *NOcalFactorsButton;
    QPushButton *O3calFactorsButton;
    QPushButton *clockButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *FlCalFactorsButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *adminButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *SettingsForm)
    {
        if (SettingsForm->objectName().isEmpty())
            SettingsForm->setObjectName(QStringLiteral("SettingsForm"));
        SettingsForm->resize(480, 277);
        SettingsForm->setMinimumSize(QSize(480, 277));
        SettingsForm->setMaximumSize(QSize(480, 277));
        appVersion = new QLabel(SettingsForm);
        appVersion->setObjectName(QStringLiteral("appVersion"));
        appVersion->setGeometry(QRect(120, 210, 71, 21));
        ipAddressLabel = new QLabel(SettingsForm);
        ipAddressLabel->setObjectName(QStringLiteral("ipAddressLabel"));
        ipAddressLabel->setGeometry(QRect(10, 240, 91, 21));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        ipAddressLabel->setFont(font);
        ipAddress = new QLabel(SettingsForm);
        ipAddress->setObjectName(QStringLiteral("ipAddress"));
        ipAddress->setGeometry(QRect(120, 240, 101, 21));
        appVersionLabel = new QLabel(SettingsForm);
        appVersionLabel->setObjectName(QStringLiteral("appVersionLabel"));
        appVersionLabel->setGeometry(QRect(10, 210, 101, 21));
        appVersionLabel->setFont(font);
        backButton = new QPushButton(SettingsForm);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(340, 210, 120, 50));
        backButton->setMinimumSize(QSize(115, 50));
        backButton->setMaximumSize(QSize(120, 16777215));
        QFont font1;
        font1.setPointSize(15);
        backButton->setFont(font1);
        label = new QLabel(SettingsForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 461, 41));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(SettingsForm);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 40, 491, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(SettingsForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 391, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        NOcalFactorsButton = new QPushButton(layoutWidget);
        NOcalFactorsButton->setObjectName(QStringLiteral("NOcalFactorsButton"));
        NOcalFactorsButton->setMinimumSize(QSize(125, 50));
        NOcalFactorsButton->setMaximumSize(QSize(100, 50));

        horizontalLayout->addWidget(NOcalFactorsButton);

        O3calFactorsButton = new QPushButton(layoutWidget);
        O3calFactorsButton->setObjectName(QStringLiteral("O3calFactorsButton"));
        O3calFactorsButton->setMinimumSize(QSize(125, 50));
        O3calFactorsButton->setMaximumSize(QSize(100, 50));

        horizontalLayout->addWidget(O3calFactorsButton);

        clockButton = new QPushButton(layoutWidget);
        clockButton->setObjectName(QStringLiteral("clockButton"));
        clockButton->setMinimumSize(QSize(125, 50));
        clockButton->setMaximumSize(QSize(120, 50));

        horizontalLayout->addWidget(clockButton);

        layoutWidget_2 = new QWidget(SettingsForm);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(39, 130, 391, 52));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        FlCalFactorsButton = new QPushButton(layoutWidget_2);
        FlCalFactorsButton->setObjectName(QStringLiteral("FlCalFactorsButton"));
        FlCalFactorsButton->setMinimumSize(QSize(125, 50));
        FlCalFactorsButton->setMaximumSize(QSize(125, 50));

        horizontalLayout_2->addWidget(FlCalFactorsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        adminButton = new QPushButton(layoutWidget_2);
        adminButton->setObjectName(QStringLiteral("adminButton"));
        adminButton->setMinimumSize(QSize(125, 50));
        adminButton->setMaximumSize(QSize(125, 50));

        horizontalLayout_2->addWidget(adminButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        retranslateUi(SettingsForm);

        QMetaObject::connectSlotsByName(SettingsForm);
    } // setupUi

    void retranslateUi(QWidget *SettingsForm)
    {
        SettingsForm->setWindowTitle(QApplication::translate("SettingsForm", "Form", 0));
        appVersion->setText(QApplication::translate("SettingsForm", "xxxx.xx.xx", 0));
        ipAddressLabel->setText(QApplication::translate("SettingsForm", "IP Address:", 0));
        ipAddress->setText(QApplication::translate("SettingsForm", "000.000.0.0", 0));
        appVersionLabel->setText(QApplication::translate("SettingsForm", "App Version:", 0));
        backButton->setText(QApplication::translate("SettingsForm", "Back", 0));
        label->setText(QApplication::translate("SettingsForm", "Settings View", 0));
        NOcalFactorsButton->setText(QApplication::translate("SettingsForm", " NO Cal Factors", 0));
        O3calFactorsButton->setText(QApplication::translate("SettingsForm", " O3 Cal Factors", 0));
        clockButton->setText(QApplication::translate("SettingsForm", "Set Clock", 0));
        FlCalFactorsButton->setText(QApplication::translate("SettingsForm", "Flow Cal Factors", 0));
        adminButton->setText(QApplication::translate("SettingsForm", "Admin", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsForm: public Ui_SettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFORM_H
