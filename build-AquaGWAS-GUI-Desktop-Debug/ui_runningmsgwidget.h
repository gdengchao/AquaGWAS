/********************************************************************************
** Form generated from reading UI file 'runningmsgwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNNINGMSGWIDGET_H
#define UI_RUNNINGMSGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RunningMsgWidget
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *RunningMsgWidget)
    {
        if (RunningMsgWidget->objectName().isEmpty())
            RunningMsgWidget->setObjectName(QString::fromUtf8("RunningMsgWidget"));
        RunningMsgWidget->resize(549, 419);
        gridLayout = new QGridLayout(RunningMsgWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(RunningMsgWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        retranslateUi(RunningMsgWidget);

        QMetaObject::connectSlotsByName(RunningMsgWidget);
    } // setupUi

    void retranslateUi(QWidget *RunningMsgWidget)
    {
        RunningMsgWidget->setWindowTitle(QApplication::translate("RunningMsgWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RunningMsgWidget: public Ui_RunningMsgWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNNINGMSGWIDGET_H
