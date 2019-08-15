/********************************************************************************
** Form generated from reading UI file 'dialogmode.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODE_H
#define UI_DIALOGMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogMode
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *DialogMode)
    {
        if (DialogMode->objectName().isEmpty())
            DialogMode->setObjectName(QStringLiteral("DialogMode"));
        DialogMode->setEnabled(true);
        DialogMode->resize(226, 153);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogMode->sizePolicy().hasHeightForWidth());
        DialogMode->setSizePolicy(sizePolicy);
        DialogMode->setMinimumSize(QSize(226, 153));
        DialogMode->setMaximumSize(QSize(226, 153));
        DialogMode->setFocusPolicy(Qt::NoFocus);
        DialogMode->setWindowOpacity(1);
        label = new QLabel(DialogMode);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(18, 33, 200, 13));
        pushButton = new QPushButton(DialogMode);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(73, 63, 75, 23));
        pushButton_2 = new QPushButton(DialogMode);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(73, 93, 75, 23));

        retranslateUi(DialogMode);

        QMetaObject::connectSlotsByName(DialogMode);
    } // setupUi

    void retranslateUi(QWidget *DialogMode)
    {
        DialogMode->setWindowTitle(QApplication::translate("DialogMode", "Form", 0));
        label->setText(QApplication::translate("DialogMode", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \321\200\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0));
        pushButton->setText(QApplication::translate("DialogMode", "\320\255\320\274\321\203\320\273\321\217\321\202\320\276\321\200", 0));
        pushButton_2->setText(QApplication::translate("DialogMode", "\320\243\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogMode: public Ui_DialogMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODE_H
