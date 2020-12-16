/********************************************************************************
** Form generated from reading UI file 'gemmaparamwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEMMAPARAMWIDGET_H
#define UI_GEMMAPARAMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GemmaParamWidget
{
public:
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QRadioButton *noFamRadioButton;
    QLabel *completeFamLabel;
    QRadioButton *yesFamRadioButton;
    QFrame *matrixLine;
    QGridLayout *gridLayout_2;
    QRadioButton *yesKinRadioButton;
    QRadioButton *stdRelatRadioButton;
    QLabel *label_4;
    QLabel *label;
    QRadioButton *centRelatRadioButton;
    QRadioButton *noKinRadioButton;
    QFrame *lmmTestLine;
    QGridLayout *gridLayout;
    QRadioButton *waldTestRadioButton;
    QLabel *lmmTestLabel;
    QRadioButton *likelihoodRadioButton;
    QRadioButton *allTestRadioButton;
    QRadioButton *scoreTestRadioButton;
    QFrame *bslmmLine;
    QGridLayout *gridLayout_3;
    QLabel *bslmmModelLabel;
    QRadioButton *stdLinearBslmmRadioButton;
    QRadioButton *ridgeBslmmRadioButton;
    QRadioButton *probitBslmmRadioButton;
    QFrame *correctionLine;
    QGridLayout *gridLayout_5;
    QRadioButton *stepDownCorrectRadioButton;
    QRadioButton *fdrCorrectRadioButton;
    QLabel *correctionLabel;
    QRadioButton *bonfCorrectRadioButton;
    QRadioButton *noCorrectRadioButton;

    void setupUi(QWidget *GemmaParamWidget)
    {
        if (GemmaParamWidget->objectName().isEmpty())
            GemmaParamWidget->setObjectName(QString::fromUtf8("GemmaParamWidget"));
        GemmaParamWidget->resize(379, 371);
        label_2 = new QLabel(GemmaParamWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 120, 16, 17));
        widget = new QWidget(GemmaParamWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(28, 30, 319, 303));
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        noFamRadioButton = new QRadioButton(widget);
        noFamRadioButton->setObjectName(QString::fromUtf8("noFamRadioButton"));
        noFamRadioButton->setMinimumSize(QSize(60, 0));

        gridLayout_4->addWidget(noFamRadioButton, 0, 2, 1, 1);

        completeFamLabel = new QLabel(widget);
        completeFamLabel->setObjectName(QString::fromUtf8("completeFamLabel"));

        gridLayout_4->addWidget(completeFamLabel, 0, 0, 1, 1);

        yesFamRadioButton = new QRadioButton(widget);
        yesFamRadioButton->setObjectName(QString::fromUtf8("yesFamRadioButton"));
        yesFamRadioButton->setMinimumSize(QSize(60, 0));

        gridLayout_4->addWidget(yesFamRadioButton, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        matrixLine = new QFrame(widget);
        matrixLine->setObjectName(QString::fromUtf8("matrixLine"));
        matrixLine->setFrameShape(QFrame::HLine);
        matrixLine->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(matrixLine, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        yesKinRadioButton = new QRadioButton(widget);
        yesKinRadioButton->setObjectName(QString::fromUtf8("yesKinRadioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(yesKinRadioButton->sizePolicy().hasHeightForWidth());
        yesKinRadioButton->setSizePolicy(sizePolicy);
        yesKinRadioButton->setMinimumSize(QSize(60, 0));
        yesKinRadioButton->setMaximumSize(QSize(16777215, 16777215));
        yesKinRadioButton->setChecked(false);
        yesKinRadioButton->setAutoExclusive(false);

        gridLayout_2->addWidget(yesKinRadioButton, 0, 2, 1, 2);

        stdRelatRadioButton = new QRadioButton(widget);
        stdRelatRadioButton->setObjectName(QString::fromUtf8("stdRelatRadioButton"));
        sizePolicy.setHeightForWidth(stdRelatRadioButton->sizePolicy().hasHeightForWidth());
        stdRelatRadioButton->setSizePolicy(sizePolicy);
        stdRelatRadioButton->setMinimumSize(QSize(60, 0));
        stdRelatRadioButton->setMaximumSize(QSize(16777215, 16777215));
        stdRelatRadioButton->setChecked(false);
        stdRelatRadioButton->setAutoExclusive(false);

        gridLayout_2->addWidget(stdRelatRadioButton, 1, 3, 1, 2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        centRelatRadioButton = new QRadioButton(widget);
        centRelatRadioButton->setObjectName(QString::fromUtf8("centRelatRadioButton"));
        sizePolicy.setHeightForWidth(centRelatRadioButton->sizePolicy().hasHeightForWidth());
        centRelatRadioButton->setSizePolicy(sizePolicy);
        centRelatRadioButton->setMinimumSize(QSize(60, 0));
        centRelatRadioButton->setMaximumSize(QSize(16777215, 16777215));
        centRelatRadioButton->setAutoExclusive(false);

        gridLayout_2->addWidget(centRelatRadioButton, 1, 1, 1, 2);

        noKinRadioButton = new QRadioButton(widget);
        noKinRadioButton->setObjectName(QString::fromUtf8("noKinRadioButton"));
        sizePolicy.setHeightForWidth(noKinRadioButton->sizePolicy().hasHeightForWidth());
        noKinRadioButton->setSizePolicy(sizePolicy);
        noKinRadioButton->setMinimumSize(QSize(60, 0));
        noKinRadioButton->setMaximumSize(QSize(16777215, 16777215));
        noKinRadioButton->setAutoExclusive(false);

        gridLayout_2->addWidget(noKinRadioButton, 0, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 2, 0, 1, 1);

        lmmTestLine = new QFrame(widget);
        lmmTestLine->setObjectName(QString::fromUtf8("lmmTestLine"));
        lmmTestLine->setFrameShape(QFrame::HLine);
        lmmTestLine->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(lmmTestLine, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        waldTestRadioButton = new QRadioButton(widget);
        waldTestRadioButton->setObjectName(QString::fromUtf8("waldTestRadioButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(waldTestRadioButton->sizePolicy().hasHeightForWidth());
        waldTestRadioButton->setSizePolicy(sizePolicy1);
        waldTestRadioButton->setMinimumSize(QSize(60, 0));
        waldTestRadioButton->setMaximumSize(QSize(60, 16777215));
        waldTestRadioButton->setChecked(false);
        waldTestRadioButton->setAutoExclusive(false);

        gridLayout->addWidget(waldTestRadioButton, 0, 1, 1, 1);

        lmmTestLabel = new QLabel(widget);
        lmmTestLabel->setObjectName(QString::fromUtf8("lmmTestLabel"));

        gridLayout->addWidget(lmmTestLabel, 0, 0, 1, 1);

        likelihoodRadioButton = new QRadioButton(widget);
        likelihoodRadioButton->setObjectName(QString::fromUtf8("likelihoodRadioButton"));
        sizePolicy.setHeightForWidth(likelihoodRadioButton->sizePolicy().hasHeightForWidth());
        likelihoodRadioButton->setSizePolicy(sizePolicy);
        likelihoodRadioButton->setMinimumSize(QSize(60, 0));
        likelihoodRadioButton->setMaximumSize(QSize(16777215, 16777215));
        likelihoodRadioButton->setAutoExclusive(false);

        gridLayout->addWidget(likelihoodRadioButton, 0, 2, 1, 2);

        allTestRadioButton = new QRadioButton(widget);
        allTestRadioButton->setObjectName(QString::fromUtf8("allTestRadioButton"));
        allTestRadioButton->setAutoExclusive(false);

        gridLayout->addWidget(allTestRadioButton, 1, 2, 1, 1);

        scoreTestRadioButton = new QRadioButton(widget);
        scoreTestRadioButton->setObjectName(QString::fromUtf8("scoreTestRadioButton"));
        scoreTestRadioButton->setAutoExclusive(false);

        gridLayout->addWidget(scoreTestRadioButton, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 4, 0, 1, 1);

        bslmmLine = new QFrame(widget);
        bslmmLine->setObjectName(QString::fromUtf8("bslmmLine"));
        bslmmLine->setFrameShape(QFrame::HLine);
        bslmmLine->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(bslmmLine, 5, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        bslmmModelLabel = new QLabel(widget);
        bslmmModelLabel->setObjectName(QString::fromUtf8("bslmmModelLabel"));

        gridLayout_3->addWidget(bslmmModelLabel, 0, 0, 1, 1);

        stdLinearBslmmRadioButton = new QRadioButton(widget);
        stdLinearBslmmRadioButton->setObjectName(QString::fromUtf8("stdLinearBslmmRadioButton"));

        gridLayout_3->addWidget(stdLinearBslmmRadioButton, 0, 1, 1, 1);

        ridgeBslmmRadioButton = new QRadioButton(widget);
        ridgeBslmmRadioButton->setObjectName(QString::fromUtf8("ridgeBslmmRadioButton"));

        gridLayout_3->addWidget(ridgeBslmmRadioButton, 1, 1, 1, 2);

        probitBslmmRadioButton = new QRadioButton(widget);
        probitBslmmRadioButton->setObjectName(QString::fromUtf8("probitBslmmRadioButton"));

        gridLayout_3->addWidget(probitBslmmRadioButton, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 6, 0, 1, 1);

        correctionLine = new QFrame(widget);
        correctionLine->setObjectName(QString::fromUtf8("correctionLine"));
        correctionLine->setFrameShape(QFrame::HLine);
        correctionLine->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(correctionLine, 7, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        stepDownCorrectRadioButton = new QRadioButton(widget);
        stepDownCorrectRadioButton->setObjectName(QString::fromUtf8("stepDownCorrectRadioButton"));
        sizePolicy.setHeightForWidth(stepDownCorrectRadioButton->sizePolicy().hasHeightForWidth());
        stepDownCorrectRadioButton->setSizePolicy(sizePolicy);
        stepDownCorrectRadioButton->setMinimumSize(QSize(60, 0));
        stepDownCorrectRadioButton->setMaximumSize(QSize(16777215, 16777215));
        stepDownCorrectRadioButton->setAutoExclusive(false);

        gridLayout_5->addWidget(stepDownCorrectRadioButton, 0, 2, 1, 2);

        fdrCorrectRadioButton = new QRadioButton(widget);
        fdrCorrectRadioButton->setObjectName(QString::fromUtf8("fdrCorrectRadioButton"));
        fdrCorrectRadioButton->setAutoExclusive(false);

        gridLayout_5->addWidget(fdrCorrectRadioButton, 1, 1, 1, 1);

        correctionLabel = new QLabel(widget);
        correctionLabel->setObjectName(QString::fromUtf8("correctionLabel"));

        gridLayout_5->addWidget(correctionLabel, 0, 0, 1, 1);

        bonfCorrectRadioButton = new QRadioButton(widget);
        bonfCorrectRadioButton->setObjectName(QString::fromUtf8("bonfCorrectRadioButton"));
        bonfCorrectRadioButton->setAutoExclusive(false);

        gridLayout_5->addWidget(bonfCorrectRadioButton, 1, 2, 1, 1);

        noCorrectRadioButton = new QRadioButton(widget);
        noCorrectRadioButton->setObjectName(QString::fromUtf8("noCorrectRadioButton"));
        sizePolicy1.setHeightForWidth(noCorrectRadioButton->sizePolicy().hasHeightForWidth());
        noCorrectRadioButton->setSizePolicy(sizePolicy1);
        noCorrectRadioButton->setMinimumSize(QSize(60, 0));
        noCorrectRadioButton->setMaximumSize(QSize(60, 16777215));
        noCorrectRadioButton->setChecked(false);
        noCorrectRadioButton->setAutoExclusive(false);

        gridLayout_5->addWidget(noCorrectRadioButton, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 8, 0, 1, 1);


        retranslateUi(GemmaParamWidget);

        QMetaObject::connectSlotsByName(GemmaParamWidget);
    } // setupUi

    void retranslateUi(QWidget *GemmaParamWidget)
    {
        GemmaParamWidget->setWindowTitle(QApplication::translate("GemmaParamWidget", "Form", nullptr));
        label_2->setText(QString());
        noFamRadioButton->setText(QApplication::translate("GemmaParamWidget", "NO", nullptr));
        completeFamLabel->setText(QApplication::translate("GemmaParamWidget", "Complete fam file         ", nullptr));
        yesFamRadioButton->setText(QApplication::translate("GemmaParamWidget", "YES", nullptr));
        yesKinRadioButton->setText(QApplication::translate("GemmaParamWidget", "YES", nullptr));
        stdRelatRadioButton->setText(QApplication::translate("GemmaParamWidget", "Standardized", nullptr));
        label_4->setText(QApplication::translate("GemmaParamWidget", "Matrix type      ", nullptr));
        label->setText(QApplication::translate("GemmaParamWidget", "Relatedness matrix       ", nullptr));
        centRelatRadioButton->setText(QApplication::translate("GemmaParamWidget", "Centered", nullptr));
        noKinRadioButton->setText(QApplication::translate("GemmaParamWidget", "NO", nullptr));
        waldTestRadioButton->setText(QApplication::translate("GemmaParamWidget", "Wald", nullptr));
        lmmTestLabel->setText(QApplication::translate("GemmaParamWidget", "LMM Test         ", nullptr));
        likelihoodRadioButton->setText(QApplication::translate("GemmaParamWidget", "likelihood ratio", nullptr));
        allTestRadioButton->setText(QApplication::translate("GemmaParamWidget", "all test", nullptr));
        scoreTestRadioButton->setText(QApplication::translate("GemmaParamWidget", "score", nullptr));
        bslmmModelLabel->setText(QApplication::translate("GemmaParamWidget", "BSLMM model", nullptr));
        stdLinearBslmmRadioButton->setText(QApplication::translate("GemmaParamWidget", "Std linear", nullptr));
        ridgeBslmmRadioButton->setText(QApplication::translate("GemmaParamWidget", "Ridge regression", nullptr));
        probitBslmmRadioButton->setText(QApplication::translate("GemmaParamWidget", "Probit", nullptr));
        stepDownCorrectRadioButton->setText(QApplication::translate("GemmaParamWidget", "Step-Down(Holm)", nullptr));
        fdrCorrectRadioButton->setText(QApplication::translate("GemmaParamWidget", "FDR(BH)", nullptr));
        correctionLabel->setText(QApplication::translate("GemmaParamWidget", "Correction", nullptr));
        bonfCorrectRadioButton->setText(QApplication::translate("GemmaParamWidget", "Bonferroni", nullptr));
        noCorrectRadioButton->setText(QApplication::translate("GemmaParamWidget", "NO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GemmaParamWidget: public Ui_GemmaParamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEMMAPARAMWIDGET_H
