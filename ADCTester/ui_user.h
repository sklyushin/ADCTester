/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QWidget *centralwidget;
    QCustomPlot *widget;
    QCustomPlot *widget_2;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *showGraph2;
    QRadioButton *dotOnGraph;
    QRadioButton *lineOnGraph;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Search;
    QPushButton *Connect;
    QVBoxLayout *verticalLayout;
    QComboBox *FoundedPort;
    QPushButton *Disconnect;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *send;
    QPushButton *stop;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *infoChannel_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *block_1;
    QRadioButton *block_2;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *block_3;
    QRadioButton *block_4;
    QFrame *line;
    QHBoxLayout *horizontalLayout_9;
    QLabel *infoChannel;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *channel_1;
    QRadioButton *channel_2;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *channel_3;
    QRadioButton *channel_4;
    QLabel *label_2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_10;
    QLabel *infoMode;
    QRadioButton *choose_mode_1;
    QRadioButton *choose_mode_2;
    QRadioButton *choose_mode_3;
    QRadioButton *choose_mode_4;
    QFrame *line_2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QLabel *infoStep_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *infoStep;
    QLabel *infoMIN;
    QLabel *infoMAX;
    QLabel *infoNum;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *step;
    QLineEdit *min;
    QLineEdit *max;
    QLineEdit *num;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QStringLiteral("User"));
        User->resize(1171, 512);
        User->setMinimumSize(QSize(1171, 465));
        User->setAcceptDrops(false);
        User->setStyleSheet(QStringLiteral(""));
        User->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(User);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setMinimumSize(QSize(1171, 0));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(10, 170, 570, 310));
        widget_2 = new QCustomPlot(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(590, 170, 570, 310));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(800, 140, 280, 20));
        QFont font;
        font.setItalic(true);
        label->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(471, 143, 221, 19));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        showGraph2 = new QCheckBox(layoutWidget);
        showGraph2->setObjectName(QStringLiteral("showGraph2"));

        horizontalLayout_3->addWidget(showGraph2);

        dotOnGraph = new QRadioButton(layoutWidget);
        dotOnGraph->setObjectName(QStringLiteral("dotOnGraph"));

        horizontalLayout_3->addWidget(dotOnGraph);

        lineOnGraph = new QRadioButton(layoutWidget);
        lineOnGraph->setObjectName(QStringLiteral("lineOnGraph"));

        horizontalLayout_3->addWidget(lineOnGraph);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(41, 10, 170, 153));
        verticalLayout_9 = new QVBoxLayout(layoutWidget1);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Search = new QPushButton(layoutWidget1);
        Search->setObjectName(QStringLiteral("Search"));

        verticalLayout_2->addWidget(Search);

        Connect = new QPushButton(layoutWidget1);
        Connect->setObjectName(QStringLiteral("Connect"));
        Connect->setEnabled(true);

        verticalLayout_2->addWidget(Connect);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        FoundedPort = new QComboBox(layoutWidget1);
        FoundedPort->setObjectName(QStringLiteral("FoundedPort"));

        verticalLayout->addWidget(FoundedPort);

        Disconnect = new QPushButton(layoutWidget1);
        Disconnect->setObjectName(QStringLiteral("Disconnect"));
        Disconnect->setEnabled(true);

        verticalLayout->addWidget(Disconnect);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_9->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        send = new QPushButton(layoutWidget1);
        send->setObjectName(QStringLiteral("send"));

        horizontalLayout_8->addWidget(send);

        stop = new QPushButton(layoutWidget1);
        stop->setObjectName(QStringLiteral("stop"));

        horizontalLayout_8->addWidget(stop);


        verticalLayout_9->addLayout(horizontalLayout_8);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(322, 11, 238, 113));
        verticalLayout_8 = new QVBoxLayout(layoutWidget2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        infoChannel_2 = new QLabel(layoutWidget2);
        infoChannel_2->setObjectName(QStringLiteral("infoChannel_2"));

        horizontalLayout_10->addWidget(infoChannel_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        block_1 = new QRadioButton(layoutWidget2);
        block_1->setObjectName(QStringLiteral("block_1"));

        horizontalLayout_4->addWidget(block_1);

        block_2 = new QRadioButton(layoutWidget2);
        block_2->setObjectName(QStringLiteral("block_2"));

        horizontalLayout_4->addWidget(block_2);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        block_3 = new QRadioButton(layoutWidget2);
        block_3->setObjectName(QStringLiteral("block_3"));

        horizontalLayout_6->addWidget(block_3);

        block_4 = new QRadioButton(layoutWidget2);
        block_4->setObjectName(QStringLiteral("block_4"));

        horizontalLayout_6->addWidget(block_4);


        verticalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout_10->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_10);

        line = new QFrame(layoutWidget2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        infoChannel = new QLabel(layoutWidget2);
        infoChannel->setObjectName(QStringLiteral("infoChannel"));

        horizontalLayout_9->addWidget(infoChannel);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        channel_1 = new QRadioButton(layoutWidget2);
        channel_1->setObjectName(QStringLiteral("channel_1"));

        horizontalLayout_5->addWidget(channel_1);

        channel_2 = new QRadioButton(layoutWidget2);
        channel_2->setObjectName(QStringLiteral("channel_2"));

        horizontalLayout_5->addWidget(channel_2);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        channel_3 = new QRadioButton(layoutWidget2);
        channel_3->setObjectName(QStringLiteral("channel_3"));

        horizontalLayout_7->addWidget(channel_3);

        channel_4 = new QRadioButton(layoutWidget2);
        channel_4->setObjectName(QStringLiteral("channel_4"));

        horizontalLayout_7->addWidget(channel_4);


        verticalLayout_6->addLayout(horizontalLayout_7);


        horizontalLayout_9->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_9);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1050, 86, 91, 16));
        label_2->setFont(font);
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(673, 10, 202, 107));
        verticalLayout_10 = new QVBoxLayout(layoutWidget3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        infoMode = new QLabel(layoutWidget3);
        infoMode->setObjectName(QStringLiteral("infoMode"));

        verticalLayout_10->addWidget(infoMode);

        choose_mode_1 = new QRadioButton(layoutWidget3);
        choose_mode_1->setObjectName(QStringLiteral("choose_mode_1"));

        verticalLayout_10->addWidget(choose_mode_1);

        choose_mode_2 = new QRadioButton(layoutWidget3);
        choose_mode_2->setObjectName(QStringLiteral("choose_mode_2"));

        verticalLayout_10->addWidget(choose_mode_2);

        choose_mode_3 = new QRadioButton(layoutWidget3);
        choose_mode_3->setObjectName(QStringLiteral("choose_mode_3"));

        verticalLayout_10->addWidget(choose_mode_3);

        choose_mode_4 = new QRadioButton(layoutWidget3);
        choose_mode_4->setObjectName(QStringLiteral("choose_mode_4"));

        verticalLayout_10->addWidget(choose_mode_4);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(858, 10, 16, 123));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(873, 10, 171, 123));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        infoStep_2 = new QLabel(layoutWidget4);
        infoStep_2->setObjectName(QStringLiteral("infoStep_2"));

        verticalLayout_5->addWidget(infoStep_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        infoStep = new QLabel(layoutWidget4);
        infoStep->setObjectName(QStringLiteral("infoStep"));

        verticalLayout_4->addWidget(infoStep);

        infoMIN = new QLabel(layoutWidget4);
        infoMIN->setObjectName(QStringLiteral("infoMIN"));

        verticalLayout_4->addWidget(infoMIN);

        infoMAX = new QLabel(layoutWidget4);
        infoMAX->setObjectName(QStringLiteral("infoMAX"));

        verticalLayout_4->addWidget(infoMAX);

        infoNum = new QLabel(layoutWidget4);
        infoNum->setObjectName(QStringLiteral("infoNum"));

        verticalLayout_4->addWidget(infoNum);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        step = new QLineEdit(layoutWidget4);
        step->setObjectName(QStringLiteral("step"));
        step->setAutoFillBackground(false);

        verticalLayout_3->addWidget(step);

        min = new QLineEdit(layoutWidget4);
        min->setObjectName(QStringLiteral("min"));

        verticalLayout_3->addWidget(min);

        max = new QLineEdit(layoutWidget4);
        max->setObjectName(QStringLiteral("max"));

        verticalLayout_3->addWidget(max);

        num = new QLineEdit(layoutWidget4);
        num->setObjectName(QStringLiteral("num"));

        verticalLayout_3->addWidget(num);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_2);

        User->setCentralWidget(centralwidget);
        menubar = new QMenuBar(User);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setEnabled(false);
        menubar->setGeometry(QRect(0, 0, 1171, 21));
        User->setMenuBar(menubar);
        statusbar = new QStatusBar(User);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setEnabled(true);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        statusbar->setFont(font1);
        statusbar->setAcceptDrops(true);
        User->setStatusBar(statusbar);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QMainWindow *User)
    {
        User->setWindowTitle(QApplication::translate("User", "MainWindow", 0));
        label->setText(QApplication::translate("User", "* \320\224\320\262\320\260\320\266\320\264\321\213 \320\272\320\273\320\270\320\272\320\275\320\270\321\202\320\265 \320\277\320\276 \320\263\321\200\320\260\321\204\320\270\320\272\321\203, \321\207\321\202\320\276\320\261\321\213 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\265\320\263\320\276", 0));
        showGraph2->setText(QApplication::translate("User", "U\321\215\321\202\320\260\320\273\320\276\320\275.(U\320\262\321\205.)", 0));
        dotOnGraph->setText(QApplication::translate("User", "\320\242\320\276\321\207\320\272\320\270", 0));
        lineOnGraph->setText(QApplication::translate("User", "\320\233\320\270\320\275\320\270\320\270", 0));
        Search->setText(QApplication::translate("User", "\320\237\320\276\320\270\321\201\320\272", 0));
        Connect->setText(QApplication::translate("User", "\320\241\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0));
        Disconnect->setText(QApplication::translate("User", "\320\240\320\260\320\267\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0));
        send->setText(QApplication::translate("User", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", 0));
        stop->setText(QApplication::translate("User", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        infoChannel_2->setText(QApplication::translate("User", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\261\320\273\320\276\320\272 \320\220\320\246\320\237:", 0));
        block_1->setText(QApplication::translate("User", "\320\221\320\273\320\276\320\272 1", 0));
        block_2->setText(QApplication::translate("User", "\320\221\320\273\320\276\320\272 2", 0));
        block_3->setText(QApplication::translate("User", "\320\221\320\273\320\276\320\272 3", 0));
        block_4->setText(QApplication::translate("User", "\320\221\320\273\320\276\320\272 4", 0));
        infoChannel->setText(QApplication::translate("User", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\320\260\320\275\320\260\320\273:", 0));
        channel_1->setText(QApplication::translate("User", "\320\232\320\260\320\275\320\260\320\273 1", 0));
        channel_2->setText(QApplication::translate("User", "\320\232\320\260\320\275\320\260\320\273 2", 0));
        channel_3->setText(QApplication::translate("User", "\320\232\320\260\320\275\320\260\320\273 3", 0));
        channel_4->setText(QApplication::translate("User", "\320\232\320\260\320\275\320\260\320\273 4", 0));
        label_2->setText(QApplication::translate("User", "(\320\275\320\265 \320\261\320\276\320\273\320\265\320\265 3.3 \320\222)", 0));
        infoMode->setText(QApplication::translate("User", "\320\240\320\265\320\266\320\270\320\274 \320\277\321\200\320\276\321\205\320\276\320\264\320\260 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\271:", 0));
        choose_mode_1->setText(QApplication::translate("User", "\320\276\321\202 MIN \320\264\320\276 MAX", 0));
        choose_mode_2->setText(QApplication::translate("User", "\320\276\321\202 MAX \320\264\320\276 MIN", 0));
        choose_mode_3->setText(QApplication::translate("User", "\320\276\321\202 MIN \320\264\320\276 MAX \320\270 \320\276\321\202 MAX \320\264\320\276 MIN", 0));
        choose_mode_4->setText(QApplication::translate("User", "RAND ( MIN - MAX )", 0));
        infoStep_2->setText(QApplication::translate("User", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265:", 0));
        infoStep->setText(QApplication::translate("User", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \321\210\320\260\320\263, \320\222:", 0));
        infoMIN->setText(QApplication::translate("User", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 MIN, \320\222:", 0));
        infoMAX->setText(QApplication::translate("User", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 MAX, \320\222:", 0));
        infoNum->setText(QApplication::translate("User", "\320\232\320\276\320\273-\320\262\320\276 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271:", 0));
        step->setText(QString());
        min->setInputMask(QString());
        min->setText(QString());
        max->setText(QString());
        num->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
