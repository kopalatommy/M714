#ifndef OZONEFORM_H
#define OZONEFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "outputozoneform.h"
#include "model714settings.h"

#define OZONE_MAXIMUM_VALUE 2000

namespace Ui {
class OzoneForm;
}

class OzoneForm : public QWidget
{
    Q_OBJECT

public:
    explicit OzoneForm(QWidget *parent = nullptr);
    ~OzoneForm();

private slots:
    void on_increaseO3Button_clicked();
    void on_decreaseO3Button_clicked();

    void on_startButton_clicked();
    void on_cancelButton_clicked();

    void OutputTimeout();
    void OutputError();

private:
    Ui::OzoneForm *ui;

    OutputOzoneForm outputOzone;
    float ozoneSetting = 0;

    void showEvent(QShowEvent * event);
};

#endif // OZONEFORM_H
