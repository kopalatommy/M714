#include "highnocalform.h"
#include "ui_highnocalform.h"

HighNOCalForm::HighNOCalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HighNOCalForm)
{
    ui->setupUi(this);
    SetupUI();

    slope = Model714Settings::GetInstance()->GetHighNOSlope();
    zero = Model714Settings::GetInstance()->GetHighNOZero();
    pidGain = Model714Settings::GetInstance()->GetHighNOPIDGain();

    if(slope < 20){
        slope = 100;
        Model714Settings::GetInstance()->SetHighNOSlope(slope);
    }

    if(zero < -50){
        zero = 0;
        Model714Settings::GetInstance()->SetHighNOZero(zero);
    }

    if(pidGain < -50){
        pidGain = 30;
        Model714Settings::GetInstance()->SetHighNOPIDGain(pidGain);
    }
}

HighNOCalForm::~HighNOCalForm()
{
    delete ui;
}

void HighNOCalForm::SetupUI(){
    ui->decreaseButton->setStyleSheet("background-color:lightgray;");
    ui->increaseButton->setStyleSheet("background-color:lightgray;");
    ui->backButton->setStyleSheet("background-color:lightgray;");
    this->setStyleSheet("QPushButton:checked { background-color: black }");
    ui->NOZeroCB->setChecked(false);
    ui->increaseButton->setAutoRepeat(true);
    ui->decreaseButton->setAutoRepeat(true);
    ui->backButton->setStyleSheet("background-color:lightgray;");
    ui->decreaseButton->setStyleSheet("background-color:lightgray;");
    ui->increaseButton->setStyleSheet("background-color:lightgray;");
    ui->saveButton->setStyleSheet("background-color:lightgray;");

    ui->NOZeroLCD->display(QString::number(zero));
    ui->NOSlopeCB->setChecked(true);
}

void HighNOCalForm::on_NOSlopeCB_clicked(){
    ui->NOSlopeCB->setChecked(true);
    ui->NOZeroCB->setChecked(false);
    ui->pidGainNOCB->setChecked(false);
}

void HighNOCalForm::on_NOZeroCB_clicked(){
    ui->NOSlopeCB->setChecked(false);
    ui->NOZeroCB->setChecked(true);
    ui->pidGainNOCB->setChecked(false);
}

void HighNOCalForm::on_pidGainNOCB_clicked(){
    ui->NOSlopeCB->setChecked(false);
    ui->NOZeroCB->setChecked(false);
    ui->pidGainNOCB->setChecked(true);
}

void HighNOCalForm::on_pidGainInfo_clicked(){
    QMessageBox msgBox;
    QString messageBoxString("PID gain Factor: Increase to get to concentration faster.  Decrease if intensity is not stable.  Default value is 0.030.");
    msgBox.setText(messageBoxString);
    msgBox.exec();
}

void HighNOCalForm::on_increaseButton_clicked(){
    double displayValue = 0;

    if(ui->NOSlopeCB->isChecked()){
        slope++;
        if(slope > 200) slope = 20;

        displayValue = slope;
        displayValue /= 100;
        ui->NOSlopeLCD->display(QString::number(displayValue, 'f', 2));
    }else if(ui->NOZeroCB->isChecked()){
        zero++;
        if(zero > 50) zero = -50;

        displayValue = zero;
        ui->NOZeroLCD->display(displayValue);
    }else if(ui->pidGainNOCB->isChecked()){
        pidGain++;
        if(pidGain > 99)
            pidGain = 1;
        displayValue = pidGain;
        displayValue /= 1000;
        ui->pidGainNOLCD->display(QString::number(displayValue, 'f', 3));
    }
}

void HighNOCalForm::on_decreaseButton_clicked(){
    double displayValue = 0;

    if(ui->NOSlopeCB->isChecked()){
        slope--;
        if(slope < 20) slope = 200;

        displayValue = slope;
        displayValue /= 100;
        ui->NOSlopeLCD->display(QString::number(displayValue, 'f', 2));
    }else if(ui->NOZeroCB->isChecked()){
        zero--;
        if(zero < -50) zero = 50;

        displayValue = zero;
        ui->NOZeroLCD->display(displayValue);
    }else if(ui->pidGainNOCB->isChecked()){
        pidGain--;
        if(pidGain < 1)
            pidGain = 99;
        displayValue = pidGain;
        displayValue /= 1000;
        ui->pidGainNOLCD->display(QString::number(displayValue, 'f', 3));
    }
}

void HighNOCalForm::on_saveButton_clicked(){
    double temp_value;
    QString messageBoxString;

    temp_value = slope;
    temp_value /= 100;
    Model714Settings::GetInstance()->SetHighNOSlope(slope);
    SerialHandler::GetInstance()->WriteCommand("NOS," + QString::number(temp_value));

    Model714Settings::GetInstance()->SetHighNOZero(zero);
    SerialHandler::GetInstance()->WriteCommand("NOZ," + QString::number(zero));

    Model714Settings::GetInstance()->SetHighNOPIDGain(pidGain);
    SerialHandler::GetInstance()->WriteCommand("NGA," + QString::number(pidGain));

    ui->saveButton->setEnabled(false);
    ui->backButton->setEnabled(false);

    QTimer::singleShot(10000, this, SLOT(OnDisableButtonsTimerEnd()));

    QMessageBox msgBox;
    msgBox.setText("Writing new settings");
    msgBox.exec();
}

void HighNOCalForm::OnDisableButtonsTimerEnd(){
    ui->saveButton->setEnabled(true);
    ui->backButton->setEnabled(true);
}

void HighNOCalForm::on_backButton_clicked(){
    close();
}

void HighNOCalForm::showEvent(QShowEvent *event){
    double displayValue = 0;

    QWidget::showEvent(event);

    displayValue = slope;
    displayValue /=100;
    ui->NOSlopeLCD->display(QString::number(displayValue, 'f', 2));

    displayValue = pidGain;
    displayValue /=1000;
    ui->pidGainNOLCD->display(QString::number(displayValue, 'f', 3));

    ui->NOZeroLCD->display(QString::number(zero));
}
