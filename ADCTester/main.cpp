#include <QApplication>
#include "dialogmode.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DialogMode d;
    d.show();

    return a.exec();
}
