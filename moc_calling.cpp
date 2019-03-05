/****************************************************************************
** Meta object code from reading C++ file 'calling.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "calling.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calling.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Calling_t {
    QByteArrayData data[7];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calling_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calling_t qt_meta_stringdata_Calling = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Calling"
QT_MOC_LITERAL(1, 8, 14), // "setPhoneNumber"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "phoneNumber"
QT_MOC_LITERAL(4, 36, 34), // "on_pushButton_closeConnect_cl..."
QT_MOC_LITERAL(5, 71, 29), // "on_pushButton_Connect_clicked"
QT_MOC_LITERAL(6, 101, 30) // "on_pushButton_keyboard_clicked"

    },
    "Calling\0setPhoneNumber\0\0phoneNumber\0"
    "on_pushButton_closeConnect_clicked\0"
    "on_pushButton_Connect_clicked\0"
    "on_pushButton_keyboard_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calling[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Calling::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Calling *_t = static_cast<Calling *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPhoneNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_closeConnect_clicked(); break;
        case 2: _t->on_pushButton_Connect_clicked(); break;
        case 3: _t->on_pushButton_keyboard_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Calling::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Calling.data,
      qt_meta_data_Calling,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Calling::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calling::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Calling.stringdata0))
        return static_cast<void*>(const_cast< Calling*>(this));
    return QWidget::qt_metacast(_clname);
}

int Calling::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
