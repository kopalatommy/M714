#ifndef HIGHNOCALFORM_H
#define HIGHNOCALFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>

#include "model714settings.h"
#include "serialhandler.h"

namespace Ui {
class HighNOCalForm;
}

class HighNOCalForm : public QWidget
{
    Q_OBJECT

public:
    explicit HighNOCalForm(QWidget *parent = nullptr);
    ~HighNOCalForm();

private slots:
    void on_NOSlopeCB_clicked();

    void on_NOZeroCB_clicked();

    void on_pidGainNOCB_clicked();

    void on_pidGainInfo_clicked();

    void on_increaseButton_clicked();

    void on_decreaseButton_clicked();

    void on_saveButton_clicked();

    void on_backButton_clicked();

    void OnDisableButtonsTimerEnd();

private:
    Ui::HighNOCalForm *ui;

    int slope = 0;
    int zero = 0;
    int pidGain = 0;

    void SetupUI();

    void showEvent(QShowEvent * event);
};

#endif // HIGHNOCALFORM_H
