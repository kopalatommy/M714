#include "outputozoneform.h"
#include "ui_outputozoneform.h"

OutputOzoneForm::OutputOzoneForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OutputOzoneForm)
{
    ui->setupUi(this);
    SetUpUI();
}

void OutputOzoneForm::SetUpUI(){
    ui->BlockingLabel->setHidden(true);

    ui->widgetBackground->setStyleSheet("background-color:cyan;");
    ui->quitButton->setStyleSheet("background-color:lightgray;");

    fYelPixmap = QPixmap(":/pictures/pics/fYellow.png");
    fRedPixmap = QPixmap(":/pictures/pics/fRed.png");
    fGreenPixmap = QPixmap(":/pictures/pics/fGreen.png");
    ui->FlowLabel->setPixmap(fRedPixmap);

    tYelPixmap = QPixmap(":/pictures/pics/tYellow.png");
    tRedPixmap = QPixmap(":/pictures/pics/tRed.png");
    tGreenPixmap = QPixmap(":/pictures/pics/tGreen.png");
    ui->TempIconLabel->setPixmap(tRedPixmap);

    iYelPixmap = QPixmap(":/pictures/pics/iYellow.png");
    iRedPixmap = QPixmap(":/pictures/pics/iRed.png");
    iGreenPixmap = QPixmap(":/pictures/pics/iGreen.png");
    ui->LightIconLabel->setPixmap(iRedPixmap);

    ui->diagLeft->setStyleSheet("border:none;");
    ui->diagRight->setStyleSheet("border:none;");
    //connect(disable_buttons_timer, &QTimer::timeout, this, &OutputOzone::disable_buttons_timer_end);
    ui->quitButton->setEnabled(false);

    //QTimer::singleShot(6500, this, &OutputOzoneForm::OnDisableButtonsTimeout);
    QTimer::singleShot(6500, this, SLOT(OnDisableButtonsTimeout()));
}

OutputOzoneForm::~OutputOzoneForm(){
    delete ui;
}

void OutputOzoneForm::StartSequence(float ozoneSetting){
    ui->BlockingLabel->show();
    //SerialHandler::GetInstance()->WriteSync("OZO," + QString::number(static_cast<double>(ozoneSetting)));
    SerialHandler::GetInstance()->WriteFullMessage("OZO," + QString::number(static_cast<double>(ozoneSetting)));
    connect(SerialHandler::GetInstance(), &SerialHandler::ReceivedAck, this, &OutputOzoneForm::ReceivedAck);

    //QTimer::singleShot(timeoutMSec, this, &OutputOzoneForm::CloseWaitLabel);
    QTimer::singleShot(timeoutMSec, this, SLOT(CloseWaitLabel()));
}

void OutputOzoneForm::CloseWaitLabel(){
    if(!ui->BlockingLabel->isHidden()){
        qDebug() << "Failed to close blocking label. Current timeout is " << timeoutMSec << " msecs";
        ui->BlockingLabel->hide();
        //close();
        emit TimedOut();
    }
}

void OutputOzoneForm::ReceivedAck(){
    ui->BlockingLabel->hide();
    disconnect(SerialHandler::GetInstance(), &SerialHandler::ReceivedAck, this, &OutputOzoneForm::ReceivedAck);
}

void OutputOzoneForm::UpdateStatusValues(){
    UpdateDataLabel();
    UpdateStatusCircles();
}

void OutputOzoneForm::UpdateDataLabel(){
    ui->DiagnosticLabel->setText(Model714Data::GetInstance()->GetDiagnosticString(diagnosticLabelIndex));
}

void OutputOzoneForm::UpdateStatusCircles(){
    Model714Data * data = Model714Data::GetInstance();
    float temperature = data->GetO3Temperature();
    float flowRate = data->GetO3Flow();
    float diffIntensity = data->GetO3Ratio();
    int targetIntensity = static_cast<int>(diffIntensity + data->GetO3Intensity());

    //update light intensity circle for NO generation
    if(qFabs(static_cast<double>(diffIntensity)) > RED_TARGET_THRESHOLD * targetIntensity){
        ui->LightIconLabel->setPixmap(iRedPixmap);
    }else if(qFabs(static_cast<double>(diffIntensity)) > YELLOW_TARGET_THRESHOLD){
        ui->LightIconLabel->setPixmap(iYelPixmap);
    }else{
        ui->LightIconLabel->setPixmap(iGreenPixmap);
    }

    //update temperature circle for no temp
    if(temperature < TEMPERATURE_LOW_LIMIT || temperature > TEMPERATURE_HIGH_LIMIT){
        ui->TempIconLabel->setPixmap(tRedPixmap);
    }else if(temperature < (TEMPERATURE_LOW_LIMIT + 2) || temperature > (TEMPERATURE_HIGH_LIMIT - 2)){
        ui->TempIconLabel->setPixmap(tYelPixmap);
    }else{
        ui->TempIconLabel->setPixmap(tGreenPixmap);
    }

    //update flow circle for O3 flow
    if(flowRate < O3_FLOW_LOW_LIMIT || flowRate > O3_FLOW_HIGH_LIMIT){
        ui->FlowLabel->setPixmap(fRedPixmap);
    }else if(flowRate < (O3_FLOW_LOW_LIMIT+2) || flowRate > (O3_FLOW_HIGH_LIMIT - 2)){
        ui->FlowLabel->setPixmap(fYelPixmap);
    }else{
        ui->FlowLabel->setPixmap(fGreenPixmap);
    }
}

void OutputOzoneForm::OnDisableButtonsTimeout(){
    ui->quitButton->setEnabled(true);
}

void OutputOzoneForm::on_quitButton_clicked(){
    //Send command to shut off ozone
    SerialHandler::GetInstance()->WriteSync("IDL,0000");

    qDebug() << "Sending ozone shutoff";

    close();
    emit CloseAll();
}
