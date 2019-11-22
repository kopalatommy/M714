#ifndef MODEL714DATA_H
#define MODEL714DATA_H

#include <QDateTime>

#define O3_FLOW_HIGH_LIMIT 55
#define O3_FLOW_LOW_LIMIT 45

#define N2O_FLOW_HIGH_LIMIT 45
#define N2O_FLOW_LOW_LIMIT 34

#define DILUTION_FLOW_HIGH_LIMIT 3.5 //liters/min
#define DILUTION_FLOW_LOW_LIMIT 2.0

#define TEMPERATURE_HIGH_LIMIT 45
#define TEMPERATURE_SETTING 40
#define TEMPERATURE_LOW_LIMIT 35

#define RED_TARGET_THRESHOLD 0.05
#define YELLOW_TARGET_THRESHOLD 0.02

class Model714Data
{
public:
    static Model714Data * GetInstance();
private:
    static Model714Data * instance;
    Model714Data();

public:
    float GetO3Voltage();
    float GetNOVoltage();
    void SetO3Voltage(float);
    void SetNOVoltage(float);

    float GetO3Flow();
    float GetNO2Flow();
    float GetDilutionFlow();
    void SetO3Flow(float);
    void SetNO2Flow(float);
    void SetDilutionFlow(float);

    float GetO3Temperature();
    float GetNOTemperature();
    void SetO3Temperature(float);
    void SetNOTemperature(float);

    float GetO3LampDutyCycle();
    float GetNOLampDutyCycle();
    void SetO3LampDutyCycle(float);
    void SetNOLampDutyCycle(float);

    float GetO3HeaterDutyCycle();
    float GetNOHeaterDutyCycle();
    void SetO3HeaterDutyCycle(float);
    void SetNOHeaterDutyCycle(float);

    float GetO3FlowDutyCycle();
    float GetN2OFlowDutyCycle();
    void SetO3FlowDutyCycle(float);
    void SetN2oFlowDutyCycle(float);

    float GetSystemTemperature();
    float GetSystemHumidity();
    float GetSystemPressure();
    void SetSystemTemperature(float);
    void SetSystemHumidity(float);
    void SetSystemPressure(float);

    QDateTime GetDateTime();
    void SetDateTime(QDateTime);

    QString GetDiagnosticString(int index);

    float GetO3Intensity();
    float GetNOIntensity();
    void SetO3Intensity(float f);
    void SetNOIntensity(float f);

    float GetO3Ratio();
    float GetNORatio();
    void SetO3Ratio(float f);
    void SetNORatio(float f);

    void SetMode(int i);

private:
    float o3_intensity = 0;
    float o3_voltage = 0;
    float o3_temperature = 0;
    float o3_flow = 0;
    float o3_lamp_duty_cycle = 0;
    float o3_heater_duty_cycle = 0;
    float o3_flow_duty = 0;
    float o3_ratio = 0;

    float no_intensity = 0;
    float no_voltage = 0;
    float no_temperature = 0;
    float no_lamp_duty_cycle = 0;
    float no_heater_duty_cycle = 0;
    float no_ratio = 0;

    float no2_flow = 0;
    float n2o_flow_duty = 0;

    float pressure = 0;
    float dillution_flow = 0;
    float system_temperature = 0;
    float system_humidity = 0;
    int mode = 0;

    QDateTime serial_dateTime;

    //sig figs for output
    int o3_intensity_decimals = 0;
    int o3_voltage_decimals = 0;
    int o3_temperature_decimals = 0;
    int o3_flow_decimals = 0;
    int o3_lamp_duty_cycle_decimals = 0;
    int o3_heater_duty_cycle_decimals = 0;

    int no_intensity_decimals = 0;
    int no_volatage_decimals = 0;
    int no_temperature_decimals = 0;
    int no_lamp_duty_cycles = 0;
    int no_heater_duty_cycle_decimals = 0;

    int no2_flow_decimals = 0;

    int dillution_flow_decimals = 0;
};

#endif // MODEL714DATA_H
