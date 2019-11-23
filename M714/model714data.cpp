#include "model714data.h"

Model714Data::Model714Data()
{

}

Model714Data * Model714Data::instance = nullptr;
Model714Data * Model714Data::GetInstance(){
    if(instance == nullptr) instance = new Model714Data();
    return instance;
}

float Model714Data::GetO3Voltage(){
    return o3_voltage;
}
void Model714Data::SetO3Voltage(float f){
    o3_voltage = f;
}

float Model714Data::GetNOVoltage(){
    return no_voltage;
}
void Model714Data::SetNOVoltage(float f){
    no_voltage = f;
}

float Model714Data::GetO3Flow(){
    return o3_flow;
}
void Model714Data::SetO3Flow(float f){
    o3_flow = f;
}

float Model714Data::GetNO2Flow(){
    return no2_flow;
}
void Model714Data::SetNO2Flow(float f){
    no2_flow = f;
}

float Model714Data::GetDilutionFlow(){
    return dillution_flow;
}
void Model714Data::SetDilutionFlow(float f){
    dillution_flow = f;
}

float Model714Data::GetO3Temperature(){
    return o3_temperature;
}
void Model714Data::SetO3Temperature(float f){
    o3_temperature = f;
}

float Model714Data::GetNOTemperature(){
    return no_temperature;
}
void Model714Data::SetNOTemperature(float f){
    no_temperature = f;
}

float Model714Data::GetO3LampDutyCycle(){
    return o3_lamp_duty_cycle;
}
void Model714Data::SetO3LampDutyCycle(float f){
    o3_lamp_duty_cycle = f;
}

float Model714Data::GetNOLampDutyCycle(){
    return no_lamp_duty_cycle;
}
void Model714Data::SetNOLampDutyCycle(float f){
    no_lamp_duty_cycle = f;
}

float Model714Data::GetNOHeaterDutyCycle(){
    return no_heater_duty_cycle;
}
void Model714Data::SetNOHeaterDutyCycle(float f){
    no_heater_duty_cycle = f;
}

float Model714Data::GetO3HeaterDutyCycle(){
    return  o3_heater_duty_cycle;
}
void Model714Data::SetO3HeaterDutyCycle(float f){
    o3_heater_duty_cycle = f;
}

float Model714Data::GetO3FlowDutyCycle(){
    return o3_flow_duty;
}
void Model714Data::SetO3FlowDutyCycle(float f){
    o3_flow_duty = f;
}

float Model714Data::GetN2OFlowDutyCycle(){
    return n2o_flow_duty;
}
void Model714Data::SetN2oFlowDutyCycle(float f){
    n2o_flow_duty = f;
}

float Model714Data::GetSystemTemperature(){
    return system_temperature;
}
void Model714Data::SetSystemTemperature(float f){
    system_temperature = f;
}

float Model714Data::GetSystemHumidity(){
    return system_humidity;
}
void Model714Data::SetSystemHumidity(float f){
    system_humidity = f;
}

float Model714Data::GetSystemPressure(){
    return pressure;
}
void Model714Data::SetSystemPressure(float f){
    pressure = f;
}

QDateTime Model714Data::GetDateTime(){
    return serial_dateTime;
}
void Model714Data::SetDateTime(QDateTime d){
    if(d.date().year() < 2000) d.addYears(100);
    serial_dateTime = d;
}
void Model714Data::SetDateTime(QString s){
    qDebug() << "Received: " << s << " for data and time";
    serial_dateTime = QDateTime::fromString(s);
}

float Model714Data::GetO3Intensity(){
    return o3_intensity;
}
void Model714Data::SetO3Intensity(float f){
    o3_intensity = f;
}

float Model714Data::GetNOIntensity(){
    return no_intensity;
}
void Model714Data::SetNOIntensity(float f){
    no_intensity = f;
}

float Model714Data::GetO3Ratio(){
    return o3_ratio;
}
void Model714Data::SetO3Ratio(float f){
    o3_ratio = f;
}

float Model714Data::GetNORatio(){
    return no_ratio;
}
void Model714Data::SetNORatio(float f){
    no_ratio = f;
}

void Model714Data::SetMode(int i){
    mode = i;
}

QString Model714Data::GetDiagnosticString(int index){
    char arr[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    switch (index) {
    case 0:
        sprintf(arr, "%1.4f", static_cast<double>(o3_voltage));
        return QString("O3 Voltage: ").append(arr).append(" Volts");
    case 1:
            if(no_voltage < 0.0001f){
                sprintf(arr, "%1.4f", 0.0);
            }else{
                sprintf(arr, "%1.4f", static_cast<double>(no_voltage));
            }
        return QString("NO Voltage: ").append(arr).append(" Volts");
    case 2:
            if(o3_flow > O3_FLOW_HIGH_LIMIT || o3_flow < O3_FLOW_LOW_LIMIT){
                return QString("O3 Flow: <font color='red'>%1</font> cc/min").arg(static_cast<double>(o3_flow));
            }else{
                return QString("O3 Flow: %1 cc/min").arg(static_cast<double>(o3_flow));
            }
    case 3: return QString("NO2 Flow: %1 cc/min").arg(static_cast<double>(no2_flow));
    case 4:
        if(static_cast<double>(dillution_flow) > DILUTION_FLOW_HIGH_LIMIT || static_cast<double>(dillution_flow) < DILUTION_FLOW_LOW_LIMIT){
            return QString("Dilution Flow: <font color='red'>%1</font> L/min").arg(static_cast<double>(dillution_flow));
        }else{
            return QString("Dilution Flow: %1 L/min").arg(static_cast<double>(dillution_flow));
        }
    case 5:
        if(static_cast<double>(o3_temperature) > TEMPERATURE_HIGH_LIMIT || static_cast<double>(o3_temperature) < TEMPERATURE_LOW_LIMIT){
            return QString("O3 Temperature: <font color='red'>%1</font> C").arg(static_cast<double>(o3_temperature));
        }else{
            return QString("O3 Temperature: %1 C").arg(static_cast<double>(o3_temperature));
        }
    case 6:
        if(no_temperature > TEMPERATURE_HIGH_LIMIT || no_temperature < TEMPERATURE_LOW_LIMIT){
            return QString("NO Temperature: <font color='red'>%1</font> C").arg(static_cast<double>(no_temperature));
        }else{
            return QString("NO Temperature: %1 C").arg(static_cast<double>(no_temperature));
        }
    case 7: return QString("O3 Lamp Duty: %1 %").arg(static_cast<double>(o3_lamp_duty_cycle));
    case 8: return QString("NO Lamp Duty: %1 %").arg(static_cast<double>(no_lamp_duty_cycle));
    case 9: return QString("O3 Heater Duty: %1 %").arg(static_cast<double>(o3_heater_duty_cycle));
    case 10: return QString("NO Heater Duty: %1 %").arg(static_cast<double>(no_heater_duty_cycle));
    case 11: return QString("O3 Flow Duty: %1 %").arg(static_cast<double>(o3_flow_duty));
    case 12: return QString("N2O Flow Duty: %1 %").arg(static_cast<double>(n2o_flow_duty));
    case 13: return QString("System Temperature: %1 C").arg(static_cast<double>(system_temperature));
    case 14: return QString("System Humidity: %1 %").arg(static_cast<double>(system_humidity));
    case 15: return QString("System Pressure: %1 torr").arg(static_cast<double>(pressure));
    case 16: return QString("Date/Time: ").append(serial_dateTime.toString("hh:mm:ss dd/MM/yy"));
    }
    return "";
}
