#ifndef NOFORM_H
#define NOFORM_H

#include <QWidget>
#include <QDebug>

#include "model714data.h"
#include "serialhandler.h"

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

private:
    Ui::NOForm *ui;

    double noSetting = 0;

    OutputNOForm outputNO;

    void SetupUI();
};

#endif // NOFORM_H
