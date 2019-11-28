#include "lownocalform.h"
#include "ui_lownocalform.h"

LowNOCalForm::LowNOCalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LowNOCalForm)
{
    ui->setupUi(this);
}

LowNOCalForm::~LowNOCalForm()
{
    delete ui;
}

void LowNOCalForm::on_NOSlopeCB_clicked(){
    ui->NOSlopeCB->setChecked(true);
    ui->NOZeroCB->setChecked(false);
    ui->pidGainNOCB->setChecked(false);
}

void LowNOCalForm::on_NOZeroCB_clicked(){
    ui->NOSlopeCB->setChecked(false);
    ui->NOZeroCB->setChecked(true);
    ui->pidGainNOCB->setChecked(false);
}

void LowNOCalForm::on_pidGainNOCB_clicked(){
    ui->NOSlopeCB->setChecked(false);
    ui->NOZeroCB->setChecked(false);
    ui->pidGainNOCB->setChecked(true);
}

void LowNOCalForm::on_pidGainInfo_clicked(){
    QMessageBox msgBox;
    //msgBox.setMaximumHeight(100);
    QString messageBoxString("PID gain Factor: Increase to get to concentration faster.  Decrease if intensity is not stable.  Default value is 0.030.");
    msgBox.setText(messageBoxString);
    msgBox.exec();
}

void LowNOCalForm::on_increaseButton_clicked(){
    double temp_value;

    if(ui->NOSlopeCB->isChecked()){
        slope++;
        if(slope > 200) slope = 20;

        temp_value = slope;
        temp_value /= 100;
        ui->NOSlopeLCD->display(QString::number(temp_value, 'f', 2));
    }else if(ui->NOZeroCB->isChecked()){
        zero++;
        if(zero > 50) zero = -50;

        temp_value = zero;
        ui->NOZeroLCD->display(temp_value);
    }else if(ui->pidGainNOCB->isChecked()){
        pidGain++;
        if(pidGain > 99) pidGain = 1;
        temp_value = pidGain;
        temp_value /= 1000;
        ui->pidGainNOLCD->display(QString::number(temp_value, 'f', 3));
    }
}

void LowNOCalForm::on_decreaseButton_clicked(){
    double temp_value;

    if(ui->NOSlopeCB->isChecked()){
        slope--;
        if(slope < 20) slope = 200;

        temp_value = slope;
        temp_value /= 100;
        ui->NOSlopeLCD->display(QString::number(temp_value, 'f', 2));
    }else if(ui->NOZeroCB->isChecked()){
        zero--;
        if(zero < -50) zero = 50;

        temp_value = zero;
        ui->NOZeroLCD->display(temp_value);
    }else if(ui->pidGainNOCB->isChecked()){
        pidGain--;
        if(pidGain < 1) pidGain = 99;
        temp_value = pidGain;
        temp_value /= 1000;
        ui->pidGainNOLCD->display(QString::number(temp_value, 'f', 3));
    }
}

void LowNOCalForm::on_saveButton_clicked(){
    double temp_value;

    temp_value = slope;
    temp_value/=100;
    Model714Settings::GetInstance()->SetLowNOSlope(slope);
    SerialHandler::GetInstance()->WriteCommand("NOS," + QString::number(temp_value));

    Model714Settings::GetInstance()->SetLowNOZero(zero);
    SerialHandler::GetInstance()->WriteCommand("NOZ," + QString::number(zero));

    Model714Settings::GetInstance()->SetLowNOPIDGain(pidGain);
    SerialHandler::GetInstance()->WriteCommand("NGA," + QString::number(pidGain));

    ui->saveButton->setEnabled(false);
    ui->backButton->setEnabled(false);


    QTimer::singleShot(10000, this, SLOT(OnDisableButtonTimeout()));

    QMessageBox msgBox;
    msgBox.setText("Writing settings");
    msgBox.exec();
}

void LowNOCalForm::OnDisableButtonTimeout(){
    ui->saveButton->setEnabled(true);
    ui->backButton->setEnabled(true);
}

void LowNOCalForm::on_backButton_clicked(){
    close();
}
