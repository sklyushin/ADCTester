#include "dialogmode.h"
#include "ui_dialogmode.h"
#include "user.h"

DialogMode::DialogMode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogMode)
{
    ui->setupUi(this);
    this->window()->setWindowTitle("Режим");
    this->setWindowIcon(QIcon(QDir::currentPath()+"/icon1.png"));
}

DialogMode::~DialogMode()
{
    delete ui;
}

void DialogMode::on_pushButton_clicked()
{
    this->close();
    Controller *emulator = new Emulator();
    User *user = new User(emulator);
    user->show();
}

void DialogMode::on_pushButton_2_clicked()
{
    this->close();
    Controller *emulator = new Device();
    User *user = new User(emulator);
    user->show();
}
