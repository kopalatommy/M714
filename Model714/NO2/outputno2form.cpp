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
        //Even though this is only hit if the device fails to receive an ack, it is best practice to send shut off
        SerialHandler::GetInstance()->WriteCommand("IDL,0000");

        //Close the blocking label for next open
        ui->blockingLabel->hide();
        //Close view
        close();
        //Inform parent page that a timeout error occured
        emit TimedOut();
        //Disconnect because the Received ack signal is used by other forms
        disconnect(SerialHandler::GetInstance(), &SerialHandler::ReceivedAck, this, &OutputNO2Form::OnAckReceived);
    }
}

void OutputNO2Form::StartSequence(double noSetting, double ozoneSetting, double no2Setting){
    int noValue = static_cast<int>(noSetting) - static_cast<int>(ozoneSetting);

    QString noString = QString::number(noSetting);
    int toAdd = 4 - noString.count();
    for(int i = 0; i < toAdd; i++) noString.insert(0, '0');
    QString ozoneString = QString::number(ozoneSetting);
    toAdd = 4 - ozoneString.count();
    for(int i = 0; i < toAdd; i++) ozoneString.insert(0, '0');

    QString command("NO2,");
    command.append(noString).append(',').append(ozoneString);

    SerialHandler::GetInstance()->WriteCommand(command);

    ui->NOValueLabel->setText(QString::number(noValue));
    ui->NO2ValueLabel->setText(QString::number(no2Setting));
    ui->blockingLabel->setHidden(false);

    QTimer::singleShot(timeoutMSec, this, SLOT(OnWaitLabelTimeoutEnd()));

    connect(SerialHandler::GetInstance(), &SerialHandler::ReceivedAck, this, &OutputNO2Form::OnAckReceived);
}

void OutputNO2Form::on_quitButton_clicked(){
    emit CloseAll();
    SerialHandler::GetInstance()->WriteCommand("IDL,0000");
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

void OutputNO2Form::OnAckReceived(){
    ui->blockingLabel->setHidden(true);
    disconnect(SerialHandler::GetInstance(), &SerialHandler::ReceivedAck, this, &OutputNO2Form::OnAckReceived);
}
