/****************************************************************************
** Meta object code from reading C++ file 'noform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "noform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NOForm_t {
    QByteArrayData data[6];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NOForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NOForm_t qt_meta_stringdata_NOForm = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 27),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 27),
QT_MOC_LITERAL(4, 64, 22),
QT_MOC_LITERAL(5, 87, 23)
    },
    "NOForm\0on_increaseNOButton_clicked\0\0"
    "on_decreaseNOButton_clicked\0"
    "on_startButton_clicked\0on_cancelButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NOForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NOForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NOForm *_t = static_cast<NOForm *>(_o);
        switch (_id) {
        case 0: _t->on_increaseNOButton_clicked(); break;
        case 1: _t->on_decreaseNOButton_clicked(); break;
        case 2: _t->on_startButton_clicked(); break;
        case 3: _t->on_cancelButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NOForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NOForm.data,
      qt_meta_data_NOForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *NOForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NOForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NOForm.stringdata))
        return static_cast<void*>(const_cast< NOForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int NOForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
