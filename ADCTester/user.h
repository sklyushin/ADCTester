#ifndef USER_H
#define USER_H

#include "controller.h"
#include <QMainWindow>
#include <QButtonGroup>
#include <QVector>
#include <QMouseEvent>

namespace Ui {
class User;
}

class User : public QMainWindow
{
    Q_OBJECT

public:
    explicit User(Controller *c);

    ~User();    

    void plotGraph1();

    void plotGraph2();

    void plotGraph3();    

    void wait(int sec);

    double rrand(double min, double max);

    void ssValues(double);

private:
    Controller *emul;

    double step;

    double MIN,MAX;

    bool correctData;

    int index1,index2,index3;

    bool isPainting;

    bool isShowGraph2;

    bool isShowGraph1;

    QVector<double> *volt_x,*volt_y1,*volt_y2;

    QString legend;

public slots:
    void on_send_clicked();    

    void saveImage1();

    void saveImage2();

private slots:
    void on_choose_mode_4_clicked();

    void on_stop_clicked();

    void on_showGraph2_clicked();

    void on_Search_clicked();

    void on_choose_mode_1_clicked();

    void on_choose_mode_2_clicked();

    void on_choose_mode_3_clicked();

    void on_FoundedPort_activated(const QString &arg1);    

//    void

    void on_Connect_clicked();

    void on_Disconnect_clicked();

private:
    Ui::User *ui;

};

#endif // USER_H
