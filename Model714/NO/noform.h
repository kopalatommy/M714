#ifndef NOFORM_H
#define NOFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "model714data.h"
#include "serialhandler.h"
#include "model714settings.h"

#include "outputnoform.h"

#define NO_MAXIMUM_VALUE 2000

namespace Ui {
class NOForm;
}

class NOForm : public QWidget
{
    Q_OBJECT

public:
    explicit NOForm(QWidget *parent = nullptr);
    ~NOForm();

private slots:
    void on_increaseNOButton_clicked();
    void on_decreaseNOButton_clicked();

    void on_startButton_clicked();
    void on_cancelButton_clicked();

    void OutputTimeout();
    void OutputError();

private:
    Ui::NOForm *ui;

    OutputNOForm outputNO;
    float noSetting = 0;

    void SetupUI();
    void showEvent(QShowEvent * event);
};

#endif // NOFORM_H
