#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) : QMainWindow(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);    
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->close();
}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
}
