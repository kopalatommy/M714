#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>

#include "model714data.h"

//Forms
#include "no2form.h"
#include "noform.h"
#include "ozoneform.h"
#include "settingsform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Ozone_button_clicked();
    void on_NO_button_clicked();
    void on_NO2_button_clicked();

    void on_Diag_right_clicked();

    void on_Diag_left_clicked();

    void on_Help_button_clicked();

    void UpdateUI();

    void on_Settings_button_clicked();

private:
    Ui::MainWindow *ui;

    NO2Form no2form;
    NOForm noForm;
    OzoneForm ozoneForm;

    SettingsForm settingsForm;

    int _dataLabelIndex = 0;

    void SetupUI();

    void UpdateDataLabel();
    void UpdateStatusLabel();
};

#endif // MAINWINDOW_H
