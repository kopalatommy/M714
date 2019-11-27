#include "outputnoform.h"
#include "ui_outputnoform.h"

OutputNOForm::OutputNOForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OutputNOForm)
{
    ui->setupUi(this);
    SetUpUI();
}

OutputNOForm::~OutputNOForm()
{
    delete ui;
}

void OutputNOForm::SetUpUI(){
    ui->TitleBackground->setStyleSheet("background-color:yellow;");
    ui->quitButton->setStyleSheet("background-color:lightgray;");

    fYelPixmap = QPixmap(":/pictures/pics/fYellow.png");
    fRedPixmap = QPixmap(":/pictures/pics/fRed.png");
    fGreenPixmap = QPixmap(":/pictures/pics/fGreen.png");
    ui->flowIconLabel->setPixmap(fRedPixmap);

    tYelPixmap = QPixmap(":/pictures/pics/tYellow.png");
    tRedPixmap = QPixmap(":/pictures/pics/tRed.png");
    tGreenPixmap = QPixmap(":/pictures/pics/tGreen.png");
    ui->tempIconLabel->setPixmap(tRedPixmap);

    iYelPixmap = QPixmap(":/pictures/pics/iYellow.png");
    iRedPixmap = QPixmap(":/pictures/pics/iRed.png");
    iGreenPixmap = QPixmap(":/pictures/pics/iGreen.png");
    ui->lightIconLabel->setPixmap(iRedPixmap);

    ui->DiagLeft->setStyleSheet("border:none;");
    ui->DiagRight->setStyleSheet("border:none;");
    ui->quitButton->setEnabled(false);

    //QTimer::singleShot(6500, this, &OutputNOForm::OnDisableButtonTimeout);
    QTimer::singleShot(6500, this, SLOT(OnDisableButtonsTimeout()));
}

void OutputNOForm::UpdateStatusCircles(){
    Model714Data * data = Model714Data::GetInstance();
    float temperature = data->GetNOTemperature();
    float flowRate = data->GetNO2Flow();
    float diff_intensity = data->GetNORatio();
    int target_intensity = static_cast<int>(diff_intensity + data->GetNOIntensity());

    if(qFabs(static_cast<double>(diff_intensity)) > RED_TARGET_THRESHOLD * target_intensity){
        ui->lightIconLabel->setPixmap(iRedPixmap);
    }else if(qFabs(static_cast<double>(diff_intensity)) > YELLOW_TARGET_THRESHOLD * target_intensity){
        ui->lightIconLabel->setPixmap(iYelPixmap);
    }else{
        ui->lightIconLabel->setPixmap(iGreenPixmap);
    }

    if(temperature < TEMPERATURE_LOW_LIMIT || temperature > TEMPERATURE_HIGH_LIMIT){
        ui->tempIconLabel->setPixmap(tRedPixmap);
    }else if(temperature < (TEMPERATURE_LOW_LIMIT+2) || temperature > (TEMPERATURE_HIGH_LIMIT-2)){
        ui->tempIconLabel->setPixmap(tYelPixmap);
    }else{
        ui->tempIconLabel->setPixmap(tGreenPixmap);
    }

    if(flowRate < N2O_FLOW_LOW_LIMIT || flowRate > N2O_FLOW_HIGH_LIMIT){
        ui->flowIconLabel->setPixmap(fRedPixmap);
    }else if(flowRate < (N2O_FLOW_LOW_LIMIT+2) || flowRate > (N2O_FLOW_HIGH_LIMIT - 2)){
        ui->flowIconLabel->setPixmap(fYelPixmap);
    }else{
        ui->flowIconLabel->setPixmap(fGreenPixmap);
    }
}

void OutputNOForm::UpdateDiagLabel(){
    ui->diagLabel->setText(Model714Data::GetInstance()->GetDiagnosticString(_diagIndex));
}

void OutputNOForm::UpdateStatusValues(){
    UpdateStatusCircles();
    UpdateDiagLabel();
}

void OutputNOForm::StartSequence(float val){
    ui->blockingLabel->show();
    SerialHandler::GetInstance()->WriteCommand("NIO," + QString::number(static_cast<double>(val)));
    connect(SerialHandler::GetInstance(), &SerialHandler::ReceivedAck, this, &OutputNOForm::ReceivedAck);

    QTimer::singleShot(timeoutMSec, this, SLOT(CloseWaitLabel()));
}

void OutputNOForm::ReceivedAck(){
    ui->blockingLabel->hide();
    disconnect(SerialHandler::GetInstance(), &SerialHandler::ReceivedAck, this, &OutputNOForm::ReceivedAck);
}

void OutputNOForm::CloseWaitLabel(){
    if(!ui->blockingLabel->isHidden()){
        disconnect(SerialHandler::GetInstance(), &SerialHandler::ReceivedAck, this, &OutputNOForm::ReceivedAck);
        SerialHandler::GetInstance()->WriteCommand("IDL,0000");
        qDebug() << "Failed to close blocking label. Current timeout is " << timeoutMSec << " msecs";
        ui->blockingLabel->hide();
        close();
        emit TimedOut();
    }
}

void OutputNOForm::OnDisableButtonsTimeout(){
    ui->quitButton->setEnabled(true);

}

void OutputNOForm::on_quitButton_clicked(){
    SerialHandler::GetInstance()->WriteCommand("IDL,0000");
    emit CloseAll();
    close();
}
