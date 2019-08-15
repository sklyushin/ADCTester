#include "emulator.h"
#include <qmath.h>
using namespace std;

Emulator::Emulator(){

}

Emulator::~Emulator(){    

}
void Emulator::setChannel(int _channel){
    qDebug()<< "Установлен канал №";
    channel = _channel;
    qDebug()<<channel;
}

void Emulator::setVoltage(double _voltage){
    waitMS(200);
//    qDebug()<< "Установлено напряжение:";
    voltage = _voltage;
    qDebug()<<voltage;
}

void Emulator::setBlock(int _block){
//    qDebug()<< "Установлен блок №";
    block = _block;
    qDebug()<<block;
}

double Emulator::getTestedValue(){
    double rand = rrand(-voltage*0.1,voltage*0.1);
//    qDebug()<<"На тестируемом измерителе:";
    double testVoltage = voltage+rand;
    qDebug() << testVoltage;
    return testVoltage;

}

double Emulator::getEtalonValue(){
    double rand = rrand(-voltage*0.02,voltage*0.02);
//    qDebug()<<" На эталонном измерителе:";
    double etalonVoltage = voltage+rand;
    qDebug() << etalonVoltage;
    return etalonVoltage;
}

double Emulator::rrand(double range_min, double range_max) {
    return double((double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min);
}

void Emulator::waitMS(int msec){

    QTime time;
    time.start();
    for(;time.elapsed() < msec;){
        qApp->processEvents();
    }
}

