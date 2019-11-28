#ifndef NOCALFORM_H
#define NOCALFORM_H

#include <QWidget>

#include "Settings/NO/highnocalform.h"

namespace Ui {
class NOCalForm;
}

class NOCalForm : public QWidget
{
    Q_OBJECT

public:
    explicit NOCalForm(QWidget *parent = nullptr);
    ~NOCalForm();

private slots:
    void on_lowButton_clicked();

    void on_highButton_clicked();

    void on_backButton_clicked();

private:
    Ui::NOCalForm *ui;

    HighNOCalForm highNOCal;
};

#endif // NOCALFORM_H
