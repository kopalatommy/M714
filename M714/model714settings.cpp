#include "model714settings.h"

Model714Settings::Model714Settings()
{
    ReadSettingsFile();
}

Model714Settings * Model714Settings::instance = nullptr;
Model714Settings * Model714Settings::GetInstance(){
    if(instance == nullptr){
        instance = new Model714Settings();
    }
    return instance;
}

double Model714Settings::GetNOOutput(){
    return noOutput;
}

void Model714Settings::SetNOOutput(double d){
    noOutput = d;
    WriteSettingsFile();
}

double Model714Settings::GetOzoneOutput(){
    return  ozoneOutput;
}

void Model714Settings::SetOzoneOutput(double d){
    ozoneOutput = d;
    WriteSettingsFile();
}

double Model714Settings::GetOzoneOutputNO2(){
    return ozoneOutputNO2;
}

void Model714Settings::SetOzoneOutputNO2(double d){
    ozoneOutputNO2 = d;
    WriteSettingsFile();
}

double Model714Settings::GetNOOutputNO2(){
    return noOutputNO2;
}

void Model714Settings::SetNOOutputNO2(double d){
    noOutputNO2 = d;
    WriteSettingsFile();
}

void Model714Settings::ReadSettingsFile(){
    if(QFile::exists(QString(FILENAME))){
        QFile file(QString(FILENAME));
        if(file.open(QIODevice::ReadOnly)){
            while(!file.atEnd()){
                char * line = new char[25];
                file.readLine(line, 25);
                QByteArray temp;
                temp.append(line);

                switch (temp.at(0)) {
                case OzoneMarker:
                    temp.remove(0, 1);
                    ozoneOutput = QString(temp).toDouble();
                    qDebug() << "Read in ozone output: " << ozoneOutput;
                    break;
                case NOMarker:
                    temp.remove(0, 1);
                    noOutput = QString(temp).toDouble();
                    qDebug() << "Read in no output: " << noOutput;
                    break;
                case OzoneMarker_no2:
                    temp.remove(0, 1);
                    ozoneOutputNO2 = QString(temp).toDouble();
                    qDebug() << "Read in ozone no2 output: " << ozoneOutputNO2;
                    break;
                case NOMarker_no2:
                    temp.remove(0, 1);
                    ozoneOutputNO2 = QString(temp).toDouble();
                    qDebug() << "Read in no no2 output: " << noOutputNO2;
                    break;
                default:
                    qDebug() << "Read in: " << temp;
                    break;
                }
            }
            file.close();
        }else{
            qDebug() << "Failed to open settings file";
        }
    }else{
        qDebug() << "Failed to file settings file, writing default";
        WriteSettingsFile();
    }
}

void Model714Settings::WriteSettingsFile(){
    QFile file(QString(FILENAME));

    if(file.open(QIODevice::WriteOnly)){
        file.write(QString(OzoneMarker).append(QString::number(ozoneOutput)).toLocal8Bit());
        file.write("\n");
        file.write(QString(NOMarker).append(QString::number(noOutput)).toLocal8Bit());
        file.write("\n");
        file.write(QString(OzoneMarker_no2).append(QString::number(ozoneOutputNO2)).toLocal8Bit());
        file.write("\n");
        file.write(QString(NOMarker_no2).append(QString::number(noOutputNO2)).toLocal8Bit());
        file.close();
    }
}
