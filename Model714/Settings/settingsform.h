#ifndef SETTINGSFORM_H
#define SETTINGSFORM_H

#include <QWidget>
#include <QDebug>
#include <QtNetwork>

#define RELEASE_DATE "11/2019"
#define APP_VERSION "1"
#define BUILD_NUMBER "10"

namespace Ui {
class SettingsForm;
}

class SettingsForm : public QWidget
{
    Q_OBJECT

public:
    explicit SettingsForm(QWidget *parent = nullptr);
    ~SettingsForm();

private slots:
    void on_backButton_clicked();

private:
    Ui::SettingsForm *ui;

    void SetUpUI();
    void UpdateUI();

    QString GetIPAddress();
};

#endif // SETTINGSFORM_H
