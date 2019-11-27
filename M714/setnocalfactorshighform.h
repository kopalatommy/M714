#ifndef SETNOCALFACTORSHIGHFORM_H
#define SETNOCALFACTORSHIGHFORM_H

#include <QWidget>
#include <QMessageBox>

#include "model714settings.h"
#include "serialhandler.h"

namespace Ui {
class SetNOCalFactorsHighForm;
}

class SetNOCalFactorsHighForm : public QWidget
{
    Q_OBJECT

public:
    explicit SetNOCalFactorsHighForm(QWidget *parent = nullptr);
    ~SetNOCalFactorsHighForm();

private slots:
    void on_NOSlopeCB_clicked();

    void on_NOZeroCB_clicked();

    void on_pidGainNOCB_clicked();

    void on_pidGainInfo_clicked();

    void on_increaseButton_clicked();

    void on_decreaseButton_clicked();

    void on_saveButton_clicked();

    void on_backButton_clicked();

private:
    Ui::SetNOCalFactorsHighForm *ui;

    int noSlope = 0;
    int noZero = 0;
    int noPidGain = 0;

    void SetupUI();
};

#endif // SETNOCALFACTORSHIGHFORM_H
