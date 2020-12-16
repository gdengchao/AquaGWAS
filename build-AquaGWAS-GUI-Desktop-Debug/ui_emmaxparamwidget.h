/********************************************************************************
** Form generated from reading UI file 'emmaxparamwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMMAXPARAMWIDGET_H
#define UI_EMMAXPARAMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmmaxParamWidget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QFrame *line_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *yesKinRadioButton;
    QRadioButton *noKinRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QRadioButton *ibsRadioButton;
    QRadioButton *bnRadioButton;
    QFrame *line;
    QGridLayout *gridLayout_5;
    QLabel *correctionLabel;
    QRadioButton *noCorrectRadioButton;
    QRadioButton *stepDownCorrectRadioButton;
    QRadioButton *fdrCorrectRadioButton;
    QRadioButton *bonfCorrectRadioButton;

    void setupUi(QWidget *EmmaxParamWidget)
    {
        if (EmmaxParamWidget->objectName().isEmpty())
            EmmaxParamWidget->setObjectName(QString::fromUtf8("EmmaxParamWidget"));
        EmmaxParamWidget->resize(400, 300);
        widget = new QWidget(EmmaxParamWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 30, 261, 138));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        yesKinRadioButton = new QRadioButton(widget);
        yesKinRadioButton->setObjectName(QString::fromUtf8("yesKinRadioButton"));
        yesKinRadioButton->setMinimumSize(QSize(60, 0));
        yesKinRadioButton->setMaximumSize(QSize(60, 16777215));
        yesKinRadioButton->setChecked(false);
        yesKinRadioButton->setAutoExclusive(false);

        horizontalLayout->addWidget(yesKinRadioButton);

        noKinRadioButton = new QRadioButton(widget);
        noKinRadioButton->setObjectName(QString::fromUtf8("noKinRadioButton"));
        noKinRadioButton->setMinimumSize(QSize(60, 0));
        noKinRadioButton->setMaximumSize(QSize(60, 16777215));
        noKinRadioButton->setAutoExclusive(false);

        horizontalLayout->addWidget(noKinRadioButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        ibsRadioButton = new QRadioButton(widget);
        ibsRadioButton->setObjectName(QString::fromUtf8("ibsRadioButton"));
        ibsRadioButton->setMinimumSize(QSize(60, 0));
        ibsRadioButton->setMaximumSize(QSize(60, 16777215));
        ibsRadioButton->setAutoExclusive(false);

        horizontalLayout_2->addWidget(ibsRadioButton);

        bnRadioButton = new QRadioButton(widget);
        bnRadioButton->setObjectName(QString::fromUtf8("bnRadioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bnRadioButton->sizePolicy().hasHeightForWidth());
        bnRadioButton->setSizePolicy(sizePolicy);
        bnRadioButton->setMinimumSize(QSize(60, 0));
        bnRadioButton->setMaximumSize(QSize(60, 16777215));
        bnRadioButton->setChecked(false);
        bnRadioButton->setAutoExclusive(false);

        horizontalLayout_2->addWidget(bnRadioButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        correctionLabel = new QLabel(widget);
        correctionLabel->setObjectName(QString::fromUtf8("correctionLabel"));

        gridLayout_5->addWidget(correctionLabel, 0, 0, 1, 1);

        noCorrectRadioButton = new QRadioButton(widget);
        noCorrectRadioButton->setObjectName(QString::fromUtf8("noCorrectRadioButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(noCorrectRadioButton->sizePolicy().hasHeightForWidth());
        noCorrectRadioButton->setSizePolicy(sizePolicy1);
        noCorrectRadioButton->setMinimumSize(QSize(60, 0));
        noCorrectRadioButton->setMaximumSize(QSize(60, 16777215));
        noCorrectRadioButton->setChecked(false);
        noCorrectRadioButton->setAutoExclusive(false);

        gridLayout_5->addWidget(noCorrectRadioButton, 0, 1, 1, 1);

        stepDownCorrectRadioButton = new QRadioButton(widget);
        stepDownCorrectRadioButton->setObjectName(QString::fromUtf8("stepDownCorrectRadioButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stepDownCorrectRadioButton->sizePolicy().hasHeightForWidth());
        stepDownCorrectRadioButton->setSizePolicy(sizePolicy2);
        stepDownCorrectRadioButton->setMinimumSize(QSize(60, 0));
        stepDownCorrectRadioButton->setMaximumSize(QSize(16777215, 16777215));
        stepDownCorrectRadioButton->setAutoExclusive(false);

        gridLayout_5->addWidget(stepDownCorrectRadioButton, 0, 2, 1, 2);

        fdrCorrectRadioButton = new QRadioButton(widget);
        fdrCorrectRadioButton->setObjectName(QString::fromUtf8("fdrCorrectRadioButton"));
        fdrCorrectRadioButton->setAutoExclusive(false);

        gridLayout_5->addWidget(fdrCorrectRadioButton, 1, 1, 1, 1);

        bonfCorrectRadioButton = new QRadioButton(widget);
        bonfCorrectRadioButton->setObjectName(QString::fromUtf8("bonfCorrectRadioButton"));
        bonfCorrectRadioButton->setAutoExclusive(false);

        gridLayout_5->addWidget(bonfCorrectRadioButton, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout_5, 3, 0, 1, 1);


        retranslateUi(EmmaxParamWidget);

        QMetaObject::connectSlotsByName(EmmaxParamWidget);
    } // setupUi

    void retranslateUi(QWidget *EmmaxParamWidget)
    {
        EmmaxParamWidget->setWindowTitle(QApplication::translate("EmmaxParamWidget", "Form", nullptr));
        label->setText(QApplication::translate("EmmaxParamWidget", "Make kinship auto", nullptr));
        yesKinRadioButton->setText(QApplication::translate("EmmaxParamWidget", "YES", nullptr));
        noKinRadioButton->setText(QApplication::translate("EmmaxParamWidget", "NO", nullptr));
        label_2->setText(QApplication::translate("EmmaxParamWidget", "Kinship matrix", nullptr));
        ibsRadioButton->setText(QApplication::translate("EmmaxParamWidget", "IBS", nullptr));
        bnRadioButton->setText(QApplication::translate("EmmaxParamWidget", "BN ", nullptr));
        correctionLabel->setText(QApplication::translate("EmmaxParamWidget", "Correction", nullptr));
        noCorrectRadioButton->setText(QApplication::translate("EmmaxParamWidget", "NO", nullptr));
        stepDownCorrectRadioButton->setText(QApplication::translate("EmmaxParamWidget", "Step-Down", nullptr));
        fdrCorrectRadioButton->setText(QApplication::translate("EmmaxParamWidget", "FDR", nullptr));
        bonfCorrectRadioButton->setText(QApplication::translate("EmmaxParamWidget", "Bonferroni", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmmaxParamWidget: public Ui_EmmaxParamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMMAXPARAMWIDGET_H
