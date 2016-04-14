/****************************************************************************
** Meta object code from reading C++ file 'exceloperator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../exceloperator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exceloperator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExcelOperator_t {
    QByteArrayData data[14];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExcelOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExcelOperator_t qt_meta_stringdata_ExcelOperator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ExcelOperator"
QT_MOC_LITERAL(1, 14, 9), // "endThread"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "slotExecute"
QT_MOC_LITERAL(4, 37, 10), // "slotBrowse"
QT_MOC_LITERAL(5, 48, 21), // "slotBrowseExcelTarget"
QT_MOC_LITERAL(6, 70, 12), // "completeTips"
QT_MOC_LITERAL(7, 83, 13), // "nNotFoundPics"
QT_MOC_LITERAL(8, 97, 12), // "showProgress"
QT_MOC_LITERAL(9, 110, 1), // "i"
QT_MOC_LITERAL(10, 112, 15), // "oneItemComplete"
QT_MOC_LITERAL(11, 128, 14), // "setAllShutDown"
QT_MOC_LITERAL(12, 143, 18), // "setLockAspectRatio"
QT_MOC_LITERAL(13, 162, 9) // "isChecked"

    },
    "ExcelOperator\0endThread\0\0slotExecute\0"
    "slotBrowse\0slotBrowseExcelTarget\0"
    "completeTips\0nNotFoundPics\0showProgress\0"
    "i\0oneItemComplete\0setAllShutDown\0"
    "setLockAspectRatio\0isChecked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExcelOperator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,
      11,    0,   72,    2, 0x0a /* Public */,
      12,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void ExcelOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExcelOperator *_t = static_cast<ExcelOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->endThread(); break;
        case 1: _t->slotExecute(); break;
        case 2: _t->slotBrowse(); break;
        case 3: _t->slotBrowseExcelTarget(); break;
        case 4: _t->completeTips((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->oneItemComplete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setAllShutDown(); break;
        case 8: _t->setLockAspectRatio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExcelOperator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExcelOperator::endThread)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ExcelOperator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ExcelOperator.data,
      qt_meta_data_ExcelOperator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExcelOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExcelOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExcelOperator.stringdata0))
        return static_cast<void*>(const_cast< ExcelOperator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ExcelOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ExcelOperator::endThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
