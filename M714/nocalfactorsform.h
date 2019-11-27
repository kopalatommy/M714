#ifndef NOCALFACTORSFORM_H
#define NOCALFACTORSFORM_H

#include <QWidget>

namespace Ui {
class NOCalFactorsForm;
}

class NOCalFactorsForm : public QWidget
{
    Q_OBJECT

public:
    explicit NOCalFactorsForm(QWidget *parent = nullptr);
    ~NOCalFactorsForm();

private slots:
    void on_lowButton_clicked();
    void on_highButton_clicked();
    void on_backButton_clicked();

private:
    Ui::NOCalFactorsForm *ui;
};

#endif // NOCALFACTORSFORM_H
