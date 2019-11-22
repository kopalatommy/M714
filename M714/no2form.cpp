#include "no2form.h"
#include "ui_no2form.h"

NO2Form::NO2Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NO2Form)
{
    ui->setupUi(this);
}

NO2Form::~NO2Form()
{
    delete ui;
}
