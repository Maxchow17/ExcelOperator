/****************************************************************************
** Meta object code from reading C++ file 'qworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qworker_t {
    QByteArrayData data[12];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qworker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qworker_t qt_meta_stringdata_Qworker = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Qworker"
QT_MOC_LITERAL(1, 8, 9), // "endThread"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "finished"
QT_MOC_LITERAL(4, 28, 7), // "Request"
QT_MOC_LITERAL(5, 36, 14), // "StartAddingPic"
QT_MOC_LITERAL(6, 51, 5), // "total"
QT_MOC_LITERAL(7, 57, 16), // "oneItemCompleteW"
QT_MOC_LITERAL(8, 74, 9), // "indicator"
QT_MOC_LITERAL(9, 84, 16), // "numOfNotFoundPic"
QT_MOC_LITERAL(10, 101, 3), // "num"
QT_MOC_LITERAL(11, 105, 6) // "DoWork"

    },
    "Qworker\0endThread\0\0finished\0Request\0"
    "StartAddingPic\0total\0oneItemCompleteW\0"
    "indicator\0numOfNotFoundPic\0num\0DoWork"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qworker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
       9,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Qworker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Qworker *_t = static_cast<Qworker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->endThread(); break;
        case 1: _t->finished(); break;
        case 2: _t->Request(); break;
        case 3: _t->StartAddingPic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->oneItemCompleteW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->numOfNotFoundPic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->DoWork(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Qworker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qworker::endThread)) {
                *result = 0;
            }
        }
        {
            typedef void (Qworker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qworker::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (Qworker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qworker::Request)) {
                *result = 2;
            }
        }
        {
            typedef void (Qworker::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qworker::StartAddingPic)) {
                *result = 3;
            }
        }
        {
            typedef void (Qworker::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qworker::oneItemCompleteW)) {
                *result = 4;
            }
        }
        {
            typedef void (Qworker::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qworker::numOfNotFoundPic)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject Qworker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qworker.data,
      qt_meta_data_Qworker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qworker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qworker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qworker.stringdata0))
        return static_cast<void*>(const_cast< Qworker*>(this));
    return QObject::qt_metacast(_clname);
}

int Qworker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Qworker::endThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Qworker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Qworker::Request()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Qworker::StartAddingPic(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qworker::oneItemCompleteW(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Qworker::numOfNotFoundPic(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
