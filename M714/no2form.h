#ifndef NO2FORM_H
#define NO2FORM_H

#include <QWidget>

namespace Ui {
class NO2Form;
}

class NO2Form : public QWidget
{
    Q_OBJECT

public:
    explicit NO2Form(QWidget *parent = nullptr);
    ~NO2Form();

private:
    Ui::NO2Form *ui;
};

#endif // NO2FORM_H
