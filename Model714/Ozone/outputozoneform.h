#ifndef OUTPUTOZONEFORM_H
#define OUTPUTOZONEFORM_H

#include <QWidget>
#include <QDebug>
#include <QTimer>
#include <QtMath>

#include "model714data.h"
#include "serialhandler.h"

namespace Ui {
class OutputOzoneForm;
}

class OutputOzoneForm : public QWidget
{
    Q_OBJECT

public:
    explicit OutputOzoneForm(QWidget *parent = nullptr);
    ~OutputOzoneForm();

    void StartSequence(float ozoneSetting);

public slots:

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
    Ui::OutputOzoneForm *ui;

    int dataLabelIndex = 0;

    QPixmap fYelPixmap = QPixmap(":/pictures/pics/fYellow.png");
    QPixmap tYelPixmap = QPixmap(":/pictures/pics/tYellow.png");
    QPixmap iYelPixmap = QPixmap(":/pictures/pics/iYellow.png");
    QPixmap fRedPixmap = QPixmap(":/pictures/pics/fRed.png");
    QPixmap tRedPixmap = QPixmap(":/pictures/pics/tRed.png");
    QPixmap iRedPixmap = QPixmap(":/pictures/pics/iRed.png");
    QPixmap fGreenPixmap = QPixmap(":/pictures/pics/fGreen.png");
    QPixmap tGreenPixmap = QPixmap(":/pictures/pics/tGreen.png");
    QPixmap iGreenPixmap = QPixmap(":/pictures/pics/iGreen.png");

    int timeoutMSec = 10000;

    int diagnosticLabelIndex = 0;

    void SetUpUI();

    void UpdateDataLabel();
    void UpdateStatusCircles();
};

#endif // OUTPUTOZONEFORM_H
