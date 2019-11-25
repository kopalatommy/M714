#ifndef SERIALHANDLER_H
#define SERIALHANDLER_H

#include <QObject>
#include <QSerialPort>
#include <QDebug>
#include <QThread>
#include <QTimer>

#include "model714data.h"

#define PORT_NAME "ttyUSB0"

#define NUMBER_OF_COLUMNS_IN_DATA_LINE 23

class SerialHandler : public QObject
{
    Q_OBJECT

public:
    static SerialHandler * GetInstance();

public slots:
    void WriteSync(QString data);
    void WriteChar(char c);
    void WriteFullMessage(QString data);

signals:
    void ReceivedNewData(QString);
    void ReceivedError();
    void ReceivedAck();
    void ParsedData();

private slots:
    void DataReady();

private:
    static SerialHandler * instance;
    SerialHandler();

    QString portName = "tty0";
    int baudRate = 19200;
    QSerialPort serialPort;

    void ConfigureSerialPort();
    //void ParseData(QString data);
    bool ParseDataLine(QString dataLine);

    QString tempMessage = "";
};

#endif // SERIALHANDLER_H
