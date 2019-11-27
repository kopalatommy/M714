/****************************************************************************
** Meta object code from reading C++ file 'no2form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../no2form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'no2form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NO2Form_t {
    QByteArrayData data[11];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NO2Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NO2Form_t qt_meta_stringdata_NO2Form = {
    {
QT_MOC_LITERAL(0, 0, 7), // "NO2Form"
QT_MOC_LITERAL(1, 8, 27), // "on_increaseNOButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "on_decreaseNOButton_clicked"
QT_MOC_LITERAL(4, 65, 30), // "on_increaseOzoneButton_clicked"
QT_MOC_LITERAL(5, 96, 30), // "on_decreaseOzoneButton_clicked"
QT_MOC_LITERAL(6, 127, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(7, 150, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(8, 174, 13), // "OutputTimeout"
QT_MOC_LITERAL(9, 188, 11), // "OutputError"
QT_MOC_LITERAL(10, 200, 8) // "CloseAll"

    },
    "NO2Form\0on_increaseNOButton_clicked\0"
    "\0on_decreaseNOButton_clicked\0"
    "on_increaseOzoneButton_clicked\0"
    "on_decreaseOzoneButton_clicked\0"
    "on_startButton_clicked\0on_cancelButton_clicked\0"
    "OutputTimeout\0OutputError\0CloseAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NO2Form[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void NO2Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NO2Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_increaseNOButton_clicked(); break;
        case 1: _t->on_decreaseNOButton_clicked(); break;
        case 2: _t->on_increaseOzoneButton_clicked(); break;
        case 3: _t->on_decreaseOzoneButton_clicked(); break;
        case 4: _t->on_startButton_clicked(); break;
        case 5: _t->on_cancelButton_clicked(); break;
        case 6: _t->OutputTimeout(); break;
        case 7: _t->OutputError(); break;
        case 8: _t->CloseAll(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NO2Form::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_NO2Form.data,
    qt_meta_data_NO2Form,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NO2Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NO2Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NO2Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NO2Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
