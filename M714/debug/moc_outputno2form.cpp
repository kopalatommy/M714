/****************************************************************************
** Meta object code from reading C++ file 'outputno2form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../outputno2form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputno2form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OutputNO2Form_t {
    QByteArrayData data[9];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutputNO2Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutputNO2Form_t qt_meta_stringdata_OutputNO2Form = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OutputNO2Form"
QT_MOC_LITERAL(1, 14, 8), // "TimedOut"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "ReceivedError"
QT_MOC_LITERAL(4, 38, 8), // "CloseAll"
QT_MOC_LITERAL(5, 47, 24), // "OnDisableButtonsTimerEnd"
QT_MOC_LITERAL(6, 72, 21), // "on_quitButton_clicked"
QT_MOC_LITERAL(7, 94, 27), // "on_scrollLeftButton_clicked"
QT_MOC_LITERAL(8, 122, 28) // "on_scrollRightButton_clicked"

    },
    "OutputNO2Form\0TimedOut\0\0ReceivedError\0"
    "CloseAll\0OnDisableButtonsTimerEnd\0"
    "on_quitButton_clicked\0on_scrollLeftButton_clicked\0"
    "on_scrollRightButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutputNO2Form[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OutputNO2Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OutputNO2Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TimedOut(); break;
        case 1: _t->ReceivedError(); break;
        case 2: _t->CloseAll(); break;
        case 3: _t->OnDisableButtonsTimerEnd(); break;
        case 4: _t->on_quitButton_clicked(); break;
        case 5: _t->on_scrollLeftButton_clicked(); break;
        case 6: _t->on_scrollRightButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OutputNO2Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutputNO2Form::TimedOut)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OutputNO2Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutputNO2Form::ReceivedError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OutputNO2Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutputNO2Form::CloseAll)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OutputNO2Form::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_OutputNO2Form.data,
    qt_meta_data_OutputNO2Form,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OutputNO2Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutputNO2Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutputNO2Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OutputNO2Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void OutputNO2Form::TimedOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OutputNO2Form::ReceivedError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OutputNO2Form::CloseAll()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
