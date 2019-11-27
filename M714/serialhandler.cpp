#include "serialhandler.h"

SerialHandler * SerialHandler::instance = nullptr;

SerialHandler * SerialHandler::GetInstance(){
    if(instance == nullptr){
        instance = new SerialHandler();
    }
    return instance;
}

SerialHandler::SerialHandler(){
    ConfigureSerialPort();
}

void SerialHandler::ConfigureSerialPort(){
    portName = PORT_NAME;
    baudRate = 19200;

    qDebug() << "Configuring serial port: Port(" << portName << ") Baud Rate(" << baudRate << ")";

    serialPort.setPortName(portName);
    serialPort.setBaudRate(baudRate);

    if(serialPort.open(QIODevice::ReadWrite)){
        qDebug() << "Successfully setup serial port";
        serialPort.clear(QSerialPort::AllDirections);
        connect(&serialPort, &QSerialPort::readyRead, this, &SerialHandler::DataReady);
    }else{
        qDebug() << "Failed to open serial port";
    }
}

void SerialHandler::DataReady(){
    if(serialPort.canReadLine()){
        QByteArray retData = serialPort.readAll();
        //qDebug() << retData;
        //ParseData(QString(retData));
        if(ParseDataLine(QString(retData))){
            emit ParsedData();
        }
        else if(retData.contains('!')){
            qDebug() << "Received Error";
            emit ReceivedError();
        }
        else if(retData.contains('$')){
            qDebug() << "Received Ack";
            emit ReceivedAck();
        }
        /*else{
            qDebug() << "Serial handler received bad data: " << retData;
        }*/
    }
}

bool SerialHandler::ParseDataLine(QString dataLine){
    QStringList fields;

    dataLine.remove(QRegExp("[\\n\\t\\r]"));
    fields = dataLine.split(QRegExp(","));
    if(fields.length() == NUMBER_OF_COLUMNS_IN_DATA_LINE){
        Model714Data * data = Model714Data::GetInstance();

        data->SetO3Intensity(fields.at(0).toFloat());
        data->SetNOIntensity(fields.at(1).toFloat());
        data->SetO3Voltage(fields.at(2).toFloat());
        data->SetNOVoltage(fields.at(3).toFloat());
        data->SetO3Temperature(fields.at(4).toFloat() -273);
        data->SetNOTemperature(fields.at(5).toFloat() - 273);
        data->SetSystemPressure(fields.at(6).toFloat());
        data->SetO3Flow(fields.at(7).toFloat());
        data->SetNO2Flow(fields.at(8).toFloat());
        data->SetDilutionFlow(fields.at(9).toFloat());
        data->SetO3LampDutyCycle(fields.at(10).toFloat());
        data->SetNOLampDutyCycle(fields.at(11).toFloat());
        data->SetO3HeaterDutyCycle(fields.at(12).toFloat());
        data->SetNOHeaterDutyCycle(fields.at(13).toFloat());
        data->SetO3FlowDutyCycle(fields.at(14).toFloat());
        data->SetN2oFlowDutyCycle(fields.at(15).toFloat());
        data->SetO3Ratio(fields.at(16).toFloat());
        data->SetNORatio(fields.at(17).toFloat());
        data->SetSystemTemperature(fields.at(18).toFloat());
        data->SetSystemHumidity(fields.at(19).toFloat());
        //qDebug() << "Date Time: " << (fields.at(20) + " " + fields.at(21)) << " Format: " << "dd/MM/yyhh:mm:ss";
        data->SetDateTime(QDateTime::fromString(fields.at(20) + " " + fields.at(21), "dd/MM/yyhh:mm:ss"));
        data->SetMode(fields.at(22).toInt());

        return true;
    }else{
        return false;
    }
}

/*void SerialHandler::ParseData(QString data){
    data.remove('\r');
    QList<QString> list = data.split('\n');

    for(int i = 0; i < list.length(); i++) {
        QString line = QString(list.at(i));

        if((line.length() != 0) && (line != "\r")) {
            emit ReceivedNewData(line);
            /*foreach(QTcpSocket *socket, netSockets) {
                socket->write(line.toLatin1() + "\n\r");
            }*/
        /*}
    }
}*/

void SerialHandler::WriteChar(char c){
    //qDebug() << "Writing char: " << c;
    serialPort.write(QByteArray().append(c));
}

/*void SerialHandler::WriteSync(QString data){
    QByteArray array = data.toLocal8Bit();
    double checksum = 0;

    for (int i = 0; i < array.length(); i++) {
        checksum += array.at(i);
    }
    checksum /= 8;

    qDebug() << "Checksum: " << checksum;
    data.append("%").append(QString::number(checksum, 'f', 2)).append("\n\r");

    qDebug() << "Writing: " << data;
    for(int i = 0; i < data.count(); i++){
        WriteChar(data.at(i).toLatin1());
        QThread::msleep(5);
    }
    //serialPort.write(data.toLocal8Bit().constData(), data.length());
}*/

/*void SerialHandler::WriteMessage(QString data){
    qDebug() << "Writing message: " << data;

    WriteChar('R');
    tempMessage = data;
    QTimer::singleShot(2000, this, SLOT(OnMessageTimeout()));
}*/

void SerialHandler::OnMessageTimeout(){
    double checksum = 0;
    QByteArray array = tempMessage.toLocal8Bit();

    for(int i = 0; i < array.length(); i++){
        char a = array.at(i);
        checksum += a;
    }
    checksum /= 8;
    qDebug() << "QtTotalChecksum: " << checksum;
    tempMessage.append("%");
    tempMessage.append(QString::number(checksum, 'f', 2));
    tempMessage.append("\n\r");

    qDebug() << "Sent this whole string: " << tempMessage;
    for(int i = 0; i < tempMessage.length(); i++){
        WriteChar(tempMessage.at(i).toLatin1());
        //I::msleep(5);
        QThread::msleep(5);
    }
}

void SerialHandler::WriteCommand(QStringList lst){
    toSend.append(lst);
    if(!inLoop) WriteMessage_loop();
}
void SerialHandler::WriteCommand(QString str){
    toSend.append(str);
    if(!inLoop) WriteMessage_loop();
}

void SerialHandler::WriteMessage_loop(){
    if(toSend.count() > 0){
        inLoop = true;
        WriteChar('R');
        QTimer::singleShot(2000, this, SLOT(OnMessageTimeout_loop()));
    }else{
        inLoop = false;
    }
}

void SerialHandler::OnMessageTimeout_loop(){
    double checksum = 0;
    QByteArray array = toSend.at(0).toLocal8Bit();

    for(int i = 0; i < array.length(); i++){
        char a = array.at(i);
        checksum += a;
    }
    checksum /= 8;
    qDebug() << "QtTotalChecksum: " << checksum;
    tempMessage.append("%");
    tempMessage.append(QString::number(checksum, 'f', 2));
    tempMessage.append("\n\r");

    qDebug() << "Sent this whole string: " << tempMessage;
    for(int i = 0; i < array.length(); i++){
        WriteChar(array.at(i));
        //I::msleep(5);
        QThread::msleep(5);
    }

    toSend.removeAt(0);
    QTimer::singleShot(5000, this, SLOT(WriteMessage_loop()));
}
