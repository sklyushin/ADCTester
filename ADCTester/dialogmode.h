#ifndef DIALOGMODE_H
#define DIALOGMODE_H
#include "emulator.h"
#include "device.h"
#include <QWidget>
#include <QDir>

namespace Ui {
class DialogMode;
}

class DialogMode : public QWidget
{
    Q_OBJECT

public:
     DialogMode(QWidget *parent = 0);
    ~DialogMode();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DialogMode *ui;
};

#endif // DIALOGMODE_H
