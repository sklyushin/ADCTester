#-------------------------------------------------
#
# Project created by Петров Антон и Клюшин Сергей. МП-21
#
#-------------------------------------------------

QT       += core gui
QT      += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = ACPTester
TEMPLATE = app


SOURCES += main.cpp\
    emulator.cpp \
    user.cpp \
    qcustomplot.cpp\
    device.cpp \
    dialogmode.cpp

HEADERS  += controller.h \
    emulator.h \
    user.h \
    qcustomplot.h \
    device.h \
    dialogmode.h

FORMS += \
    user.ui \
    dialogmode.ui
