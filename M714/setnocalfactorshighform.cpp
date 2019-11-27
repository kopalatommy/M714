#include "setnocalfactorshighform.h"
#include "ui_setnocalfactorshighform.h"

SetNOCalFactorsHighForm::SetNOCalFactorsHighForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetNOCalFactorsHighForm)
{
    ui->setupUi(this);
    SetupUI();
}

SetNOCalFactorsHighForm::~SetNOCalFactorsHighForm()
{
    delete ui;
}

void SetNOCalFactorsHighForm::SetupUI(){
    ui->decreaseButton->setStyleSheet("background-color:lightgray;");
    ui->increaseButton->setStyleSheet("background-color:lightgray;");
    ui->backButton->setStyleSheet("background-color:lightgray;");
    this->setStyleSheet("QPushButton:checked { background-color: black }");
}

void SetNOCalFactorsHighForm::on_NOSlopeCB_clicked(){
    ui->NOSlopeCB->setChecked(true);
    ui->NOZeroCB->setChecked(false);
    ui->pidGainNOCB->setChecked(false);
}

void SetNOCalFactorsHighForm::on_NOZeroCB_clicked(){
    ui->NOZeroCB->setChecked(true);
    ui->NOSlopeCB->setChecked(false);
    ui->pidGainNOCB->setChecked(false);
}

void SetNOCalFactorsHighForm::on_pidGainNOCB_clicked(){
    ui->pidGainNOCB->setChecked(true);
    ui->NOZeroCB->setChecked(false);
    ui->NOSlopeCB->setChecked(false);
}

void SetNOCalFactorsHighForm::on_pidGainInfo_clicked(){
    QMessageBox msgBox;
    QString messageBoxString("PID gain Factor: Increase to get to concentration faster. Decrease if intensity is not stable. Default value is 0.030.");
    msgBox.setText(messageBoxString);
    msgBox.exec();
}

void SetNOCalFactorsHighForm::on_increaseButton_clicked(){
    double displayValue = 0;
    if(ui->NOSlopeCB->isChecked()){
        noSlope++;
        if(noSlope > 200) noSlope = 20;
        displayValue = noSlope;
        displayValue /= 100;
        ui->NOSlopeLCD->display(QString::number(displayValue, 'f', 2));
    }
    else if(ui->NOZeroCB->isChecked()){
        noZero++;
        if(noZero > 50) noZero = -50;
        displayValue = noZero;
        ui->NOZeroLCD->display(displayValue);
    }
    else if(ui->pidGainNOCB->isChecked()){
        noPidGain++;
        if(noPidGain > 99) noPidGain = 1;
        displayValue = noPidGain;
        displayValue /= 1000;
        ui->pidGainNOLCD->display(QString::number(displayValue, 'f', 3));
    }
}

void SetNOCalFactorsHighForm::on_decreaseButton_clicked(){
    double displayValue = 0;
    if(ui->NOSlopeCB->isChecked()){
        noSlope--;
        if(noSlope < 20) noSlope = 200;
        displayValue = noSlope;
        displayValue /= 100;
        ui->NOSlopeLCD->display(QString::number(displayValue, 'f', 2));
    }
    else if(ui->NOZeroCB->isChecked()){
        noZero++;
        if(noZero < -50) noZero = 50;
        displayValue = noZero;
        ui->NOZeroLCD->display(displayValue);
    }
    else if(ui->pidGainNOCB->isChecked()){
        noPidGain++;
        if(noPidGain < 1) noPidGain = 99;
        displayValue = noPidGain;
        displayValue /= 1000;
        ui->pidGainNOLCD->display(QString::number(displayValue, 'f', 3));
    }
}

void SetNOCalFactorsHighForm::on_saveButton_clicked(){
    Model714Settings * settings = Model714Settings::GetInstance();
    double tempVal = 0;
    QString command = "";

    settings->SetLowNOSlope(noSlope);
    tempVal = noSlope;
    tempVal /= 100;
    command = "NOS," + QString::number(tempVal);
    SerialHandler::GetInstance()->WriteCommand(command);

    settings->SetLowNOZero(noZero);
    command = "NOZ," + QString::number(noZero);
    SerialHandler::GetInstance()->WriteCommand(command);

    settings->SetLowNOPIDGain(noPidGain);
    command = "NGA," + QString::number(noPidGain);
    SerialHandler::GetInstance()->WriteCommand(command);

    QMessageBox msg;
    msg.setText("Applied new settings");
    msg.setStandardButtons(QMessageBox::StandardButton::Ok);
    msg.exec();
}

void SetNOCalFactorsHighForm::on_backButton_clicked(){
    close();
}
