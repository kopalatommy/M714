#include "outputno2form.h"
#include "ui_outputno2form.h"

OutputNO2Form::OutputNO2Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OutputNO2Form)
{
    ui->setupUi(this);
    SetupUI();
}

OutputNO2Form::~OutputNO2Form()
{
    delete ui;
}

void OutputNO2Form::SetupUI(){
    ui->TitleBackground->setStyleSheet("background-color:lightgreen;");
    ui->quitButton->setStyleSheet("background-color:lightgray;");
    ui->scrollLeftButton->setStyleSheet("border:none;");
    ui->scrollRightButton->setStyleSheet("border:none;");

    ui->quitButton->setEnabled(false);
    QTimer::singleShot(6500, this, SLOT(OnDisableButtonsTimerEnd()));
}

void OutputNO2Form::OnDisableButtonsTimerEnd(){
    ui->quitButton->setEnabled(true);
}

void OutputNO2Form::OnWaitLabelTimeoutEnd(){
    if(!ui->blockingLabel->isHidden()){
        SerialHandler::GetInstance()->WriteMessage("IDL,0000");
        qDebug() << "Failed to close blocking label. Current timeout is " << timeoutMSec << " msecs";
        ui->blockingLabel->hide();
        close();
        emit TimedOut();
    }
}

void OutputNO2Form::StartSequence(double noSetting, double ozoneSetting, double no2Setting){
    int noValue = static_cast<int>(noSetting) - static_cast<int>(ozoneSetting);

    ui->NOValueLabel->setText(QString::number(noValue));
    ui->NO2ValueLabel->setText(QString::number(no2Setting));

    ui->blockingLabel->setHidden(false);

    QTimer::singleShot(timeoutMSec, this, SLOT(OnWaitLabelTimeoutEnd()));
}

void OutputNO2Form::on_quitButton_clicked(){
    emit CloseAll();
    SerialHandler::GetInstance()->WriteMessage("IDL,0000");
    close();
}

void OutputNO2Form::on_scrollLeftButton_clicked(){
    diagnosticIndex--;
    if(diagnosticIndex < 0) diagnosticIndex = 16;

    UpdateDiagnosticLabel();
}

void OutputNO2Form::on_scrollRightButton_clicked(){
    diagnosticIndex++;
    if(diagnosticIndex > 16) diagnosticIndex = 0;

    UpdateDiagnosticLabel();
}

void OutputNO2Form::UpdateDiagnosticLabel(){
   ui->diagnosticData->setText(Model714Data::GetInstance()->GetDiagnosticString(diagnosticIndex));
}

void OutputNO2Form::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
}

void OutputNO2Form::closeEvent(QCloseEvent *event){
    QWidget::closeEvent(event);
}
