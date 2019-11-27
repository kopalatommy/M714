#include "nocalfactorsform.h"
#include "ui_nocalfactorsform.h"

NOCalFactorsForm::NOCalFactorsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NOCalFactorsForm)
{
    ui->setupUi(this);

    ui->highButton->setStyleSheet("background-color:lightgray;");
    ui->lowButton->setStyleSheet("background-color:lightgray;");
    ui->backButton->setStyleSheet("background-color:lightgray;");
}

NOCalFactorsForm::~NOCalFactorsForm()
{
    delete ui;
}

void NOCalFactorsForm::on_lowButton_clicked(){

}

void NOCalFactorsForm::on_highButton_clicked(){

}

void NOCalFactorsForm::on_backButton_clicked(){

}
