#ifndef OUTPUTNO2FORM_H
#define OUTPUTNO2FORM_H

#include <QWidget>
#include <QDebug>
#include <QTimer>

#include "model714data.h"
#include "serialhandler.h"

namespace Ui {
class OutputNO2Form;
}

class OutputNO2Form : public QWidget
{
    Q_OBJECT

public:
    explicit OutputNO2Form(QWidget *parent = nullptr);
    ~OutputNO2Form();

    void StartSequence(double noSetting, double ozoneSetting, double no2Setting);

public slots:

signals:
    void TimedOut();
    void ReceivedError();
    void CloseAll();

private slots:
    void OnDisableButtonsTimerEnd();

    void on_quitButton_clicked();

    void on_scrollLeftButton_clicked();
    void on_scrollRightButton_clicked();

private:
    Ui::OutputNO2Form *ui;

    QPixmap fYelPixmap = QPixmap(":/pictures/pics/fYellow.png");
    QPixmap tYelPixmap = QPixmap(":/pictures/pics/tYellow.png");
    QPixmap iYelPixmap = QPixmap(":/pictures/pics/iYellow.png");
    QPixmap fRedPixmap = QPixmap(":/pictures/pics/fRed.png");
    QPixmap tRedPixmap = QPixmap(":/pictures/pics/tRed.png");
    QPixmap iRedPixmap = QPixmap(":/pictures/pics/iRed.png");
    QPixmap fGreenPixmap = QPixmap(":/pictures/pics/fGreen.png");
    QPixmap tGreenPixmap = QPixmap(":/pictures/pics/tGreen.png");
    QPixmap iGreenPixmap = QPixmap(":/pictures/pics/iGreen.png");

    int diagnosticIndex = 0;

    void SetupUI();
    void UpdateDiagnosticLabel();

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // OUTPUTNO2FORM_H
