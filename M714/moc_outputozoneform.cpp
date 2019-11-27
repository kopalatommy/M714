/****************************************************************************
** Meta object code from reading C++ file 'outputozoneform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "outputozoneform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputozoneform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OutputOzoneForm_t {
    QByteArrayData data[10];
    char stringdata[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutputOzoneForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutputOzoneForm_t qt_meta_stringdata_OutputOzoneForm = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 8),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 13),
QT_MOC_LITERAL(4, 40, 8),
QT_MOC_LITERAL(5, 49, 14),
QT_MOC_LITERAL(6, 64, 11),
QT_MOC_LITERAL(7, 76, 18),
QT_MOC_LITERAL(8, 95, 23),
QT_MOC_LITERAL(9, 119, 21)
    },
    "OutputOzoneForm\0TimedOut\0\0ReceivedError\0"
    "CloseAll\0CloseWaitLabel\0ReceivedAck\0"
    "UpdateStatusValues\0OnDisableButtonsTimeout\0"
    "on_quitButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutputOzoneForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OutputOzoneForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OutputOzoneForm *_t = static_cast<OutputOzoneForm *>(_o);
        switch (_id) {
        case 0: _t->TimedOut(); break;
        case 1: _t->ReceivedError(); break;
        case 2: _t->CloseAll(); break;
        case 3: _t->CloseWaitLabel(); break;
        case 4: _t->ReceivedAck(); break;
        case 5: _t->UpdateStatusValues(); break;
        case 6: _t->OnDisableButtonsTimeout(); break;
        case 7: _t->on_quitButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OutputOzoneForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OutputOzoneForm::TimedOut)) {
                *result = 0;
            }
        }
        {
            typedef void (OutputOzoneForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OutputOzoneForm::ReceivedError)) {
                *result = 1;
            }
        }
        {
            typedef void (OutputOzoneForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OutputOzoneForm::CloseAll)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OutputOzoneForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OutputOzoneForm.data,
      qt_meta_data_OutputOzoneForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *OutputOzoneForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutputOzoneForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputOzoneForm.stringdata))
        return static_cast<void*>(const_cast< OutputOzoneForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int OutputOzoneForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OutputOzoneForm::TimedOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OutputOzoneForm::ReceivedError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void OutputOzoneForm::CloseAll()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
