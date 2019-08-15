#ifndef EMULATOR_H
#define EMULATOR_H
#include "controller.h"
#include <iostream>

class Emulator : public Controller
{
    Q_OBJECT

public:

    Emulator();

    virtual ~Emulator();

    virtual void setChannel(int _channel);

    virtual void setBlock(int _block);

    virtual void setVoltage(double _voltage);

    virtual double getTestedValue(); //add random -10%-+10%

    virtual double getEtalonValue(); //add random -2%-+2%

    virtual double rrand(double range_min, double range_max);

private:
    int channel;

    int block;

    double voltage;

    void waitMS(int msec);

public slots:
    virtual void ConnectPort(void){}

    virtual void DisconnectPort(void){}
};

#endif // EMULATOR_H
