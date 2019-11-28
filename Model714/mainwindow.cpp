#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    SetupUI();

    connect(SerialHandler::GetInstance(), &SerialHandler::ParsedData, this, &MainWindow::UpdateUI);
}

void MainWindow::SetupUI(){
    /*QPixmap pix(":/pictures/pics/hourGlassPleaseWait.png");
    ui->pleaseWaitLabel->setPixmap(pix);
    ui->pleaseWaitLabel->hide();
    ui->widgetBackground->setStyleSheet("background-color:white;");
    ui->ozoneButton->setStyleSheet("background-color:cyan;");

    ui->nitricOxideButton->setStyleSheet("background-color:yellow;");
    ui->no2Button->setStyleSheet("background-color:lightgreen;");
    ui->settingsButton->setStyleSheet("background-color:lightgray;");
    ui->sequenceButton->setStyleSheet("background-color:lightgray;");
    ui->scrollLeftButton->setStyleSheet("border:none;");
    ui->scrollRightButton->setStyleSheet("border:none;");
    ui->questionButton->setStyleSheet("border:none;");*/
    //messageBoxString = "This box will display the limits of each diagnostic data.";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateUI(){
    UpdateDataLabel();
    UpdateStatusLabel();
}

void MainWindow::UpdateStatusLabel(){
    float ozoneTemp = Model714Data::GetInstance()->GetO3Temperature();
    float noTemp = Model714Data::GetInstance()->GetNOTemperature();

    if(ozoneTemp < TEMPERATURE_LOW_LIMIT || noTemp < TEMPERATURE_LOW_LIMIT){
        ui->Status_label->setText("Warming Up");
    }else{
        ui->Status_label->setText("Ready");
    }
}

void MainWindow::on_Ozone_button_clicked(){
    ozoneForm.show();
}

void MainWindow::on_NO_button_clicked(){
    noForm.show();
}

void MainWindow::on_NO2_button_clicked(){
    no2form.show();
}

void MainWindow::on_Diag_right_clicked(){
    _dataLabelIndex++;
    if(_dataLabelIndex > 16){
        _dataLabelIndex = 0;
    }
    UpdateDataLabel();
}

void MainWindow::on_Diag_left_clicked(){
    _dataLabelIndex--;
    if(_dataLabelIndex < 0){
        _dataLabelIndex = 16;
    }
    UpdateDataLabel();
}

void MainWindow::UpdateDataLabel(){
    ui->Diag_label->setText(Model714Data::GetInstance()->GetDiagnosticString(_dataLabelIndex));
}

void MainWindow::on_Help_button_clicked(){
    QMessageBox msg;
    switch (_dataLabelIndex) {
    case 0: msg.setText("Voltage is proportional to the target ozone value."); break;
    case 1: msg.setText("Voltage is proportional to the target nitric oxide value."); break;
    case 2: msg.setText("Ozone flow should be 50 cc/min +/- 5 cc/min."); break;
    case 3: msg.setText("N2O flow should be 0 cc/min in this mode but 40 cc/min +/- 5 when outputting NO or NO2."); break;
    case 4: msg.setText("Dilution flow should be 2.0 L/min to 3.5 L/min."); break;
    case 5: msg.setText("Ozone photolysis chamber temperature should be 40 C +/- 5 C."); break;
    case 6: msg.setText("NO photolysis chamber temperature should be 40 C +/- 5 C."); break;
    case 7: msg.setText("Ozone photolysis lamp duty cycle.  This will adjust according to the required light intensity."); break;
    case 8: msg.setText("Nitric Oxide photolysis lamp duty cycle.  This will adjust according to the required light intensity."); break;
    case 9: msg.setText("Ozone photolysis chamber heater duty cycle.  The chamber is heated to 40 C so that the lamp will output consistent and predictable light."); break;
    case 10: msg.setText("Nitric Oxide photolysis chamber heater duty cycle.  The chamber is heated to 40 C so that the lamp will output consistent and predictable light."); break;
    case 11: msg.setText("Ozone flow valve duty cycle.  The valve is pulse width modulated proportional to the flow rate required."); break;
    case 12: msg.setText("N2O flow valve duty cycle.  The valve is pulse width modulated proportional to the flow rate required."); break;
    case 13: msg.setText("Air Temperature.  This is the temperature of the air from the pump."); break;
    case 14: msg.setText("Relative Humidity of the O3 air from the pump should be less than 5%."); break;
    case 15: msg.setText("System Pressure.  This is the pressure of the air from the pump."); break;
    case 16: msg.setText("Date and Time - User setting."); break;
    }
    msg.setStandardButtons(QMessageBox::Ok);
    msg.exec();
}

void MainWindow::on_Settings_button_clicked(){
    settingsForm.show();
}
