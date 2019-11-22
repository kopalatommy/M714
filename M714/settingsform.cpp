#include "settingsform.h"
#include "ui_settingsform.h"

SettingsForm::SettingsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingsForm)
{
    ui->setupUi(this);
    SetUpUI();
}

SettingsForm::~SettingsForm()
{
    delete ui;
}

void SettingsForm::SetUpUI(){
    ui->NOcalFactorsButton->setStyleSheet("background-color:lightgray;");
    ui->O3calFactorsButton->setStyleSheet("background-color:lightgray;");
    ui->FlCalFactorsButton->setStyleSheet("background-color:lightgray;");
    ui->adminButton->setStyleSheet("background-color:lightgray;");
    ui->clockButton->setStyleSheet("background-color:lightgray;");
    ui->backButton->setStyleSheet("background-color:lightgray;");
    QString versionString;		//needed because too close to edge of screen

    versionString.append(APP_VERSION);
    versionString.append(".");
    versionString.append(BUILD_NUMBER);
    //versionString.append("    ");
    //versionString.append(COPYRIGHT_DATE);
    ui->appVersion->setText(versionString);

    UpdateUI();
}

void SettingsForm::UpdateUI(){
    ui->appVersion->setText(QString(APP_VERSION).append(".").append(BUILD_NUMBER));
    ui->ipAddress->setText(GetIPAddress());
}

QString SettingsForm::GetIPAddress(){
    QList<QHostAddress> list = QNetworkInterface::allAddresses();

    for(int i = 0; i < list.count(); i++){
        if(!list[i].isLoopback())
            if (list[i].protocol() == QAbstractSocket::IPv4Protocol )
                return list[i].toString();
    }
    return "N/A";
}

void SettingsForm::on_backButton_clicked(){
    close();
}
