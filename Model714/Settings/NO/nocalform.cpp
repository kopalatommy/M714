#include "nocalform.h"
#include "ui_nocalform.h"

NOCalForm::NOCalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NOCalForm)
{
    ui->setupUi(this);
}

NOCalForm::~NOCalForm()
{
    delete ui;
}

void NOCalForm::on_lowButton_clicked(){

}

void NOCalForm::on_highButton_clicked(){
    highNOCal.show();
}

void NOCalForm::on_backButton_clicked(){

}
