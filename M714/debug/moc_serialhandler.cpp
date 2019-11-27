/****************************************************************************
** Meta object code from reading C++ file 'serialhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serialhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialHandler_t {
    QByteArrayData data[12];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialHandler_t qt_meta_stringdata_SerialHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SerialHandler"
QT_MOC_LITERAL(1, 14, 15), // "ReceivedNewData"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "ReceivedError"
QT_MOC_LITERAL(4, 45, 11), // "ReceivedAck"
QT_MOC_LITERAL(5, 57, 10), // "ParsedData"
QT_MOC_LITERAL(6, 68, 9), // "WriteChar"
QT_MOC_LITERAL(7, 78, 1), // "c"
QT_MOC_LITERAL(8, 80, 17), // "WriteMessage_loop"
QT_MOC_LITERAL(9, 98, 9), // "DataReady"
QT_MOC_LITERAL(10, 108, 16), // "OnMessageTimeout"
QT_MOC_LITERAL(11, 125, 21) // "OnMessageTimeout_loop"

    },
    "SerialHandler\0ReceivedNewData\0\0"
    "ReceivedError\0ReceivedAck\0ParsedData\0"
    "WriteChar\0c\0WriteMessage_loop\0DataReady\0"
    "OnMessageTimeout\0OnMessageTimeout_loop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    0,   62,    2, 0x06 /* Public */,
       4,    0,   63,    2, 0x06 /* Public */,
       5,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   65,    2, 0x0a /* Public */,
       8,    0,   68,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Char,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SerialHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReceivedNewData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ReceivedError(); break;
        case 2: _t->ReceivedAck(); break;
        case 3: _t->ParsedData(); break;
        case 4: _t->WriteChar((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 5: _t->WriteMessage_loop(); break;
        case 6: _t->DataReady(); break;
        case 7: _t->OnMessageTimeout(); break;
        case 8: _t->OnMessageTimeout_loop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialHandler::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::ReceivedNewData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::ReceivedError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::ReceivedAck)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::ParsedData)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SerialHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SerialHandler.data,
    qt_meta_data_SerialHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SerialHandler::ReceivedNewData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialHandler::ReceivedError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialHandler::ReceivedAck()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SerialHandler::ParsedData()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
