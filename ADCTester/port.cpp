#include "port.h"
#include <qdebug.h>

Port::Port(QObject *parent) :QObject(parent){
    SettingsPort.baudRate = 9600;
    SettingsPort.dataBits = QSerialPort::Data8;
    SettingsPort.parity = QSerialPort::NoParity;
    SettingsPort.stopBits = QSerialPort::OneStop;
    SettingsPort.flowControl = QSerialPort::NoFlowControl;
}

Port::~Port()
{
    qDebug("Удаление нити");
    emit finished_Port();
}

void Port :: process_Port(){
    qDebug("Создание нити");
    connect(&thisPort,SIGNAL(error(QSerialPort::SerialPortError)), this, SLOT(handleError(QSerialPort::SerialPortError)));
    connect(&thisPort, SIGNAL(readyRead()),this,SLOT(ReadInPort()));
}


void Port :: ConnectPort(void){//
    thisPort.setPortName(SettingsPort.name);
    if (thisPort.open(QIODevice::ReadWrite)) {
        qDebug()<<"Смогли открыть.";

        if (thisPort.setBaudRate(SettingsPort.baudRate)
                && thisPort.setDataBits(SettingsPort.dataBits)//DataBits
                && thisPort.setParity(SettingsPort.parity)
                && thisPort.setStopBits(SettingsPort.stopBits)
                && thisPort.setFlowControl(SettingsPort.flowControl))
        {
            if (thisPort.isOpen()){
                qDebug()<< "Порт открыт";
                error_((SettingsPort.name+ " >> Открыт!\r").toLocal8Bit());

            }
        }
        else {
            thisPort.close();
            error_(thisPort.errorString().toLocal8Bit());
            qDebug()<< "Порт закрыт";
        }
    }
    else {
        thisPort.close();
        qDebug()<< "Порт не открыт на чтение и запись";
        error_(thisPort.errorString().toLocal8Bit());

    }
}

void Port::handleError(QSerialPort::SerialPortError error)//
{
    if ( (thisPort.isOpen()) && (error == QSerialPort::ResourceError)) {
        error_(thisPort.errorString().toLocal8Bit());
        qDebug()<<"Ошибка. Отключение от порта!";
        DisconnectPort();
    }
}//


void  Port::DisconnectPort(){
    if(thisPort.isOpen()){
        thisPort.close();
        error_(SettingsPort.name.toLocal8Bit() + " >> Закрыт!\r");
        qDebug()<< "Закрыли порт.";
    }
}


void Port :: WriteToPort(QByteArray data){
    if(thisPort.isOpen()){
        thisPort.write(data);
    }
}
//
void Port :: ReadInPort(){
    QString data;

    data.append(thisPort.readAll());

    outPort(data);

    //((QString)(adr.toInt())).toLatin1().toHex()
}

