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

private slots:
    void CloseWaitLabel();
    void ReceivedAck();
    void UpdateStatusValues();
    void OnDisableButtonsTimeout();

    void on_quitButton_clicked();

private:
    Ui::OutputOzoneForm *ui;

    int dataLabelIndex = 0;

    QPixmap fYelPixmap;
    QPixmap tYelPixmap;
    QPixmap iYelPixmap;
    QPixmap fRedPixmap;
    QPixmap tRedPixmap;
    QPixmap iRedPixmap;
    QPixmap fGreenPixmap;
    QPixmap tGreenPixmap;
    QPixmap iGreenPixmap;

    int timeoutMSec = 10000;

    int diagnosticLabelIndex = 0;

    void SetUpUI();

    void UpdateDataLabel();
    void UpdateStatusCircles();
};

#endif // OUTPUTOZONEFORM_H
