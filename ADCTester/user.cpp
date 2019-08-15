#include "user.h"
#include "ui_user.h"
#include <QString>
#include <iostream>

User::User(Controller *c): QMainWindow(), ui(new Ui::User)
{        
    emul = c;
    isShowGraph2 = false;
    isShowGraph1 = false;
    index1 = 0;
    index2 = 0;
    index3 = 0;
    legend = "";    

    ui->setupUi(this);
    this->setWindowTitle("Тестирование АЦП устройств");
    this->setWindowIcon(QIcon(QDir::currentPath()+"/icon.png"));    

    QButtonGroup *group = new QButtonGroup();
    group->addButton(ui->channel_1);
    group->addButton(ui->channel_2);
    group->addButton(ui->channel_3);
    group->addButton(ui->channel_4);

    group = new QButtonGroup();
    group->addButton(ui->block_1);
    group->addButton(ui->block_2);
    group->addButton(ui->block_3);
    group->addButton(ui->block_4);

    group = new QButtonGroup();
    group->addButton(ui->dotOnGraph);
    group->addButton(ui->lineOnGraph);

    ui->widget->xAxis->setLabel("Входное напряжение, В");
    ui->widget->yAxis->setLabel("Измеренное напряжение, В");
    ui->widget->legend->setVisible(true);
    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->widget_2->xAxis->setLabel("Встроенный АЦП, В");
    ui->widget_2->yAxis->setLabel("Тестируемый АЦП, В");
    ui->widget_2->legend->setVisible(true);
    ui->widget_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->dotOnGraph->setChecked(true);
    ui->block_1->setChecked(true);
    ui->channel_1->setChecked(true);
    ui->choose_mode_1->setChecked(true);
    ui->num->setDisabled(true);
    ui->stop->setDisabled(true);

    QRegExp rx("^[0-9]*[.]{1}[0-9]*$");
    QValidator *validator = new QRegExpValidator(rx, this);
    ui->step->setValidator( validator );
    ui->min->setValidator(validator);
    ui->max->setValidator(validator);



    connect(ui->widget, SIGNAL(mouseDoubleClick(QMouseEvent*)), this, SLOT(saveImage1()));
    connect(ui->widget_2, SIGNAL(mouseDoubleClick(QMouseEvent*)), this, SLOT(saveImage2()));

}

User::~User()
{    
    delete ui;
}

void User::on_send_clicked()
{
    legend = "";
    ui->statusbar->clearMessage();

    if (!emul->thisPort.isOpen()){
        ui->statusbar->showMessage("Нет соединения. Установите соединение");
    }

    if (ui->showGraph2->isChecked()) isShowGraph2 = true;
    else isShowGraph2 = false;

    volt_x = new QVector<double>;
    volt_y1 = new QVector<double>;
    volt_y2 = new QVector<double>;
    ui->widget->clearGraphs();
    ui->widget_2->clearGraphs();

    index1 = 0;
    index2 = 0;
    index3 = 0;
    isPainting = true;

    if (ui->channel_1->isChecked()){
        emul->setChannel(1);
        legend.append("C1 ");
    }
    else if (ui->channel_2->isChecked()){
        emul->setChannel(2);
        legend.append("C2 ");
    }
    else if (ui->channel_3->isChecked()){
        emul->setChannel(3);
        legend.append("C3 ");
    }
    else if (ui->channel_4->isChecked()){
        emul->setChannel(4);
        legend.append("C4 ");
    }

    if (ui->block_1->isChecked()){
        emul->setBlock(1);
        legend.append("B1 ");
    }
    else if (ui->block_2->isChecked()){
        emul->setBlock(2);
        legend.append("B2 ");
    }
    else if (ui->block_3->isChecked()){
        emul->setBlock(3);
        legend.append("B3 ");
    }
    else if (ui->block_4->isChecked()){
        emul->setBlock(4);
        legend.append("B4 ");
    }

    if (ui->step->text().length() > 0  && ui->min->text().length() > 0 && ui->max->text().length() > 0){
        if (ui->min->text().toDouble() < ui->max->text().toDouble()){
            if (ui->step->text().toDouble() <= (ui->max->text().toDouble() - ui->min->text().toDouble())){
                step = ui->step->text().toDouble();
                MIN = ui->min->text().toDouble();
                MAX = ui->max->text().toDouble();
            }
            else{
                ui->statusbar->showMessage("Шаг неверный. Введите корректный шаг");
                return;
            }
        }
        else{
            ui->statusbar->showMessage("MIN должен быть меньше MAX");
            return;
        }
    }
    else {
        ui->statusbar->showMessage("Введите данные");
        return;
    }

    ui->widget->xAxis->setRange(0, MAX*1.5);
    ui->widget->yAxis->setRange(0, MAX*1.5);
    ui->widget_2->xAxis->setRange(0, MAX*1.5);
    ui->widget_2->yAxis->setRange(0, MAX*1.5);

    if (emul->thisPort.isOpen()){
        ui->stop->setEnabled(true);
    }

    if(ui->choose_mode_1->isChecked() ){
        for (double i = MIN; i <= MAX; i+=step){
            if (!isPainting) break;
            ssValues(i);
        }        
    }
    else if(ui->choose_mode_2->isChecked()){
        for (double i = MAX; i >=MIN; i-=step){
            if (!isPainting)   break;
            ssValues(i);
        }
    }
    else if(ui->choose_mode_3->isChecked()){
        for (double i = MIN; i <= MAX; i+=step){
            if (!isPainting) break;
            ssValues(i);
        }

        for (double j = MAX; j >=MIN; j-=step){
            if (!isPainting) break;
            ssValues(j);
        }
    }
    else if(ui->choose_mode_4->isChecked()){
        int kol = ui->num->text().toInt();
        for (double i = 0; i < kol;i++){
            if (!isPainting) break;
            ssValues(rrand(MIN,MAX));
        }
    }

    if (emul->thisPort.isOpen()){
        ui->statusbar->showMessage("Построение графиков завершено");
        ui->stop->setDisabled(true);
    }
}

double User::rrand(double range_min, double range_max) {
    return double((double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min);
}

void User::ssValues(double value){    
    emul->setVoltage(value); // 1      DAC
    volt_x->append(value);    
    volt_y1->append(emul->getTestedValue()); // CONVCH Затем READ
    volt_y2->append(emul->getEtalonValue()); // ADC

    plotGraph1();
    plotGraph3();
    if (ui->showGraph2->isChecked()) plotGraph2();
}

void User::wait(int sec){
    QTime time;
    time.start();
    for(;time.elapsed() < sec*1000;){
        qApp->processEvents();
    }
}

void User::on_choose_mode_1_clicked(){
    ui->step->setEnabled(true);
    ui->num->setDisabled(true);
}

void User::on_choose_mode_2_clicked(){
    User::on_choose_mode_1_clicked();
}

void User::on_choose_mode_3_clicked(){
    User::on_choose_mode_1_clicked();
}

void User::on_choose_mode_4_clicked(){
    ui->step->setDisabled(true);
    ui->num->setEnabled(true);
}

void User::plotGraph1(){
    if (index1 == 0){
        ui->widget->addGraph();
        ui->widget->graph(0)->setPen(QColor(Qt::red)); //задаем цвет точки
        if (!ui->lineOnGraph->isChecked()){
            ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone); //убираем линии
            ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4)); //формируем вид точек
        }

        ui->widget->graph(0)->setName(legend+QDateTime::currentDateTime().toString("dd.MM.yyyy  HH:mm:ss"));
    }
    ui->widget->graph(0)->setData(*volt_x,*volt_y1);
    ui->widget->replot();
    index1++;


    isShowGraph1 = true;
}

void User::plotGraph2(){
    if (index2 == 0){
        ui->widget->addGraph();
        ui->widget->graph(1)->setPen(QColor(Qt::blue)); //задаем цвет точки
        if (!ui->lineOnGraph->isChecked()){
            ui->widget->graph(1)->setLineStyle(QCPGraph::lsNone); //убираем линии
            ui->widget->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4)); //формируем вид точек
        }

        ui->widget->graph(1)->setName("Встроенный АЦП");
        index2++;
    }
    ui->widget->graph(1)->setData(*volt_x,*volt_y2);
    ui->widget->replot();
    isShowGraph2 = true;
}

void User::plotGraph3(){
    if (index3 == 0){
        ui->widget_2->addGraph();
        ui->widget_2->graph(0)->setPen(QColor(Qt::red)); //задаем цвет точки

        if (!ui->lineOnGraph->isChecked()){
            ui->widget_2->graph(0)->setLineStyle(QCPGraph::lsNone); //убираем линии
            ui->widget_2->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4)); //формируем вид точек
        }

        ui->widget_2->graph(0)->setName("Зависимость тестируемого от эталонного напряжения");
        index3++;
    }
    ui->widget_2->graph(0)->setData(*volt_y1,*volt_y2);
    ui->widget_2->replot();
}

void User::on_stop_clicked()
{
    isPainting = false;
    ui->stop->setDisabled(true);
    ui->statusbar->showMessage("Построение графиков остановлено");    
}

void User::on_showGraph2_clicked()
{
    if (!isShowGraph1) return;
    if (ui->showGraph2->isChecked() && !isShowGraph2 && isShowGraph1){
        plotGraph2();
        ui->widget->replot();
    }
    else{
        if (ui->widget->graph(1)->visible() == false){
            ui->widget->graph(1)->setVisible(true);
            ui->widget->graph(1)->addToLegend();
            ui->widget->replot();
            return;
        }
        if (ui->widget->graph(1)->visible() == true){
            ui->widget->graph(1)->setVisible(false);
            ui->widget->graph(1)->removeFromLegend();
            ui->widget->replot();
        }
    }
}

void User::on_Search_clicked()
{
    ui->FoundedPort->clear();    
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){
        ui->FoundedPort->addItem(info.portName());        
    }
    emul->thisPort.setPortName(ui->FoundedPort->itemText(ui->FoundedPort->currentIndex()));
}

void User::on_FoundedPort_activated(const QString &arg1)
{
    emul->thisPort.setPortName(arg1);

}

void User::saveImage1(){
    QString directory = QFileDialog::getExistingDirectory(this,
                               tr("Выберите место для сохранения изображения"), QDir::currentPath());

    if (!directory.isEmpty()) {
        QString name = legend+QDateTime::currentDateTime().toString("dd_MM_yyyy HH_mm_ss");
        if (!legend.isEmpty()) directory.append("/"+name+".png");
        else {
            ui->statusbar->showMessage("Постройте график для сохранения");
            return;
        }

        if (ui->widget->savePng(directory)) {
            ui->statusbar->showMessage("График успешно сохранен");
        }
        else ui->statusbar->showMessage("График не сохранен. Повторите попытку");
    }

}

void User::saveImage2(){
    QString directory = QFileDialog::getExistingDirectory(this,
                               tr("Выберите место для сохранения изображения"), QDir::currentPath());

    if (!directory.isEmpty()) {
        QString name = legend+QDateTime::currentDateTime().toString("dd_MM_yyyy HH_mm_ss");
        if (!legend.isEmpty()) directory.append("/"+name+".png");
        else {
            ui->statusbar->showMessage("Постройте график для сохранения");
            return;
        }

        if (ui->widget_2->savePng(directory)) {
            ui->statusbar->showMessage("График успешно сохранен");
        }
        else ui->statusbar->showMessage("График не сохранен. Повторите попытку");

    }
}

void User::on_Connect_clicked()
{
    if (!emul->thisPort.isOpen())   {
        emul->ConnectPort();
        if (emul->thisPort.isOpen()){
            ui->statusbar->showMessage("Соединение установленно");
        }
        else{
            ui->statusbar->showMessage("Соединение не установленно");
        }
    }
    else {
        ui->statusbar->showMessage("Соединение уже установленно");
    }
}

void User::on_Disconnect_clicked()
{
    if (emul->thisPort.isOpen())   {
        emul->DisconnectPort();
        if (!emul->thisPort.isOpen()){
            ui->statusbar->showMessage("Разъединено успешно");
        }
        else{
            ui->statusbar->showMessage("Разъединение не удалось");
        }
    }
    else {
        ui->statusbar->showMessage("Уже разъединено");
    }
}
