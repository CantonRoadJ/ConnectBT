/****************************************************************************
** Meta object code from reading C++ file 'readcommand.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "readcommand.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readcommand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReadCommand_t {
    QByteArrayData data[10];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReadCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReadCommand_t qt_meta_stringdata_ReadCommand = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ReadCommand"
QT_MOC_LITERAL(1, 12, 14), // "comingcallShow"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "outtingcallShow"
QT_MOC_LITERAL(4, 44, 12), // "contactsShow"
QT_MOC_LITERAL(5, 57, 16), // "finishUpdateShow"
QT_MOC_LITERAL(6, 74, 11), // "recordsShow"
QT_MOC_LITERAL(7, 86, 15), // "BT_Connect_INFO"
QT_MOC_LITERAL(8, 102, 12), // "BT_Scan_INFO"
QT_MOC_LITERAL(9, 115, 17) // "BT_Phone_pickDown"

    },
    "ReadCommand\0comingcallShow\0\0outtingcallShow\0"
    "contactsShow\0finishUpdateShow\0recordsShow\0"
    "BT_Connect_INFO\0BT_Scan_INFO\0"
    "BT_Phone_pickDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReadCommand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    2,   60,    2, 0x06 /* Public */,
       5,    0,   65,    2, 0x06 /* Public */,
       6,    4,   66,    2, 0x06 /* Public */,
       7,    3,   75,    2, 0x06 /* Public */,
       8,    2,   82,    2, 0x06 /* Public */,
       9,    0,   87,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,

       0        // eod
};

void ReadCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReadCommand *_t = static_cast<ReadCommand *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comingcallShow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->outtingcallShow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->contactsShow((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->finishUpdateShow(); break;
        case 4: _t->recordsShow((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 5: _t->BT_Connect_INFO((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->BT_Scan_INFO((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->BT_Phone_pickDown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ReadCommand::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadCommand::comingcallShow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ReadCommand::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadCommand::outtingcallShow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ReadCommand::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadCommand::contactsShow)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ReadCommand::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadCommand::finishUpdateShow)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ReadCommand::*_t)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadCommand::recordsShow)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ReadCommand::*_t)(int , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadCommand::BT_Connect_INFO)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ReadCommand::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadCommand::BT_Scan_INFO)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ReadCommand::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadCommand::BT_Phone_pickDown)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject ReadCommand::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ReadCommand.data,
      qt_meta_data_ReadCommand,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReadCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReadCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReadCommand.stringdata0))
        return static_cast<void*>(const_cast< ReadCommand*>(this));
    return QThread::qt_metacast(_clname);
}

int ReadCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void ReadCommand::comingcallShow(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReadCommand::outtingcallShow(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReadCommand::contactsShow(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ReadCommand::finishUpdateShow()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void ReadCommand::recordsShow(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ReadCommand::BT_Connect_INFO(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ReadCommand::BT_Scan_INFO(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ReadCommand::BT_Phone_pickDown()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
