#ifndef NO2FORM_H
#define NO2FORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "model714data.h"
#include "model714settings.h"
#include "outputno2form.h"

#define NO_MAXIMUM_VALUE_NO2 1000
#define OZONE_MAXIMUM_VALUE_NO2 1000

namespace Ui {
class NO2Form;
}

class NO2Form : public QWidget
{
    Q_OBJECT

public:
    explicit NO2Form(QWidget *parent = nullptr);
    ~NO2Form();

public slots:

signals:

private slots:
    void on_increaseNOButton_clicked();
    void on_decreaseNOButton_clicked();

    void on_increaseOzoneButton_clicked();
    void on_decreaseOzoneButton_clicked();

    void on_startButton_clicked();
    void on_cancelButton_clicked();

    void OutputTimeout();
    void OutputError();
    void CloseAll();

private:
    Ui::NO2Form *ui;

    double ozoneSetting = 0;
    double noSetting = 0;
    double no2Setting = 0;

    OutputNO2Form outputNO2;

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
    void CalculateTitration();
};

#endif // NO2FORM_H
