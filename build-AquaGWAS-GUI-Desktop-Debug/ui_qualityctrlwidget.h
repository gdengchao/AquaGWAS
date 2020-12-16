/********************************************************************************
** Form generated from reading UI file 'qualityctrlwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUALITYCTRLWIDGET_H
#define UI_QUALITYCTRLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QualityCtrlWidget
{
public:
    QFrame *frame;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *yesLinkageFilterRadioButton;
    QRadioButton *noLinkageFilterRadioButton;
    QFrame *frame_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLineEdit *winSizeLineEdit;
    QLabel *label_4;
    QLineEdit *r2ThrLineEdit;
    QLineEdit *stepLenLineEdit;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *QualityCtrlWidget)
    {
        if (QualityCtrlWidget->objectName().isEmpty())
            QualityCtrlWidget->setObjectName(QString::fromUtf8("QualityCtrlWidget"));
        QualityCtrlWidget->resize(400, 300);
        frame = new QFrame(QualityCtrlWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 39, 251, 41));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 231, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        yesLinkageFilterRadioButton = new QRadioButton(widget);
        yesLinkageFilterRadioButton->setObjectName(QString::fromUtf8("yesLinkageFilterRadioButton"));
        yesLinkageFilterRadioButton->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(yesLinkageFilterRadioButton);

        noLinkageFilterRadioButton = new QRadioButton(widget);
        noLinkageFilterRadioButton->setObjectName(QString::fromUtf8("noLinkageFilterRadioButton"));
        noLinkageFilterRadioButton->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(noLinkageFilterRadioButton);

        frame_2 = new QFrame(QualityCtrlWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(60, 80, 251, 101));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Sunken);
        widget1 = new QWidget(frame_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 10, 211, 81));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        winSizeLineEdit = new QLineEdit(widget1);
        winSizeLineEdit->setObjectName(QString::fromUtf8("winSizeLineEdit"));
        winSizeLineEdit->setMaximumSize(QSize(70, 16777215));
        winSizeLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(winSizeLineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        r2ThrLineEdit = new QLineEdit(widget1);
        r2ThrLineEdit->setObjectName(QString::fromUtf8("r2ThrLineEdit"));
        r2ThrLineEdit->setMaximumSize(QSize(70, 16777215));
        r2ThrLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r2ThrLineEdit, 2, 1, 1, 1);

        stepLenLineEdit = new QLineEdit(widget1);
        stepLenLineEdit->setObjectName(QString::fromUtf8("stepLenLineEdit"));
        stepLenLineEdit->setMaximumSize(QSize(70, 16777215));
        stepLenLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(stepLenLineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        frame->raise();
        frame_2->raise();
        label->raise();
        yesLinkageFilterRadioButton->raise();
        noLinkageFilterRadioButton->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        winSizeLineEdit->raise();
        stepLenLineEdit->raise();
        r2ThrLineEdit->raise();

        retranslateUi(QualityCtrlWidget);

        QMetaObject::connectSlotsByName(QualityCtrlWidget);
    } // setupUi

    void retranslateUi(QWidget *QualityCtrlWidget)
    {
        QualityCtrlWidget->setWindowTitle(QApplication::translate("QualityCtrlWidget", "Form", nullptr));
        label->setText(QApplication::translate("QualityCtrlWidget", "SNP linkage filter", nullptr));
        yesLinkageFilterRadioButton->setText(QApplication::translate("QualityCtrlWidget", "YES", nullptr));
        noLinkageFilterRadioButton->setText(QApplication::translate("QualityCtrlWidget", "NO", nullptr));
        winSizeLineEdit->setText(QApplication::translate("QualityCtrlWidget", "100", nullptr));
        label_4->setText(QApplication::translate("QualityCtrlWidget", "r2 threshold", nullptr));
        r2ThrLineEdit->setText(QApplication::translate("QualityCtrlWidget", "0.5", nullptr));
        stepLenLineEdit->setText(QApplication::translate("QualityCtrlWidget", "5", nullptr));
        label_2->setText(QApplication::translate("QualityCtrlWidget", "window size", nullptr));
        label_3->setText(QApplication::translate("QualityCtrlWidget", "step length", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QualityCtrlWidget: public Ui_QualityCtrlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUALITYCTRLWIDGET_H
