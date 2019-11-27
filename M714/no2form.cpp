#include "no2form.h"
#include "ui_no2form.h"

NO2Form::NO2Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NO2Form)
{
    ui->setupUi(this);

    connect(&outputNO2, &OutputNO2Form::TimedOut, this, &NO2Form::OutputTimeout);
    connect(&outputNO2, &OutputNO2Form::ReceivedError, this, &NO2Form::OutputError);
    connect(&outputNO2, &OutputNO2Form::CloseAll, this, &NO2Form::CloseAll);

    noSetting = Model714Settings::GetInstance()->GetNOOutputNO2();
    ozoneSetting = Model714Settings::GetInstance()->GetOzoneOutputNO2();
    CalculateTitration();
}

NO2Form::~NO2Form()
{
    delete ui;
}

void NO2Form::on_increaseNOButton_clicked(){
    if(noSetting <= 95)
        noSetting += 5;
    else
        noSetting += 10;
    if(noSetting > NO_MAXIMUM_VALUE_NO2 || noSetting < 0){
        noSetting = 0;
    }
    ui->noConcentration->display(noSetting);
    CalculateTitration();
    ui->no2Concentration->display(no2Setting);
}

void NO2Form::on_decreaseNOButton_clicked(){
    if(noSetting <= 100)
        noSetting -= 5;
    else
        noSetting -= 10;
    if(noSetting < 0){
        noSetting = NO_MAXIMUM_VALUE_NO2;
    }
    ui->noConcentration->display(noSetting);
    CalculateTitration();
    ui->no2Concentration->display(no2Setting);
}

void NO2Form::on_increaseOzoneButton_clicked(){
    if(ozoneSetting <= 95)
        ozoneSetting += 5;
    else
        ozoneSetting += 10;
    if(ozoneSetting > OZONE_MAXIMUM_VALUE_NO2 || ozoneSetting < 0){
        ozoneSetting = 0;
    }
    ui->o3Concentration->display(ozoneSetting);
    CalculateTitration();
    ui->noConcentration->display(noSetting);
    ui->no2Concentration->display(no2Setting);
}

void NO2Form::on_decreaseOzoneButton_clicked(){
    if(ozoneSetting <= 100)
        ozoneSetting -= 5;
    else
        ozoneSetting -= 10;
    if(ozoneSetting < 0){
        ozoneSetting = OZONE_MAXIMUM_VALUE_NO2;
    }
    ui->o3Concentration->display(ozoneSetting);
    CalculateTitration();
    ui->noConcentration->display(noSetting);
    ui->no2Concentration->display(no2Setting);
}

void NO2Form::on_startButton_clicked(){
    Model714Settings::GetInstance()->SetNOOutputNO2(noSetting);
    Model714Settings::GetInstance()->SetOzoneOutputNO2(ozoneSetting);

    outputNO2.StartSequence(noSetting, noSetting, no2Setting);
    outputNO2.show();
}

void NO2Form::on_cancelButton_clicked(){
    close();
}

void NO2Form::OutputError(){
    QMessageBox msg;
    msg.setText("ERROR: Timeout");
    msg.setStandardButtons(QMessageBox::StandardButton::Ok);
    msg.exec();
}

void NO2Form::OutputTimeout(){
    QMessageBox msg;
    msg.setText("ERROR: Received error");
    msg.setStandardButtons(QMessageBox::StandardButton::Ok);
    msg.exec();
}

void NO2Form::CalculateTitration(){
    if(noSetting < (2 * ozoneSetting)){
        noSetting = 2 * ozoneSetting;
    }
    no2Setting = ozoneSetting;
}

void NO2Form::showEvent(QShowEvent *event){
    QWidget::showEvent(event);

    ui->o3Concentration->display(ozoneSetting);
    ui->noConcentration->display(noSetting);
    ui->no2Concentration->display(no2Setting);
}

void NO2Form::closeEvent(QCloseEvent *event){
    QWidget::closeEvent(event);
}

void NO2Form::CloseAll(){
    close();
}
