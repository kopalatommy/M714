#ifndef OUTPUTNOFORM_H
#define OUTPUTNOFORM_H

#include <QWidget>
#include <QDebug>
#include <QTimer>
#include <QtMath>

#include "model714data.h"
#include "serialhandler.h"

namespace Ui {
class OutputNOForm;
}

class OutputNOForm : public QWidget
{
    Q_OBJECT

public:
    explicit OutputNOForm(QWidget *parent = nullptr);
    ~OutputNOForm();

    void SetNOSetting(double val);

public slots:
    void UpdateStatusLabels();

private slots:
    void on_DiagLeft_clicked();
    void on_DiagRight_clicked();

    void on_quitButton_clicked();

    void OnDisableButtonTimeout();

    void OnWaitTimeout();

    void ReceivedAck();

private:
    Ui::OutputNOForm *ui;

    double _NOSetting = 0;

    int _diagIndex = 0;

    int timeoutMSec = 10000;

    QPixmap fYelPixmap;
    QPixmap tYelPixmap;
    QPixmap iYelPixmap;
    QPixmap fRedPixmap;
    QPixmap tRedPixmap;
    QPixmap iRedPixmap;
    QPixmap fGreenPixmap;
    QPixmap tGreenPixmap;
    QPixmap iGreenPixmap;

    void SetUpUI();

    void UpdateDiagLabel();
    void UpdateStatusCircles();
};

#endif // OUTPUTNOFORM_H
