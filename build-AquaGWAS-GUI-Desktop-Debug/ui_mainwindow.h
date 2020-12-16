/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mtoolbutton.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label_29;
    QFrame *frame_11;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_40;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *projectNameLineEdit;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_36;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *outdirLineEdit;
    QPushButton *outdirBrowButton;
    QWidget *association;
    QFrame *frame_12;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QPushButton *detailPushButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QComboBox *toolComboBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QComboBox *modelComboBox;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_13;
    QPushButton *qualCtrlDetailPushButton;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *mafRadioButton;
    QDoubleSpinBox *mafDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mindRadioButton;
    QDoubleSpinBox *mindDoubleSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *genoRadioButton;
    QDoubleSpinBox *genoDoubleSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout;
    QLabel *label_24;
    QListWidget *selectedPhenoListWidget;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QPushButton *selectPhenoButton;
    QPushButton *excludePhenoButton;
    QPushButton *selectAllPhenoButton;
    QPushButton *excludeAllPhenoButton;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_23;
    QListWidget *excludedPhenoListWidget;
    QLabel *label_9;
    QFrame *line;
    QPushButton *runGwasButton;
    QLabel *label_44;
    QPushButton *assoc_cmdButton;
    QWidget *plot;
    QFrame *frame_6;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_18;
    QLineEdit *gwBaseLineEdit;
    QLabel *label_19;
    QLineEdit *gwExpoLineEdit;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_38;
    QLineEdit *sgBaseLineEdit;
    QLabel *label_39;
    QLineEdit *sgExpoLineEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *drawManPushButton;
    QFrame *frame_7;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_18;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *drawQQPushButton;
    QFrame *frame_8;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_20;
    QLineEdit *qqmanGwasResultLineEdit;
    QPushButton *qqmanGwasReultBrowButton;
    QWidget *pca_ld;
    QLabel *label_21;
    QLabel *label_26;
    QFrame *frame_4;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_22;
    QLineEdit *nPCsLineEdit;
    QLabel *label_25;
    QLineEdit *nThreadsLineEdit;
    QComboBox *pcaToolComboBox;
    QFrame *frame_5;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_27;
    QRadioButton *yesLDByFamRadioButton;
    QRadioButton *noLDByFamRadioButton;
    QComboBox *pcaToolComboBox_2;
    QPushButton *pcaRunPushButton;
    QPushButton *ldRunPushButton;
    QPushButton *pca_ld_cmdButton;
    QWidget *tab;
    QLabel *label_35;
    QFrame *frame;
    QWidget *layoutWidget8;
    QGridLayout *gridLayout_7;
    QLabel *label_33;
    QLineEdit *avinFileLineEdit;
    QPushButton *avinFileBrowButton;
    QLabel *label_30;
    QLineEdit *refGeneFileLineEdit;
    QPushButton *refGeneFileBrowButton;
    QLabel *label_34;
    QLineEdit *refSeqFileLineEdit;
    QPushButton *refSeqFileBrowButton;
    QFrame *frame_2;
    QWidget *layoutWidget9;
    QGridLayout *gridLayout_5;
    QLineEdit *annoPvalLineEdit;
    QLabel *label_43;
    QLabel *label_41;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_31;
    QLineEdit *annoThBaseLineEdit;
    QLabel *label_32;
    QLineEdit *annoThExpoLineEdit;
    QPushButton *annoStepPushButton;
    QPushButton *annoPvalBrowButton;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_3;
    QWidget *layoutWidget10;
    QGridLayout *gridLayout_6;
    QLineEdit *snpPosFileLineEdit;
    QLabel *label_42;
    QPushButton *snpPosFileFileBrowButton;
    QLabel *label_45;
    QLineEdit *funcAnnoRefFileLineEdit;
    QPushButton *funcAnnoRefFileBrowButton;
    QPushButton *annotationRunButton;
    QPushButton *annotation_cmdButton;
    QFrame *frame_10;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    MToolButton *pheFileToolButton;
    QLabel *pheFileLabel;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    MToolButton *mapFileToolButton;
    QLabel *mapFileLabel;
    QSpacerItem *verticalSpacer_11;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    MToolButton *genoFileToolButton;
    QLabel *genoFileLabel;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_14;
    MToolButton *covarFileToolButton;
    QLabel *covarFileLabel;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_17;
    MToolButton *kinFileToolButton;
    QLabel *kinFileLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(805, 587);
        MainWindow->setMinimumSize(QSize(805, 587));
        MainWindow->setMaximumSize(QSize(805, 587));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/images/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(170, 20, 581, 501));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        tabWidget->setFont(font1);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(20, 40, 321, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_29->setFont(font2);
        frame_11 = new QFrame(tab_2);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(20, 100, 511, 231));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_11);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 491, 200));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(layoutWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font3.setPointSize(11);
        font3.setItalic(false);
        label_40->setFont(font3);

        verticalLayout_9->addWidget(label_40);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        projectNameLineEdit = new QLineEdit(layoutWidget);
        projectNameLineEdit->setObjectName(QString::fromUtf8("projectNameLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(projectNameLineEdit->sizePolicy().hasHeightForWidth());
        projectNameLineEdit->setSizePolicy(sizePolicy1);
        projectNameLineEdit->setMinimumSize(QSize(446, 0));
        projectNameLineEdit->setMaximumSize(QSize(16777215, 35));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font4.setPointSize(10);
        font4.setItalic(false);
        projectNameLineEdit->setFont(font4);

        horizontalLayout_20->addWidget(projectNameLineEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_7);


        verticalLayout_9->addLayout(horizontalLayout_20);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_9->addItem(verticalSpacer_4);

        label_36 = new QLabel(layoutWidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setFont(font3);

        verticalLayout_9->addWidget(label_36);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        outdirLineEdit = new QLineEdit(layoutWidget);
        outdirLineEdit->setObjectName(QString::fromUtf8("outdirLineEdit"));
        sizePolicy1.setHeightForWidth(outdirLineEdit->sizePolicy().hasHeightForWidth());
        outdirLineEdit->setSizePolicy(sizePolicy1);
        outdirLineEdit->setMaximumSize(QSize(16777215, 35));
        outdirLineEdit->setFont(font4);
        outdirLineEdit->setLayoutDirection(Qt::LeftToRight);
        outdirLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        outdirLineEdit->setReadOnly(false);

        horizontalLayout_18->addWidget(outdirLineEdit);

        outdirBrowButton = new QPushButton(layoutWidget);
        outdirBrowButton->setObjectName(QString::fromUtf8("outdirBrowButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(outdirBrowButton->sizePolicy().hasHeightForWidth());
        outdirBrowButton->setSizePolicy(sizePolicy2);
        outdirBrowButton->setMaximumSize(QSize(35, 35));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        outdirBrowButton->setFont(font5);
        outdirBrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        outdirBrowButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(255, 255, 255, 255))//\350\277\231\346\230\257\346\237\220\344\270\252\346\270\220\345\217\230\346\240\267\345\274\217\n"
"\n"
"border-radius:5px;//\350\277\231\344\270\252\346\230\257\346\224\271\345\217\230\346\210\220\345\234\206\350\247\222\350\276\271\346\241\206;\n"
"\n"
"}"));
        outdirBrowButton->setAutoDefault(false);
        outdirBrowButton->setFlat(false);

        horizontalLayout_18->addWidget(outdirBrowButton);


        verticalLayout_9->addLayout(horizontalLayout_18);

        tabWidget->addTab(tab_2, QString());
        association = new QWidget();
        association->setObjectName(QString::fromUtf8("association"));
        frame_12 = new QFrame(association);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(10, 80, 551, 321));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame_12);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 531, 307));
        gridLayout_9 = new QGridLayout(layoutWidget1);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 40));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font6.setPointSize(11);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        label_6->setFont(font6);

        horizontalLayout_7->addWidget(label_6);

        detailPushButton = new QPushButton(layoutWidget1);
        detailPushButton->setObjectName(QString::fromUtf8("detailPushButton"));
        detailPushButton->setMinimumSize(QSize(1, 0));
        detailPushButton->setMaximumSize(QSize(50, 16777215));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Noto Sans CJK TC"));
        font7.setPointSize(9);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        detailPushButton->setFont(font7);
        detailPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        detailPushButton->setFlat(true);

        horizontalLayout_7->addWidget(detailPushButton);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(55, 30));
        label_11->setMaximumSize(QSize(60, 30));

        horizontalLayout_5->addWidget(label_11);

        toolComboBox = new QComboBox(layoutWidget1);
        toolComboBox->addItem(QString());
        toolComboBox->addItem(QString());
        toolComboBox->addItem(QString());
        toolComboBox->setObjectName(QString::fromUtf8("toolComboBox"));
        toolComboBox->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(toolComboBox);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(55, 30));
        label_15->setMaximumSize(QSize(60, 30));

        horizontalLayout_11->addWidget(label_15);

        modelComboBox = new QComboBox(layoutWidget1);
        modelComboBox->addItem(QString());
        modelComboBox->addItem(QString());
        modelComboBox->setObjectName(QString::fromUtf8("modelComboBox"));
        modelComboBox->setMinimumSize(QSize(0, 0));
        modelComboBox->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_11->addWidget(modelComboBox);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_11, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout, 0, 0, 1, 1);

        line_2 = new QFrame(layoutWidget1);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_2, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font6);

        horizontalLayout_17->addWidget(label_13);

        qualCtrlDetailPushButton = new QPushButton(layoutWidget1);
        qualCtrlDetailPushButton->setObjectName(QString::fromUtf8("qualCtrlDetailPushButton"));
        qualCtrlDetailPushButton->setMinimumSize(QSize(1, 0));
        qualCtrlDetailPushButton->setMaximumSize(QSize(50, 16777215));
        qualCtrlDetailPushButton->setFont(font7);
        qualCtrlDetailPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        qualCtrlDetailPushButton->setFlat(true);

        horizontalLayout_17->addWidget(qualCtrlDetailPushButton);


        gridLayout_2->addLayout(horizontalLayout_17, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mafRadioButton = new QRadioButton(layoutWidget1);
        mafRadioButton->setObjectName(QString::fromUtf8("mafRadioButton"));
        mafRadioButton->setMinimumSize(QSize(0, 30));
        mafRadioButton->setCursor(QCursor(Qt::PointingHandCursor));
        mafRadioButton->setAutoExclusive(false);

        horizontalLayout_4->addWidget(mafRadioButton);

        mafDoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        mafDoubleSpinBox->setObjectName(QString::fromUtf8("mafDoubleSpinBox"));
        mafDoubleSpinBox->setMaximum(1.000000000000000);
        mafDoubleSpinBox->setSingleStep(0.010000000000000);
        mafDoubleSpinBox->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        horizontalLayout_4->addWidget(mafDoubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mindRadioButton = new QRadioButton(layoutWidget1);
        mindRadioButton->setObjectName(QString::fromUtf8("mindRadioButton"));
        mindRadioButton->setMinimumSize(QSize(49, 30));
        mindRadioButton->setCursor(QCursor(Qt::PointingHandCursor));
        mindRadioButton->setAutoExclusive(false);

        horizontalLayout_3->addWidget(mindRadioButton);

        mindDoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        mindDoubleSpinBox->setObjectName(QString::fromUtf8("mindDoubleSpinBox"));
        mindDoubleSpinBox->setMaximum(1.000000000000000);
        mindDoubleSpinBox->setSingleStep(0.010000000000000);
        mindDoubleSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_3->addWidget(mindDoubleSpinBox);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        genoRadioButton = new QRadioButton(layoutWidget1);
        genoRadioButton->setObjectName(QString::fromUtf8("genoRadioButton"));
        genoRadioButton->setMinimumSize(QSize(0, 30));
        genoRadioButton->setCursor(QCursor(Qt::PointingHandCursor));
        genoRadioButton->setAutoExclusive(false);

        horizontalLayout_6->addWidget(genoRadioButton);

        genoDoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        genoDoubleSpinBox->setObjectName(QString::fromUtf8("genoDoubleSpinBox"));
        genoDoubleSpinBox->setMaximum(1.000000000000000);
        genoDoubleSpinBox->setSingleStep(0.010000000000000);
        genoDoubleSpinBox->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        horizontalLayout_6->addWidget(genoDoubleSpinBox);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_24 = new QLabel(layoutWidget1);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout->addWidget(label_24);

        selectedPhenoListWidget = new QListWidget(layoutWidget1);
        selectedPhenoListWidget->setObjectName(QString::fromUtf8("selectedPhenoListWidget"));

        verticalLayout->addWidget(selectedPhenoListWidget);


        gridLayout_8->addLayout(verticalLayout, 2, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        selectPhenoButton = new QPushButton(layoutWidget1);
        selectPhenoButton->setObjectName(QString::fromUtf8("selectPhenoButton"));
        selectPhenoButton->setMinimumSize(QSize(0, 30));
        selectPhenoButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(selectPhenoButton);

        excludePhenoButton = new QPushButton(layoutWidget1);
        excludePhenoButton->setObjectName(QString::fromUtf8("excludePhenoButton"));
        excludePhenoButton->setMinimumSize(QSize(0, 30));
        excludePhenoButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(excludePhenoButton);

        selectAllPhenoButton = new QPushButton(layoutWidget1);
        selectAllPhenoButton->setObjectName(QString::fromUtf8("selectAllPhenoButton"));
        selectAllPhenoButton->setMinimumSize(QSize(0, 30));
        selectAllPhenoButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(selectAllPhenoButton);

        excludeAllPhenoButton = new QPushButton(layoutWidget1);
        excludeAllPhenoButton->setObjectName(QString::fromUtf8("excludeAllPhenoButton"));
        excludeAllPhenoButton->setMinimumSize(QSize(0, 30));
        excludeAllPhenoButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(excludeAllPhenoButton);

        verticalSpacer_2 = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);


        gridLayout_8->addLayout(verticalLayout_4, 2, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_23 = new QLabel(layoutWidget1);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_3->addWidget(label_23);

        excludedPhenoListWidget = new QListWidget(layoutWidget1);
        excludedPhenoListWidget->setObjectName(QString::fromUtf8("excludedPhenoListWidget"));

        verticalLayout_3->addWidget(excludedPhenoListWidget);


        gridLayout_8->addLayout(verticalLayout_3, 2, 3, 1, 1);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font6);

        gridLayout_8->addWidget(label_9, 1, 1, 1, 1);

        line = new QFrame(layoutWidget1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line, 0, 0, 3, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 1, 3, 1);

        runGwasButton = new QPushButton(association);
        runGwasButton->setObjectName(QString::fromUtf8("runGwasButton"));
        runGwasButton->setGeometry(QRect(210, 420, 131, 41));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font8.setPointSize(12);
        runGwasButton->setFont(font8);
        runGwasButton->setCursor(QCursor(Qt::PointingHandCursor));
        runGwasButton->setAcceptDrops(true);
        runGwasButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:1px 4px;border-style: outset;\n"
"\n"
"pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        label_44 = new QLabel(association);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(10, 30, 321, 41));
        label_44->setFont(font2);
        assoc_cmdButton = new QPushButton(association);
        assoc_cmdButton->setObjectName(QString::fromUtf8("assoc_cmdButton"));
        assoc_cmdButton->setGeometry(QRect(440, 420, 141, 41));
        QFont font9;
        font9.setFamily(QString::fromUtf8("DejaVu Sans"));
        font9.setPointSize(11);
        assoc_cmdButton->setFont(font9);
        assoc_cmdButton->setCursor(QCursor(Qt::PointingHandCursor));
        assoc_cmdButton->setAcceptDrops(true);
        assoc_cmdButton->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);"));
        tabWidget->addTab(association, QString());
        plot = new QWidget();
        plot->setObjectName(QString::fromUtf8("plot"));
        frame_6 = new QFrame(plot);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(30, 130, 481, 191));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        layoutWidget2 = new QWidget(frame_6);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 80, 395, 91));
        gridLayout_11 = new QGridLayout(layoutWidget2);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font10.setPointSize(11);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(50);
        label_12->setFont(font10);

        gridLayout_11->addWidget(label_12, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font10);

        horizontalLayout_8->addWidget(label_18);

        gwBaseLineEdit = new QLineEdit(layoutWidget2);
        gwBaseLineEdit->setObjectName(QString::fromUtf8("gwBaseLineEdit"));
        gwBaseLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(gwBaseLineEdit);

        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font10);

        horizontalLayout_8->addWidget(label_19);

        gwExpoLineEdit = new QLineEdit(layoutWidget2);
        gwExpoLineEdit->setObjectName(QString::fromUtf8("gwExpoLineEdit"));
        gwExpoLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(gwExpoLineEdit);


        gridLayout_11->addLayout(horizontalLayout_8, 0, 1, 1, 1);

        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font10);

        gridLayout_11->addWidget(label_16, 1, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_38 = new QLabel(layoutWidget2);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setFont(font10);

        horizontalLayout_19->addWidget(label_38);

        sgBaseLineEdit = new QLineEdit(layoutWidget2);
        sgBaseLineEdit->setObjectName(QString::fromUtf8("sgBaseLineEdit"));
        sgBaseLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_19->addWidget(sgBaseLineEdit);

        label_39 = new QLabel(layoutWidget2);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setFont(font10);

        horizontalLayout_19->addWidget(label_39);

        sgExpoLineEdit = new QLineEdit(layoutWidget2);
        sgExpoLineEdit->setObjectName(QString::fromUtf8("sgExpoLineEdit"));
        sgExpoLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_19->addWidget(sgExpoLineEdit);


        gridLayout_11->addLayout(horizontalLayout_19, 1, 1, 1, 1);

        layoutWidget3 = new QWidget(frame_6);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 30, 341, 34));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font10);

        horizontalLayout_15->addWidget(label_4);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);

        drawManPushButton = new QPushButton(layoutWidget3);
        drawManPushButton->setObjectName(QString::fromUtf8("drawManPushButton"));
        drawManPushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_15->addWidget(drawManPushButton);

        frame_7 = new QFrame(plot);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(30, 350, 381, 51));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        layoutWidget4 = new QWidget(frame_7);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 10, 341, 34));
        gridLayout_18 = new QGridLayout(layoutWidget4);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font10);

        gridLayout_18->addWidget(label_8, 0, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_13, 0, 1, 1, 1);

        drawQQPushButton = new QPushButton(layoutWidget4);
        drawQQPushButton->setObjectName(QString::fromUtf8("drawQQPushButton"));
        drawQQPushButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_18->addWidget(drawQQPushButton, 0, 2, 1, 1);

        frame_8 = new QFrame(plot);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(30, 50, 381, 51));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        layoutWidget5 = new QWidget(frame_8);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 10, 341, 34));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font11.setPointSize(9);
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        layoutWidget5->setFont(font11);
        horizontalLayout_9 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font10);

        horizontalLayout_9->addWidget(label_20);

        qqmanGwasResultLineEdit = new QLineEdit(layoutWidget5);
        qqmanGwasResultLineEdit->setObjectName(QString::fromUtf8("qqmanGwasResultLineEdit"));
        qqmanGwasResultLineEdit->setLayoutDirection(Qt::LeftToRight);
        qqmanGwasResultLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(qqmanGwasResultLineEdit);

        qqmanGwasReultBrowButton = new QPushButton(layoutWidget5);
        qqmanGwasReultBrowButton->setObjectName(QString::fromUtf8("qqmanGwasReultBrowButton"));
        qqmanGwasReultBrowButton->setMaximumSize(QSize(31, 16777215));
        qqmanGwasReultBrowButton->setFont(font5);
        qqmanGwasReultBrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        qqmanGwasReultBrowButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(255, 255, 255, 255))//\350\277\231\346\230\257\346\237\220\344\270\252\346\270\220\345\217\230\346\240\267\345\274\217\n"
"\n"
"border-radius:5px;//\350\277\231\344\270\252\346\230\257\346\224\271\345\217\230\346\210\220\345\234\206\350\247\222\350\276\271\346\241\206;\n"
"\n"
"}"));
        qqmanGwasReultBrowButton->setAutoDefault(false);
        qqmanGwasReultBrowButton->setFlat(false);

        horizontalLayout_9->addWidget(qqmanGwasReultBrowButton);

        tabWidget->addTab(plot, QString());
        frame_7->raise();
        frame_8->raise();
        frame_6->raise();
        pca_ld = new QWidget();
        pca_ld->setObjectName(QString::fromUtf8("pca_ld"));
        label_21 = new QLabel(pca_ld);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(30, 50, 34, 18));
        label_21->setFont(font6);
        label_26 = new QLabel(pca_ld);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(30, 240, 22, 18));
        label_26->setFont(font6);
        frame_4 = new QFrame(pca_ld);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(30, 70, 451, 81));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        layoutWidget6 = new QWidget(frame_4);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 20, 411, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(label_22);

        nPCsLineEdit = new QLineEdit(layoutWidget6);
        nPCsLineEdit->setObjectName(QString::fromUtf8("nPCsLineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(nPCsLineEdit->sizePolicy().hasHeightForWidth());
        nPCsLineEdit->setSizePolicy(sizePolicy4);
        nPCsLineEdit->setMaximumSize(QSize(80, 16777215));
        nPCsLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(nPCsLineEdit);

        label_25 = new QLabel(layoutWidget6);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy3.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(label_25);

        nThreadsLineEdit = new QLineEdit(layoutWidget6);
        nThreadsLineEdit->setObjectName(QString::fromUtf8("nThreadsLineEdit"));
        sizePolicy4.setHeightForWidth(nThreadsLineEdit->sizePolicy().hasHeightForWidth());
        nThreadsLineEdit->setSizePolicy(sizePolicy4);
        nThreadsLineEdit->setMaximumSize(QSize(80, 16777215));
        nThreadsLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(nThreadsLineEdit);

        pcaToolComboBox = new QComboBox(layoutWidget6);
        pcaToolComboBox->addItem(QString());
        pcaToolComboBox->setObjectName(QString::fromUtf8("pcaToolComboBox"));
        sizePolicy.setHeightForWidth(pcaToolComboBox->sizePolicy().hasHeightForWidth());
        pcaToolComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pcaToolComboBox);

        frame_5 = new QFrame(pca_ld);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(30, 260, 451, 81));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        layoutWidget7 = new QWidget(frame_5);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(22, 24, 411, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget7);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        sizePolicy1.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy1);
        label_27->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_27);

        yesLDByFamRadioButton = new QRadioButton(layoutWidget7);
        yesLDByFamRadioButton->setObjectName(QString::fromUtf8("yesLDByFamRadioButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(yesLDByFamRadioButton->sizePolicy().hasHeightForWidth());
        yesLDByFamRadioButton->setSizePolicy(sizePolicy5);
        yesLDByFamRadioButton->setMinimumSize(QSize(50, 0));

        horizontalLayout_2->addWidget(yesLDByFamRadioButton);

        noLDByFamRadioButton = new QRadioButton(layoutWidget7);
        noLDByFamRadioButton->setObjectName(QString::fromUtf8("noLDByFamRadioButton"));
        sizePolicy5.setHeightForWidth(noLDByFamRadioButton->sizePolicy().hasHeightForWidth());
        noLDByFamRadioButton->setSizePolicy(sizePolicy5);
        noLDByFamRadioButton->setMinimumSize(QSize(50, 0));
        noLDByFamRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(noLDByFamRadioButton);

        pcaToolComboBox_2 = new QComboBox(layoutWidget7);
        pcaToolComboBox_2->addItem(QString());
        pcaToolComboBox_2->setObjectName(QString::fromUtf8("pcaToolComboBox_2"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pcaToolComboBox_2->sizePolicy().hasHeightForWidth());
        pcaToolComboBox_2->setSizePolicy(sizePolicy6);
        pcaToolComboBox_2->setMinimumSize(QSize(120, 0));
        pcaToolComboBox_2->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_2->addWidget(pcaToolComboBox_2);

        pcaRunPushButton = new QPushButton(pca_ld);
        pcaRunPushButton->setObjectName(QString::fromUtf8("pcaRunPushButton"));
        pcaRunPushButton->setGeometry(QRect(180, 160, 131, 41));
        pcaRunPushButton->setFont(font8);
        pcaRunPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pcaRunPushButton->setAcceptDrops(true);
        pcaRunPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:1px 4px;border-style: outset;\n"
"\n"
"pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        ldRunPushButton = new QPushButton(pca_ld);
        ldRunPushButton->setObjectName(QString::fromUtf8("ldRunPushButton"));
        ldRunPushButton->setGeometry(QRect(180, 360, 131, 41));
        ldRunPushButton->setFont(font8);
        ldRunPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        ldRunPushButton->setAcceptDrops(true);
        ldRunPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:1px 4px;border-style: outset;\n"
"\n"
"pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pca_ld_cmdButton = new QPushButton(pca_ld);
        pca_ld_cmdButton->setObjectName(QString::fromUtf8("pca_ld_cmdButton"));
        pca_ld_cmdButton->setGeometry(QRect(440, 420, 141, 41));
        pca_ld_cmdButton->setFont(font9);
        pca_ld_cmdButton->setCursor(QCursor(Qt::PointingHandCursor));
        pca_ld_cmdButton->setAcceptDrops(true);
        pca_ld_cmdButton->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);"));
        tabWidget->addTab(pca_ld, QString());
        frame_4->raise();
        frame_5->raise();
        label_21->raise();
        label_26->raise();
        pcaRunPushButton->raise();
        ldRunPushButton->raise();
        pca_ld_cmdButton->raise();
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_35 = new QLabel(tab);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(20, 40, 371, 23));
        label_35->setFont(font6);
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 170, 541, 121));
        frame->setAcceptDrops(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        layoutWidget8 = new QWidget(frame);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 10, 521, 110));
        gridLayout_7 = new QGridLayout(layoutWidget8);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(layoutWidget8);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(34, 0));
        label_33->setMaximumSize(QSize(80, 16777215));
        label_33->setFont(font10);

        gridLayout_7->addWidget(label_33, 0, 0, 1, 1);

        avinFileLineEdit = new QLineEdit(layoutWidget8);
        avinFileLineEdit->setObjectName(QString::fromUtf8("avinFileLineEdit"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(avinFileLineEdit->sizePolicy().hasHeightForWidth());
        avinFileLineEdit->setSizePolicy(sizePolicy7);
        avinFileLineEdit->setMinimumSize(QSize(80, 0));
        avinFileLineEdit->setMaximumSize(QSize(1677215, 16777215));
        avinFileLineEdit->setLayoutDirection(Qt::LeftToRight);
        avinFileLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(avinFileLineEdit, 0, 1, 1, 1);

        avinFileBrowButton = new QPushButton(layoutWidget8);
        avinFileBrowButton->setObjectName(QString::fromUtf8("avinFileBrowButton"));
        avinFileBrowButton->setMaximumSize(QSize(31, 16777215));
        avinFileBrowButton->setFont(font5);
        avinFileBrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        avinFileBrowButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(255, 255, 255, 255))//\350\277\231\346\230\257\346\237\220\344\270\252\346\270\220\345\217\230\346\240\267\345\274\217\n"
"\n"
"border-radius:5px;//\350\277\231\344\270\252\346\230\257\346\224\271\345\217\230\346\210\220\345\234\206\350\247\222\350\276\271\346\241\206;\n"
"\n"
"}"));
        avinFileBrowButton->setAutoDefault(false);
        avinFileBrowButton->setFlat(false);

        gridLayout_7->addWidget(avinFileBrowButton, 0, 2, 1, 1);

        label_30 = new QLabel(layoutWidget8);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(130, 0));
        label_30->setMaximumSize(QSize(200, 16777215));
        label_30->setFont(font10);

        gridLayout_7->addWidget(label_30, 1, 0, 1, 1);

        refGeneFileLineEdit = new QLineEdit(layoutWidget8);
        refGeneFileLineEdit->setObjectName(QString::fromUtf8("refGeneFileLineEdit"));
        sizePolicy7.setHeightForWidth(refGeneFileLineEdit->sizePolicy().hasHeightForWidth());
        refGeneFileLineEdit->setSizePolicy(sizePolicy7);
        refGeneFileLineEdit->setMinimumSize(QSize(275, 0));
        refGeneFileLineEdit->setMaximumSize(QSize(1677215, 16777215));
        refGeneFileLineEdit->setLayoutDirection(Qt::LeftToRight);
        refGeneFileLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(refGeneFileLineEdit, 1, 1, 1, 1);

        refGeneFileBrowButton = new QPushButton(layoutWidget8);
        refGeneFileBrowButton->setObjectName(QString::fromUtf8("refGeneFileBrowButton"));
        refGeneFileBrowButton->setMaximumSize(QSize(31, 16777215));
        refGeneFileBrowButton->setFont(font5);
        refGeneFileBrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        refGeneFileBrowButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(255, 255, 255, 255))//\350\277\231\346\230\257\346\237\220\344\270\252\346\270\220\345\217\230\346\240\267\345\274\217\n"
"\n"
"border-radius:5px;//\350\277\231\344\270\252\346\230\257\346\224\271\345\217\230\346\210\220\345\234\206\350\247\222\350\276\271\346\241\206;\n"
"\n"
"}"));
        refGeneFileBrowButton->setAutoDefault(false);
        refGeneFileBrowButton->setFlat(false);

        gridLayout_7->addWidget(refGeneFileBrowButton, 1, 2, 1, 1);

        label_34 = new QLabel(layoutWidget8);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMinimumSize(QSize(120, 0));
        label_34->setMaximumSize(QSize(80, 16777215));
        label_34->setFont(font10);

        gridLayout_7->addWidget(label_34, 2, 0, 1, 1);

        refSeqFileLineEdit = new QLineEdit(layoutWidget8);
        refSeqFileLineEdit->setObjectName(QString::fromUtf8("refSeqFileLineEdit"));
        sizePolicy7.setHeightForWidth(refSeqFileLineEdit->sizePolicy().hasHeightForWidth());
        refSeqFileLineEdit->setSizePolicy(sizePolicy7);
        refSeqFileLineEdit->setMinimumSize(QSize(275, 0));
        refSeqFileLineEdit->setMaximumSize(QSize(1677215, 16777215));
        refSeqFileLineEdit->setLayoutDirection(Qt::LeftToRight);
        refSeqFileLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(refSeqFileLineEdit, 2, 1, 1, 1);

        refSeqFileBrowButton = new QPushButton(layoutWidget8);
        refSeqFileBrowButton->setObjectName(QString::fromUtf8("refSeqFileBrowButton"));
        refSeqFileBrowButton->setMaximumSize(QSize(31, 16777215));
        refSeqFileBrowButton->setFont(font5);
        refSeqFileBrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        refSeqFileBrowButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(255, 255, 255, 255))//\350\277\231\346\230\257\346\237\220\344\270\252\346\270\220\345\217\230\346\240\267\345\274\217\n"
"\n"
"border-radius:5px;//\350\277\231\344\270\252\346\230\257\346\224\271\345\217\230\346\210\220\345\234\206\350\247\222\350\276\271\346\241\206;\n"
"\n"
"}"));
        refSeqFileBrowButton->setAutoDefault(false);
        refSeqFileBrowButton->setFlat(false);

        gridLayout_7->addWidget(refSeqFileBrowButton, 2, 2, 1, 1);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 70, 541, 81));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        layoutWidget9 = new QWidget(frame_2);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(10, 10, 521, 68));
        gridLayout_5 = new QGridLayout(layoutWidget9);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        annoPvalLineEdit = new QLineEdit(layoutWidget9);
        annoPvalLineEdit->setObjectName(QString::fromUtf8("annoPvalLineEdit"));
        sizePolicy1.setHeightForWidth(annoPvalLineEdit->sizePolicy().hasHeightForWidth());
        annoPvalLineEdit->setSizePolicy(sizePolicy1);
        annoPvalLineEdit->setMinimumSize(QSize(100, 22));
        annoPvalLineEdit->setLayoutDirection(Qt::LeftToRight);
        annoPvalLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(annoPvalLineEdit, 0, 1, 1, 3);

        label_43 = new QLabel(layoutWidget9);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setMinimumSize(QSize(130, 0));
        label_43->setMaximumSize(QSize(130, 16777215));
        label_43->setFont(font10);

        gridLayout_5->addWidget(label_43, 1, 0, 1, 1);

        label_41 = new QLabel(layoutWidget9);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setMinimumSize(QSize(120, 0));
        label_41->setMaximumSize(QSize(130, 16777215));
        label_41->setFont(font10);

        gridLayout_5->addWidget(label_41, 0, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_31 = new QLabel(layoutWidget9);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFont(font10);

        horizontalLayout_16->addWidget(label_31);

        annoThBaseLineEdit = new QLineEdit(layoutWidget9);
        annoThBaseLineEdit->setObjectName(QString::fromUtf8("annoThBaseLineEdit"));
        annoThBaseLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(annoThBaseLineEdit);

        label_32 = new QLabel(layoutWidget9);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_16->addWidget(label_32);

        annoThExpoLineEdit = new QLineEdit(layoutWidget9);
        annoThExpoLineEdit->setObjectName(QString::fromUtf8("annoThExpoLineEdit"));
        annoThExpoLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(annoThExpoLineEdit);


        gridLayout_5->addLayout(horizontalLayout_16, 1, 1, 1, 1);

        annoStepPushButton = new QPushButton(layoutWidget9);
        annoStepPushButton->setObjectName(QString::fromUtf8("annoStepPushButton"));
        annoStepPushButton->setMinimumSize(QSize(0, 26));
        annoStepPushButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_5->addWidget(annoStepPushButton, 1, 3, 1, 2);

        annoPvalBrowButton = new QPushButton(layoutWidget9);
        annoPvalBrowButton->setObjectName(QString::fromUtf8("annoPvalBrowButton"));
        annoPvalBrowButton->setMaximumSize(QSize(31, 16777215));
        annoPvalBrowButton->setFont(font5);
        annoPvalBrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        annoPvalBrowButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(255, 255, 255, 255))//\350\277\231\346\230\257\346\237\220\344\270\252\346\270\220\345\217\230\346\240\267\345\274\217\n"
"\n"
"border-radius:5px;//\350\277\231\344\270\252\346\230\257\346\224\271\345\217\230\346\210\220\345\234\206\350\247\222\350\276\271\346\241\206;\n"
"\n"
"}"));
        annoPvalBrowButton->setAutoDefault(false);
        annoPvalBrowButton->setFlat(false);

        gridLayout_5->addWidget(annoPvalBrowButton, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 2, 1, 1);

        frame_3 = new QFrame(tab);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(20, 310, 541, 81));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget10 = new QWidget(frame_3);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(10, 10, 521, 72));
        gridLayout_6 = new QGridLayout(layoutWidget10);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        snpPosFileLineEdit = new QLineEdit(layoutWidget10);
        snpPosFileLineEdit->setObjectName(QString::fromUtf8("snpPosFileLineEdit"));
        sizePolicy1.setHeightForWidth(snpPosFileLineEdit->sizePolicy().hasHeightForWidth());
        snpPosFileLineEdit->setSizePolicy(sizePolicy1);
        snpPosFileLineEdit->setMinimumSize(QSize(275, 0));
        snpPosFileLineEdit->setMaximumSize(QSize(400, 16777215));
        snpPosFileLineEdit->setLayoutDirection(Qt::LeftToRight);
        snpPosFileLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(snpPosFileLineEdit, 0, 1, 1, 1);

        label_42 = new QLabel(layoutWidget10);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setMinimumSize(QSize(50, 0));
        label_42->setMaximumSize(QSize(130, 16777215));
        label_42->setFont(font10);

        gridLayout_6->addWidget(label_42, 0, 0, 1, 1);

        snpPosFileFileBrowButton = new QPushButton(layoutWidget10);
        snpPosFileFileBrowButton->setObjectName(QString::fromUtf8("snpPosFileFileBrowButton"));
        snpPosFileFileBrowButton->setMaximumSize(QSize(31, 16777215));
        snpPosFileFileBrowButton->setFont(font5);
        snpPosFileFileBrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        snpPosFileFileBrowButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(255, 255, 255, 255))//\350\277\231\346\230\257\346\237\220\344\270\252\346\270\220\345\217\230\346\240\267\345\274\217\n"
"\n"
"border-radius:5px;//\350\277\231\344\270\252\346\230\257\346\224\271\345\217\230\346\210\220\345\234\206\350\247\222\350\276\271\346\241\206;\n"
"\n"
"}"));
        snpPosFileFileBrowButton->setAutoDefault(false);
        snpPosFileFileBrowButton->setFlat(false);

        gridLayout_6->addWidget(snpPosFileFileBrowButton, 0, 2, 1, 1);

        label_45 = new QLabel(layoutWidget10);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setMinimumSize(QSize(50, 0));
        label_45->setMaximumSize(QSize(130, 16777215));
        label_45->setFont(font10);

        gridLayout_6->addWidget(label_45, 1, 0, 1, 1);

        funcAnnoRefFileLineEdit = new QLineEdit(layoutWidget10);
        funcAnnoRefFileLineEdit->setObjectName(QString::fromUtf8("funcAnnoRefFileLineEdit"));
        sizePolicy1.setHeightForWidth(funcAnnoRefFileLineEdit->sizePolicy().hasHeightForWidth());
        funcAnnoRefFileLineEdit->setSizePolicy(sizePolicy1);
        funcAnnoRefFileLineEdit->setMinimumSize(QSize(275, 0));
        funcAnnoRefFileLineEdit->setMaximumSize(QSize(400, 16777215));
        funcAnnoRefFileLineEdit->setLayoutDirection(Qt::LeftToRight);
        funcAnnoRefFileLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(funcAnnoRefFileLineEdit, 1, 1, 1, 1);

        funcAnnoRefFileBrowButton = new QPushButton(layoutWidget10);
        funcAnnoRefFileBrowButton->setObjectName(QString::fromUtf8("funcAnnoRefFileBrowButton"));
        funcAnnoRefFileBrowButton->setMaximumSize(QSize(31, 16777215));
        funcAnnoRefFileBrowButton->setFont(font5);
        funcAnnoRefFileBrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        funcAnnoRefFileBrowButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(255, 255, 255, 255))//\350\277\231\346\230\257\346\237\220\344\270\252\346\270\220\345\217\230\346\240\267\345\274\217\n"
"\n"
"border-radius:5px;//\350\277\231\344\270\252\346\230\257\346\224\271\345\217\230\346\210\220\345\234\206\350\247\222\350\276\271\346\241\206;\n"
"\n"
"}"));
        funcAnnoRefFileBrowButton->setAutoDefault(false);
        funcAnnoRefFileBrowButton->setFlat(false);

        gridLayout_6->addWidget(funcAnnoRefFileBrowButton, 1, 2, 1, 1);

        annotationRunButton = new QPushButton(tab);
        annotationRunButton->setObjectName(QString::fromUtf8("annotationRunButton"));
        annotationRunButton->setGeometry(QRect(220, 420, 131, 41));
        annotationRunButton->setFont(font8);
        annotationRunButton->setCursor(QCursor(Qt::PointingHandCursor));
        annotationRunButton->setAcceptDrops(true);
        annotationRunButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:1px 4px;border-style: outset;\n"
"\n"
"pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        annotation_cmdButton = new QPushButton(tab);
        annotation_cmdButton->setObjectName(QString::fromUtf8("annotation_cmdButton"));
        annotation_cmdButton->setGeometry(QRect(440, 420, 141, 41));
        annotation_cmdButton->setFont(font9);
        annotation_cmdButton->setCursor(QCursor(Qt::PointingHandCursor));
        annotation_cmdButton->setAcceptDrops(true);
        annotation_cmdButton->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);"));
        tabWidget->addTab(tab, QString());
        frame_2->raise();
        frame_3->raise();
        frame->raise();
        label_35->raise();
        annotationRunButton->raise();
        annotation_cmdButton->raise();
        frame_10 = new QFrame(centralwidget);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(10, 20, 161, 511));
        sizePolicy1.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy1);
        frame_10->setLayoutDirection(Qt::LeftToRight);
        frame_10->setFrameShape(QFrame::NoFrame);
        frame_10->setFrameShadow(QFrame::Plain);
        layoutWidget_2 = new QWidget(frame_10);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 151, 511));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Arial"));
        font12.setPointSize(12);
        font12.setBold(true);
        font12.setWeight(75);
        label_3->setFont(font12);

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter);

        pheFileToolButton = new MToolButton(layoutWidget_2);
        pheFileToolButton->setObjectName(QString::fromUtf8("pheFileToolButton"));
        pheFileToolButton->setMinimumSize(QSize(64, 48));
        pheFileToolButton->setCursor(QCursor(Qt::PointingHandCursor));
        pheFileToolButton->setAcceptDrops(true);
        pheFileToolButton->setIconSize(QSize(32, 32));
        pheFileToolButton->setAutoRaise(false);

        verticalLayout_2->addWidget(pheFileToolButton, 0, Qt::AlignHCenter);

        pheFileLabel = new QLabel(layoutWidget_2);
        pheFileLabel->setObjectName(QString::fromUtf8("pheFileLabel"));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Courier New"));
        font13.setPointSize(9);
        font13.setKerning(true);
        pheFileLabel->setFont(font13);
        pheFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(pheFileLabel, 0, Qt::AlignHCenter);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font12);

        verticalLayout_6->addWidget(label_10, 0, Qt::AlignHCenter);

        mapFileToolButton = new MToolButton(layoutWidget_2);
        mapFileToolButton->setObjectName(QString::fromUtf8("mapFileToolButton"));
        mapFileToolButton->setMinimumSize(QSize(64, 48));
        mapFileToolButton->setCursor(QCursor(Qt::PointingHandCursor));
        mapFileToolButton->setAcceptDrops(true);
        mapFileToolButton->setIconSize(QSize(32, 32));

        verticalLayout_6->addWidget(mapFileToolButton, 0, Qt::AlignHCenter);

        mapFileLabel = new QLabel(layoutWidget_2);
        mapFileLabel->setObjectName(QString::fromUtf8("mapFileLabel"));
        mapFileLabel->setFont(font13);
        mapFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(mapFileLabel, 0, Qt::AlignHCenter);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_11);


        gridLayout_3->addLayout(verticalLayout_6, 3, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font12);

        verticalLayout_5->addWidget(label_7, 0, Qt::AlignHCenter);

        genoFileToolButton = new MToolButton(layoutWidget_2);
        genoFileToolButton->setObjectName(QString::fromUtf8("genoFileToolButton"));
        genoFileToolButton->setMinimumSize(QSize(64, 48));
        genoFileToolButton->setCursor(QCursor(Qt::PointingHandCursor));
        genoFileToolButton->setAcceptDrops(true);
        genoFileToolButton->setIconSize(QSize(32, 32));

        verticalLayout_5->addWidget(genoFileToolButton, 0, Qt::AlignHCenter);

        genoFileLabel = new QLabel(layoutWidget_2);
        genoFileLabel->setObjectName(QString::fromUtf8("genoFileLabel"));
        genoFileLabel->setFont(font13);
        genoFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(genoFileLabel, 0, Qt::AlignHCenter);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_10);


        gridLayout_3->addLayout(verticalLayout_5, 2, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font12);

        verticalLayout_7->addWidget(label_14, 0, Qt::AlignHCenter);

        covarFileToolButton = new MToolButton(layoutWidget_2);
        covarFileToolButton->setObjectName(QString::fromUtf8("covarFileToolButton"));
        covarFileToolButton->setMinimumSize(QSize(64, 48));
        covarFileToolButton->setCursor(QCursor(Qt::PointingHandCursor));
        covarFileToolButton->setAcceptDrops(true);
        covarFileToolButton->setIconSize(QSize(32, 32));

        verticalLayout_7->addWidget(covarFileToolButton, 0, Qt::AlignHCenter);

        covarFileLabel = new QLabel(layoutWidget_2);
        covarFileLabel->setObjectName(QString::fromUtf8("covarFileLabel"));
        covarFileLabel->setFont(font13);
        covarFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_7->addWidget(covarFileLabel, 0, Qt::AlignHCenter);


        gridLayout_3->addLayout(verticalLayout_7, 4, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_12, 5, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_9, 1, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font12);

        verticalLayout_8->addWidget(label_17, 0, Qt::AlignHCenter);

        kinFileToolButton = new MToolButton(layoutWidget_2);
        kinFileToolButton->setObjectName(QString::fromUtf8("kinFileToolButton"));
        kinFileToolButton->setMinimumSize(QSize(64, 48));
        kinFileToolButton->setCursor(QCursor(Qt::PointingHandCursor));
        kinFileToolButton->setAcceptDrops(true);
        kinFileToolButton->setIconSize(QSize(32, 32));

        verticalLayout_8->addWidget(kinFileToolButton, 0, Qt::AlignHCenter);

        kinFileLabel = new QLabel(layoutWidget_2);
        kinFileLabel->setObjectName(QString::fromUtf8("kinFileLabel"));
        kinFileLabel->setFont(font13);
        kinFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(kinFileLabel, 0, Qt::AlignHCenter);


        gridLayout_3->addLayout(verticalLayout_8, 6, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 805, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        outdirBrowButton->setDefault(false);
        qqmanGwasReultBrowButton->setDefault(false);
        avinFileBrowButton->setDefault(false);
        refGeneFileBrowButton->setDefault(false);
        refSeqFileBrowButton->setDefault(false);
        annoPvalBrowButton->setDefault(false);
        snpPosFileFileBrowButton->setDefault(false);
        funcAnnoRefFileBrowButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Project name and output directory", nullptr));
        label_40->setText(QApplication::translate("MainWindow", "Project Name:      ", nullptr));
        projectNameLineEdit->setText(QString());
        label_36->setText(QApplication::translate("MainWindow", "Output Directory: ", nullptr));
        outdirLineEdit->setText(QString());
        outdirBrowButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "PROJECT", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Tool and model", nullptr));
        detailPushButton->setText(QApplication::translate("MainWindow", ">>", nullptr));
        label_11->setText(QApplication::translate("MainWindow", " Tool: ", nullptr));
        toolComboBox->setItemText(0, QApplication::translate("MainWindow", "plink", nullptr));
        toolComboBox->setItemText(1, QApplication::translate("MainWindow", "gemma", nullptr));
        toolComboBox->setItemText(2, QApplication::translate("MainWindow", "emmax", nullptr));

        label_15->setText(QApplication::translate("MainWindow", " Model:", nullptr));
        modelComboBox->setItemText(0, QApplication::translate("MainWindow", "Linear", nullptr));
        modelComboBox->setItemText(1, QApplication::translate("MainWindow", "Logistic", nullptr));

        label_13->setText(QApplication::translate("MainWindow", "Quality Control", nullptr));
        qualCtrlDetailPushButton->setText(QApplication::translate("MainWindow", ">>", nullptr));
        mafRadioButton->setText(QApplication::translate("MainWindow", "MAF", nullptr));
        mindRadioButton->setText(QApplication::translate("MainWindow", "MIND", nullptr));
        genoRadioButton->setText(QApplication::translate("MainWindow", "GENO", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Selected", nullptr));
        selectPhenoButton->setText(QApplication::translate("MainWindow", "Select", nullptr));
        excludePhenoButton->setText(QApplication::translate("MainWindow", "Exclude", nullptr));
        selectAllPhenoButton->setText(QApplication::translate("MainWindow", "Select All", nullptr));
        excludeAllPhenoButton->setText(QApplication::translate("MainWindow", "Exclude All", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Excluded", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Phenotype", nullptr));
        runGwasButton->setText(QApplication::translate("MainWindow", "Run", nullptr));
        label_44->setText(QApplication::translate("MainWindow", "Association analysis", nullptr));
        assoc_cmdButton->setText(QApplication::translate("MainWindow", "CMDGenerate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(association), QApplication::translate("MainWindow", "ASSOC", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Genomewideline            ", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "-log10 ", nullptr));
        gwBaseLineEdit->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "E", nullptr));
        gwExpoLineEdit->setText(QApplication::translate("MainWindow", "-8", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Suggestiveline          ", nullptr));
        label_38->setText(QApplication::translate("MainWindow", "-log10 ", nullptr));
        sgBaseLineEdit->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "E", nullptr));
        sgExpoLineEdit->setText(QApplication::translate("MainWindow", "-5", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Manhattan plot", nullptr));
        drawManPushButton->setText(QApplication::translate("MainWindow", "Plot", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Q-Q plot", nullptr));
        drawQQPushButton->setText(QApplication::translate("MainWindow", "Plot", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Assoc p-val file", nullptr));
        qqmanGwasResultLineEdit->setText(QString());
        qqmanGwasReultBrowButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(plot), QApplication::translate("MainWindow", "MAN/QQ", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "PCA", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "LD", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "PCs", nullptr));
        nPCsLineEdit->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Threads", nullptr));
        nThreadsLineEdit->setText(QApplication::translate("MainWindow", "2", nullptr));
        pcaToolComboBox->setItemText(0, QApplication::translate("MainWindow", "gcta", nullptr));

        label_27->setText(QApplication::translate("MainWindow", "By family", nullptr));
        yesLDByFamRadioButton->setText(QApplication::translate("MainWindow", "YES", nullptr));
        noLDByFamRadioButton->setText(QApplication::translate("MainWindow", "NO", nullptr));
        pcaToolComboBox_2->setItemText(0, QApplication::translate("MainWindow", "PopLDdecay", nullptr));

        pcaRunPushButton->setText(QApplication::translate("MainWindow", "Run", nullptr));
        ldRunPushButton->setText(QApplication::translate("MainWindow", "Run", nullptr));
        pca_ld_cmdButton->setText(QApplication::translate("MainWindow", "CMDGenerate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pca_ld), QApplication::translate("MainWindow", "PCA/LD", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "Structural and functional annotation", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "AVINPUT    ", nullptr));
        avinFileLineEdit->setText(QString());
        avinFileBrowButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Ref gene (gtf/gff)", nullptr));
        refGeneFileLineEdit->setText(QString());
        refGeneFileBrowButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "Ref seq (fasta)", nullptr));
        refSeqFileLineEdit->setText(QString());
        refSeqFileBrowButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        annoPvalLineEdit->setText(QString());
        label_43->setText(QApplication::translate("MainWindow", "Threshold", nullptr));
        label_41->setText(QApplication::translate("MainWindow", "Assoc p-val file", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "-log10 ", nullptr));
        annoThBaseLineEdit->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "E", nullptr));
        annoThExpoLineEdit->setText(QApplication::translate("MainWindow", "-5", nullptr));
        annoStepPushButton->setText(QApplication::translate("MainWindow", "Step", nullptr));
        annoPvalBrowButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        snpPosFileLineEdit->setText(QString());
        label_42->setText(QApplication::translate("MainWindow", "SNP position", nullptr));
        snpPosFileFileBrowButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        label_45->setText(QApplication::translate("MainWindow", "Func anno ref", nullptr));
        funcAnnoRefFileLineEdit->setText(QString());
        funcAnnoRefFileBrowButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        annotationRunButton->setText(QApplication::translate("MainWindow", "RUN", nullptr));
        annotation_cmdButton->setText(QApplication::translate("MainWindow", "CMDGenerate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "ANNOTATION", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Phenotype", nullptr));
        pheFileToolButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        pheFileLabel->setText(QApplication::translate("MainWindow", "empty", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Map", nullptr));
        mapFileToolButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        mapFileLabel->setText(QApplication::translate("MainWindow", "empty", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Genotype", nullptr));
        genoFileToolButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        genoFileLabel->setText(QApplication::translate("MainWindow", "empty", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Covariate", nullptr));
        covarFileToolButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        covarFileLabel->setText(QApplication::translate("MainWindow", "empty", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Kinship", nullptr));
        kinFileToolButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        kinFileLabel->setText(QApplication::translate("MainWindow", "empty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
