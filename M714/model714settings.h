#ifndef MODEL714SETTINGS_H
#define MODEL714SETTINGS_H

#include <QDebug>
#include <QFile>

#define FILENAME "/home/2b/Model714Settings.txt"
//#define FILENAME "D:/Work/Model714Setting.txt"

#define OzoneMarker 'A'
#define NOMarker 'B'
#define OzoneMarker_no2 'C'
#define NOMarker_no2 'D'

class Model714Settings
{
public:
    static Model714Settings * GetInstance();

    double GetOzoneOutput();
    void SetOzoneOutput(double d);

    double GetNOOutput();
    void SetNOOutput(double d);

    double GetOzoneOutputNO2();
    void SetOzoneOutputNO2(double d);

    double GetNOOutputNO2();
    void SetNOOutputNO2(double d);

private:
    Model714Settings();
    static Model714Settings * instance;

    double ozoneOutput = 0;
    double noOutput = 0;
    double ozoneOutputNO2 = 0;
    double noOutputNO2 = 0;

    void WriteSettingsFile();
    void ReadSettingsFile();
};

#endif // MODEL714SETTINGS_H
