/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AquaGWAS-GUI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[66];
    char stringdata0[1613];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "terminateProcess"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 25), // "runningMsgWidgetClearText"
QT_MOC_LITERAL(4, 55, 26), // "runningMsgWidgetAppendText"
QT_MOC_LITERAL(5, 82, 4), // "text"
QT_MOC_LITERAL(6, 87, 18), // "setLineEditTextSig"
QT_MOC_LITERAL(7, 106, 10), // "QLineEdit*"
QT_MOC_LITERAL(8, 117, 19), // "setButtonEnabledSig"
QT_MOC_LITERAL(9, 137, 16), // "QAbstractButton*"
QT_MOC_LITERAL(10, 154, 22), // "setGraphViewerGraphSig"
QT_MOC_LITERAL(11, 177, 4), // "plot"
QT_MOC_LITERAL(12, 182, 14), // "resetWindowSig"
QT_MOC_LITERAL(13, 197, 12), // "setMsgBoxSig"
QT_MOC_LITERAL(14, 210, 5), // "title"
QT_MOC_LITERAL(15, 216, 28), // "on_pheFileToolButton_clicked"
QT_MOC_LITERAL(16, 245, 29), // "on_genoFileToolButton_clicked"
QT_MOC_LITERAL(17, 275, 28), // "on_mapFileToolButton_clicked"
QT_MOC_LITERAL(18, 304, 30), // "on_covarFileToolButton_clicked"
QT_MOC_LITERAL(19, 335, 28), // "on_kinFileToolButton_clicked"
QT_MOC_LITERAL(20, 364, 33), // "on_pheFileToolButton_closeFil..."
QT_MOC_LITERAL(21, 398, 34), // "on_genoFileToolButton_closeFi..."
QT_MOC_LITERAL(22, 433, 33), // "on_mapFileToolButton_closeFil..."
QT_MOC_LITERAL(23, 467, 33), // "on_kinFileToolButton_closeFil..."
QT_MOC_LITERAL(24, 501, 35), // "on_covarFileToolButton_closeF..."
QT_MOC_LITERAL(25, 537, 27), // "on_outdirBrowButton_clicked"
QT_MOC_LITERAL(26, 565, 34), // "on_projectNameLineEdit_textCh..."
QT_MOC_LITERAL(27, 600, 38), // "on_projectNameLineEdit_editin..."
QT_MOC_LITERAL(28, 639, 33), // "on_outdirLineEdit_editingFini..."
QT_MOC_LITERAL(29, 673, 32), // "on_excludeAllPhenoButton_clicked"
QT_MOC_LITERAL(30, 706, 31), // "on_selectAllPhenoButton_clicked"
QT_MOC_LITERAL(31, 738, 28), // "on_selectPhenoButton_clicked"
QT_MOC_LITERAL(32, 767, 29), // "on_excludePhenoButton_clicked"
QT_MOC_LITERAL(33, 797, 24), // "on_runGwasButton_clicked"
QT_MOC_LITERAL(34, 822, 21), // "on_closeRunningWidget"
QT_MOC_LITERAL(35, 844, 34), // "on_toolComboBox_currentTextCh..."
QT_MOC_LITERAL(36, 879, 4), // "tool"
QT_MOC_LITERAL(37, 884, 27), // "on_detailPushButton_clicked"
QT_MOC_LITERAL(38, 912, 28), // "on_drawManPushButton_clicked"
QT_MOC_LITERAL(39, 941, 27), // "on_drawQQPushButton_clicked"
QT_MOC_LITERAL(40, 969, 35), // "on_qqmanGwasReultBrowButton_c..."
QT_MOC_LITERAL(41, 1005, 26), // "on_ldRunPushButton_clicked"
QT_MOC_LITERAL(42, 1032, 24), // "graphViewer_clicked_slot"
QT_MOC_LITERAL(43, 1057, 32), // "on_refGeneFileBrowButton_clicked"
QT_MOC_LITERAL(44, 1090, 31), // "on_refSeqFileBrowButton_clicked"
QT_MOC_LITERAL(45, 1122, 29), // "on_avinFileBrowButton_clicked"
QT_MOC_LITERAL(46, 1152, 36), // "on_funcAnnoRefFileBrowButton_..."
QT_MOC_LITERAL(47, 1189, 35), // "on_snpPosFileFileBrowButton_c..."
QT_MOC_LITERAL(48, 1225, 29), // "on_annoPvalBrowButton_clicked"
QT_MOC_LITERAL(49, 1255, 30), // "on_annotationRunButton_clicked"
QT_MOC_LITERAL(50, 1286, 29), // "on_annoStepPushButton_clicked"
QT_MOC_LITERAL(51, 1316, 27), // "on_pcaRunPushButton_clicked"
QT_MOC_LITERAL(52, 1344, 35), // "on_qualCtrlDetailPushButton_c..."
QT_MOC_LITERAL(53, 1380, 18), // "on_outMessageReady"
QT_MOC_LITERAL(54, 1399, 18), // "on_errMessageReady"
QT_MOC_LITERAL(55, 1418, 18), // "on_setLineEditText"
QT_MOC_LITERAL(56, 1437, 8), // "lineEdit"
QT_MOC_LITERAL(57, 1446, 19), // "on_setButtonEnabled"
QT_MOC_LITERAL(58, 1466, 6), // "Button"
QT_MOC_LITERAL(59, 1473, 7), // "boolean"
QT_MOC_LITERAL(60, 1481, 22), // "on_setGraphViewerGraph"
QT_MOC_LITERAL(61, 1504, 17), // "on_resetWindowSig"
QT_MOC_LITERAL(62, 1522, 15), // "on_setMsgBoxSig"
QT_MOC_LITERAL(63, 1538, 21), // "cmdGWASButton_clicked"
QT_MOC_LITERAL(64, 1560, 24), // "pca_ld_cmdButton_clicked"
QT_MOC_LITERAL(65, 1585, 27) // "annotationCmdButton_clicked"

    },
    "MainWindow\0terminateProcess\0\0"
    "runningMsgWidgetClearText\0"
    "runningMsgWidgetAppendText\0text\0"
    "setLineEditTextSig\0QLineEdit*\0"
    "setButtonEnabledSig\0QAbstractButton*\0"
    "setGraphViewerGraphSig\0plot\0resetWindowSig\0"
    "setMsgBoxSig\0title\0on_pheFileToolButton_clicked\0"
    "on_genoFileToolButton_clicked\0"
    "on_mapFileToolButton_clicked\0"
    "on_covarFileToolButton_clicked\0"
    "on_kinFileToolButton_clicked\0"
    "on_pheFileToolButton_closeFileSig\0"
    "on_genoFileToolButton_closeFileSig\0"
    "on_mapFileToolButton_closeFileSig\0"
    "on_kinFileToolButton_closeFileSig\0"
    "on_covarFileToolButton_closeFileSig\0"
    "on_outdirBrowButton_clicked\0"
    "on_projectNameLineEdit_textChanged\0"
    "on_projectNameLineEdit_editingFinished\0"
    "on_outdirLineEdit_editingFinished\0"
    "on_excludeAllPhenoButton_clicked\0"
    "on_selectAllPhenoButton_clicked\0"
    "on_selectPhenoButton_clicked\0"
    "on_excludePhenoButton_clicked\0"
    "on_runGwasButton_clicked\0on_closeRunningWidget\0"
    "on_toolComboBox_currentTextChanged\0"
    "tool\0on_detailPushButton_clicked\0"
    "on_drawManPushButton_clicked\0"
    "on_drawQQPushButton_clicked\0"
    "on_qqmanGwasReultBrowButton_clicked\0"
    "on_ldRunPushButton_clicked\0"
    "graphViewer_clicked_slot\0"
    "on_refGeneFileBrowButton_clicked\0"
    "on_refSeqFileBrowButton_clicked\0"
    "on_avinFileBrowButton_clicked\0"
    "on_funcAnnoRefFileBrowButton_clicked\0"
    "on_snpPosFileFileBrowButton_clicked\0"
    "on_annoPvalBrowButton_clicked\0"
    "on_annotationRunButton_clicked\0"
    "on_annoStepPushButton_clicked\0"
    "on_pcaRunPushButton_clicked\0"
    "on_qualCtrlDetailPushButton_clicked\0"
    "on_outMessageReady\0on_errMessageReady\0"
    "on_setLineEditText\0lineEdit\0"
    "on_setButtonEnabled\0Button\0boolean\0"
    "on_setGraphViewerGraph\0on_resetWindowSig\0"
    "on_setMsgBoxSig\0cmdGWASButton_clicked\0"
    "pca_ld_cmdButton_clicked\0"
    "annotationCmdButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  289,    2, 0x06 /* Public */,
       3,    0,  290,    2, 0x06 /* Public */,
       4,    1,  291,    2, 0x06 /* Public */,
       6,    2,  294,    2, 0x06 /* Public */,
       8,    2,  299,    2, 0x06 /* Public */,
      10,    1,  304,    2, 0x06 /* Public */,
      12,    0,  307,    2, 0x06 /* Public */,
      13,    2,  308,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  313,    2, 0x08 /* Private */,
      16,    0,  314,    2, 0x08 /* Private */,
      17,    0,  315,    2, 0x08 /* Private */,
      18,    0,  316,    2, 0x08 /* Private */,
      19,    0,  317,    2, 0x08 /* Private */,
      20,    0,  318,    2, 0x08 /* Private */,
      21,    0,  319,    2, 0x08 /* Private */,
      22,    0,  320,    2, 0x08 /* Private */,
      23,    0,  321,    2, 0x08 /* Private */,
      24,    0,  322,    2, 0x08 /* Private */,
      25,    0,  323,    2, 0x08 /* Private */,
      26,    1,  324,    2, 0x08 /* Private */,
      27,    0,  327,    2, 0x08 /* Private */,
      28,    0,  328,    2, 0x08 /* Private */,
      29,    0,  329,    2, 0x08 /* Private */,
      30,    0,  330,    2, 0x08 /* Private */,
      31,    0,  331,    2, 0x08 /* Private */,
      32,    0,  332,    2, 0x08 /* Private */,
      33,    0,  333,    2, 0x08 /* Private */,
      34,    0,  334,    2, 0x08 /* Private */,
      35,    1,  335,    2, 0x08 /* Private */,
      37,    0,  338,    2, 0x08 /* Private */,
      38,    0,  339,    2, 0x08 /* Private */,
      39,    0,  340,    2, 0x08 /* Private */,
      40,    0,  341,    2, 0x08 /* Private */,
      41,    0,  342,    2, 0x08 /* Private */,
      42,    0,  343,    2, 0x08 /* Private */,
      43,    0,  344,    2, 0x08 /* Private */,
      44,    0,  345,    2, 0x08 /* Private */,
      45,    0,  346,    2, 0x08 /* Private */,
      46,    0,  347,    2, 0x08 /* Private */,
      47,    0,  348,    2, 0x08 /* Private */,
      48,    0,  349,    2, 0x08 /* Private */,
      49,    0,  350,    2, 0x08 /* Private */,
      50,    0,  351,    2, 0x08 /* Private */,
      51,    0,  352,    2, 0x08 /* Private */,
      52,    0,  353,    2, 0x08 /* Private */,
      53,    1,  354,    2, 0x08 /* Private */,
      54,    1,  357,    2, 0x08 /* Private */,
      55,    2,  360,    2, 0x08 /* Private */,
      57,    2,  365,    2, 0x08 /* Private */,
      60,    1,  370,    2, 0x08 /* Private */,
      61,    0,  373,    2, 0x08 /* Private */,
      62,    2,  374,    2, 0x08 /* Private */,
      63,    0,  379,    2, 0x08 /* Private */,
      64,    0,  380,    2, 0x08 /* Private */,
      65,    0,  381,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,   56,    5,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   58,   59,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->terminateProcess(); break;
        case 1: _t->runningMsgWidgetClearText(); break;
        case 2: _t->runningMsgWidgetAppendText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setLineEditTextSig((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->setButtonEnabledSig((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->setGraphViewerGraphSig((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 6: _t->resetWindowSig(); break;
        case 7: _t->setMsgBoxSig((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->on_pheFileToolButton_clicked(); break;
        case 9: _t->on_genoFileToolButton_clicked(); break;
        case 10: _t->on_mapFileToolButton_clicked(); break;
        case 11: _t->on_covarFileToolButton_clicked(); break;
        case 12: _t->on_kinFileToolButton_clicked(); break;
        case 13: _t->on_pheFileToolButton_closeFileSig(); break;
        case 14: _t->on_genoFileToolButton_closeFileSig(); break;
        case 15: _t->on_mapFileToolButton_closeFileSig(); break;
        case 16: _t->on_kinFileToolButton_closeFileSig(); break;
        case 17: _t->on_covarFileToolButton_closeFileSig(); break;
        case 18: _t->on_outdirBrowButton_clicked(); break;
        case 19: _t->on_projectNameLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->on_projectNameLineEdit_editingFinished(); break;
        case 21: _t->on_outdirLineEdit_editingFinished(); break;
        case 22: _t->on_excludeAllPhenoButton_clicked(); break;
        case 23: _t->on_selectAllPhenoButton_clicked(); break;
        case 24: _t->on_selectPhenoButton_clicked(); break;
        case 25: _t->on_excludePhenoButton_clicked(); break;
        case 26: _t->on_runGwasButton_clicked(); break;
        case 27: _t->on_closeRunningWidget(); break;
        case 28: _t->on_toolComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->on_detailPushButton_clicked(); break;
        case 30: _t->on_drawManPushButton_clicked(); break;
        case 31: _t->on_drawQQPushButton_clicked(); break;
        case 32: _t->on_qqmanGwasReultBrowButton_clicked(); break;
        case 33: _t->on_ldRunPushButton_clicked(); break;
        case 34: _t->graphViewer_clicked_slot(); break;
        case 35: _t->on_refGeneFileBrowButton_clicked(); break;
        case 36: _t->on_refSeqFileBrowButton_clicked(); break;
        case 37: _t->on_avinFileBrowButton_clicked(); break;
        case 38: _t->on_funcAnnoRefFileBrowButton_clicked(); break;
        case 39: _t->on_snpPosFileFileBrowButton_clicked(); break;
        case 40: _t->on_annoPvalBrowButton_clicked(); break;
        case 41: _t->on_annotationRunButton_clicked(); break;
        case 42: _t->on_annoStepPushButton_clicked(); break;
        case 43: _t->on_pcaRunPushButton_clicked(); break;
        case 44: _t->on_qualCtrlDetailPushButton_clicked(); break;
        case 45: _t->on_outMessageReady((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->on_errMessageReady((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 47: _t->on_setLineEditText((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 48: _t->on_setButtonEnabled((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->on_setGraphViewerGraph((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 50: _t->on_resetWindowSig(); break;
        case 51: _t->on_setMsgBoxSig((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 52: _t->cmdGWASButton_clicked(); break;
        case 53: _t->pca_ld_cmdButton_clicked(); break;
        case 54: _t->annotationCmdButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::terminateProcess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::runningMsgWidgetClearText)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::runningMsgWidgetAppendText)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QLineEdit * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setLineEditTextSig)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QAbstractButton * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setButtonEnabledSig)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setGraphViewerGraphSig)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::resetWindowSig)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setMsgBoxSig)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::terminateProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::runningMsgWidgetClearText()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::runningMsgWidgetAppendText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::setLineEditTextSig(QLineEdit * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::setButtonEnabledSig(QAbstractButton * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::setGraphViewerGraphSig(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::resetWindowSig()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainWindow::setMsgBoxSig(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
