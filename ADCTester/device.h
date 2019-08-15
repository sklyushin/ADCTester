#ifndef DEVICE_H
#define DEVICE_H
#include "controller.h"
#include <string.h>

class Device : public Controller
{
    Q_OBJECT

public:

    Device();

    virtual ~Device();

    void wait(int sec);

    virtual void setChannel(int _channel);

    virtual void setBlock(int _block);

    virtual void setVoltage(double _voltage);

    virtual double getTestedValue();

    virtual double getEtalonValue();

private:
    QString name;

    int channel;

    int block;

    double voltage;

    bool changeCommand;

    qint32 baudRate;

    QSerialPort::DataBits dataBits;

    QSerialPort::Parity parity;

    QSerialPort::StopBits stopBits;

    QSerialPort::FlowControl flowControl;

public slots:
    virtual void ConnectPort(void);

    virtual void DisconnectPort(void);

private slots:
    double ReadInPort();

    void WriteToPort(QString data);
};

#endif // DEVICE_H

