#include "device.h"

Device::Device()
{
    this->baudRate = 9600;
    this->dataBits = QSerialPort::Data8;
    this->parity = QSerialPort::NoParity;
    this->stopBits = QSerialPort::OneStop;
    this->flowControl = QSerialPort::NoFlowControl;    
}

Device::~Device(){

}

void Device::setChannel(int _channel){                
    channel = _channel;
}

void Device::setBlock(int _block){    
    block = _block;
}

void Device::setVoltage(double _voltage){

    QString sendLine = "DAC ";
    double DACValue_ = (4095.*_voltage)/3.3;
    unsigned int DACValue = (unsigned int)DACValue_;
    sendLine.append(QString::number(DACValue, 16));
    WriteToPort(sendLine);
    ReadInPort();
}

double Device::getTestedValue(){

    QString sendLine = "CONVCH ";
    sendLine.append(QString::number(channel-1));
    WriteToPort(sendLine);
    ReadInPort();

    sendLine = "READ 0 ";
    sendLine.append(QString::number(block-1));
    WriteToPort(sendLine);

    return  ReadInPort();

}

double Device::getEtalonValue(){

    QString sendLine = "ADC";
    WriteToPort(sendLine);
    changeCommand = true;

    return ReadInPort();
}

void Device::ConnectPort(void){    

    if (thisPort.open(QIODevice::ReadWrite)){
        if (
                thisPort.setBaudRate(this->baudRate) &&
                thisPort.setDataBits(this->dataBits) &&
                thisPort.setParity(this->parity) &&
                thisPort.setStopBits(this->stopBits) &&
                thisPort.setFlowControl(this->flowControl)){

            thisPort.setTextModeEnabled(true);

            if (thisPort.isOpen()){
                qDebug()<<"Открыт";                
            }
        }
    }
}

void Device::DisconnectPort(){
    if(thisPort.isOpen()){
        thisPort.close();
        qDebug()<< "Отключились от порта";
    }
}

void Device::WriteToPort(QString data){   
    if(thisPort.isOpen()){        
        thisPort.clear();
        QString line = data;
        line.append("\r");
        QByteArray data = line.toLocal8Bit();
        thisPort.write(data);
    }
}

double Device::ReadInPort(){    
    wait(1);
    if (thisPort.isOpen()){
        QString readed;
        int MaxLines=20;
        double val = 4.;
        while (--MaxLines)
        {
            readed = thisPort.readLine();
            readed = readed.trimmed();
    //        qDebug() << "[" << readed << "]";
            if (readed == "Done.")
                break;
            QStringList list = readed.split(':');
            for (int i=0; i< list.count(); i++)
                list[i] = list[i].trimmed();
            if (list.count()>=2)
            {
                bool ok;
                if (list[0]=="MADCVAL")
                {
                    val = list[1].toInt(&ok, 16);
                    val = val/4095*3.3;
                }
                if (list[0]=="ADCVOLT")
                {
                    val = list[1].toDouble(&ok);
                }
            }
        }
        return val;
    }
    else return 0;
}

void Device::wait(int sec){

    QTime time;
    time.start();
    for(;time.elapsed() < sec*1000;){
        qApp->processEvents();
    }
}
