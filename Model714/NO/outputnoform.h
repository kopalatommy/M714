#ifndef OUTPUTNOFORM_H
#define OUTPUTNOFORM_H

#include <QWidget>
#include <QDebug>
#include <QTimer>
#include <QtMath>

#include "model714data.h"
#include "model714settings.h"
#include "serialhandler.h"

namespace Ui {
class OutputNOForm;
}

class OutputNOForm : public QWidget
{
    Q_OBJECT

public:
    explicit OutputNOForm(QWidget * parent = nullptr);
    ~OutputNOForm();

    //void SetNOSetting(double val);
    void StartSequence(float val);

signals:
    void TimedOut();
    void ReceivedError();
    void CloseAll();

private slots:
    void CloseWaitLabel();
    void ReceivedAck();
    void UpdateStatusValues();
    void OnDisableButtonsTimeout();

    void on_quitButton_clicked();

private:
    Ui::OutputNOForm *ui;

    double _NOSetting = 0;

    int _diagIndex = 0;

    int timeoutMSec = 10000;

    QPixmap fYelPixmap = QPixmap(":/pictures/pics/fYellow.png");
    QPixmap tYelPixmap = QPixmap(":/pictures/pics/tYellow.png");
    QPixmap iYelPixmap = QPixmap(":/pictures/pics/iYellow.png");
    QPixmap fRedPixmap = QPixmap(":/pictures/pics/fRed.png");
    QPixmap tRedPixmap = QPixmap(":/pictures/pics/tRed.png");
    QPixmap iRedPixmap = QPixmap(":/pictures/pics/iRed.png");
    QPixmap fGreenPixmap = QPixmap(":/pictures/pics/fGreen.png");
    QPixmap tGreenPixmap = QPixmap(":/pictures/pics/tGreen.png");
    QPixmap iGreenPixmap = QPixmap(":/pictures/pics/iGreen.png");

    void SetUpUI();

    void UpdateDiagLabel();
    void UpdateStatusCircles();
};

#endif // OUTPUTNOFORM_H
