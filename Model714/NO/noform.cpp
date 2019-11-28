#include "noform.h"
#include "ui_noform.h"

NOForm::NOForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NOForm)
{
    ui->setupUi(this);
    SetupUI();

    noSetting = Model714Settings::GetInstance()->GetNOOutput();
}

void NOForm::SetupUI(){
    QPixmap pix(":/Resources/hourGlassPleaseWait.png");
    ui->pleaseWaitLabel->setPixmap(pix);
    ui->pleaseWaitLabel->hide();
    ui->titleBackground->setStyleSheet("background-color:yellow");
    //ui->widgetBottomBackground->setStyleSheet("background-color:white");
    ui->nitricOxideConcentration->display(static_cast<double>(noSetting));
    ui->increaseNOButton->setAutoRepeat(true);
    ui->decreaseNOButton->setAutoRepeat(true);
    ui->increaseNOButton->setStyleSheet("background-color:lightgray;");
    ui->decreaseNOButton->setStyleSheet("background-color:lightgray;");
    ui->cancelButton->setStyleSheet("background-color:lightgray;");
    ui->startButton->setStyleSheet("background-color:lightgray;");
}

NOForm::~NOForm()
{
    delete ui;
}

void NOForm::on_increaseNOButton_clicked(){
    if(noSetting <= 95) noSetting += 5;
    else noSetting += 10;

    if(noSetting > NO_MAXIMUM_VALUE || noSetting < 0) noSetting = 0;

    ui->nitricOxideConcentration->display(static_cast<double>(noSetting));
}

void NOForm::on_decreaseNOButton_clicked(){
    if(noSetting <= 100) noSetting -= 5;
    else noSetting -= 10;

    if(noSetting < 0) noSetting = NO_MAXIMUM_VALUE;

    ui->nitricOxideConcentration->display(static_cast<double>(noSetting));
}

void NOForm::on_startButton_clicked(){
    //outputNO.SetNOSetting(static_cast<double>(noSetting));
    Model714Settings::GetInstance()->SetNOOutput(noSetting);
    outputNO.StartSequence(noSetting);
    outputNO.show();
}

void NOForm::on_cancelButton_clicked(){
    close();
}

void NOForm::OutputTimeout(){
    QMessageBox msg;
    msg.setText("ERROR: Timeout");
    msg.setStandardButtons(QMessageBox::StandardButton::Ok);
    msg.exec();
}

void NOForm::OutputError(){
    QMessageBox msg;
    msg.setText("ERROR: Received error");
    msg.setStandardButtons(QMessageBox::StandardButton::Ok);
    msg.exec();
}

void NOForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
    ui->nitricOxideConcentration->display(static_cast<double>(noSetting));
}
