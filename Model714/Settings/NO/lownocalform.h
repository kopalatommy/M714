#ifndef LOWNOCALFORM_H
#define LOWNOCALFORM_H

#include <QWidget>
#include <QMessageBox>

#include "serialhandler.h"
#include "model714settings.h"

namespace Ui {
class LowNOCalForm;
}

class LowNOCalForm : public QWidget
{
    Q_OBJECT

public:
    explicit LowNOCalForm(QWidget *parent = nullptr);
    ~LowNOCalForm();

private slots:
    void on_NOSlopeCB_clicked();

    void on_NOZeroCB_clicked();

    void on_pidGainNOCB_clicked();

    void on_pidGainInfo_clicked();

    void on_increaseButton_clicked();

    void on_decreaseButton_clicked();

    void on_saveButton_clicked();

    void on_backButton_clicked();

    void OnDisableButtonTimeout();

private:
    Ui::LowNOCalForm *ui;

    int slope = 0;
    int zero = 0;
    int pidGain = 0;

    void SetupUI();
};

#endif // LOWNOCALFORM_H
