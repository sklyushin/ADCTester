#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "QDebug"
#include <QTime>
#include <QApplication>

class Controller : public QObject
{

public:

    QSerialPort thisPort;

    virtual void setChannel(int channel) = 0;

    virtual void setBlock(int block) = 0;

    virtual void setVoltage(double voltage) = 0;

    virtual double getTestedValue() = 0;

    virtual double getEtalonValue() = 0;


public slots:   
    virtual void ConnectPort(void) = 0;

    virtual void DisconnectPort(void) = 0;
};

#endif // CONTROLLER_H
