#include "ozoneform.h"
#include "ui_ozoneform.h"

OzoneForm::OzoneForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OzoneForm)
{
    ui->setupUi(this);

    connect(&outputOzone, &OutputOzoneForm::TimedOut, this, &OzoneForm::OutputTimeout);
    connect(&outputOzone, &OutputOzoneForm::ReceivedError, this, &OzoneForm::OutputError);
    connect(&outputOzone, &OutputOzoneForm::CloseAll, this, &QWidget::close);

    ozoneSetting = Model714Settings::GetInstance()->GetOzoneOutput();
}

OzoneForm::~OzoneForm()
{
    delete ui;
}

void OzoneForm::on_increaseO3Button_clicked(){
    if(ozoneSetting <= 95) ozoneSetting += 5;
    else ozoneSetting += 10;

    if(ozoneSetting > OZONE_MAXIMUM_VALUE || ozoneSetting < 0) ozoneSetting = 0;

    ui->ozoneConcentration->display(static_cast<double>(ozoneSetting));

    //qDebug() << "Add function to save ozone setting";
}

void OzoneForm::on_decreaseO3Button_clicked(){
    if(ozoneSetting <= 100) ozoneSetting -= 5;
    else ozoneSetting -= 10;

    if(ozoneSetting < 0) ozoneSetting = OZONE_MAXIMUM_VALUE;

    ui->ozoneConcentration->display(static_cast<double>(ozoneSetting));

    //qDebug() << "Add function to save ozone setting";
}

void OzoneForm::on_startButton_clicked(){
    Model714Settings::GetInstance()->SetOzoneOutput(ozoneSetting);
    outputOzone.show();
    outputOzone.StartSequence(ozoneSetting);
}

void OzoneForm::on_cancelButton_clicked(){
    close();
}

void OzoneForm::OutputTimeout(){
    QMessageBox msg;
    msg.setText("ERROR: Timeout");
    msg.setStandardButtons(QMessageBox::StandardButton::Ok);
    msg.exec();
}

void OzoneForm::OutputError(){
    QMessageBox msg;
    msg.setText("ERROR: Received error");
    msg.setStandardButtons(QMessageBox::StandardButton::Ok);
    msg.exec();
}

void OzoneForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
    ui->ozoneConcentration->display(static_cast<double>(ozoneSetting));
}
