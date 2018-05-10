/****************************************************************************
** Meta object code from reading C++ file 'magread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "magread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MagRead_t {
    QByteArrayData data[18];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagRead_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagRead_t qt_meta_stringdata_MagRead = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MagRead"
QT_MOC_LITERAL(1, 8, 8), // "cardRead"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "MagCard"
QT_MOC_LITERAL(4, 26, 5), // "_card"
QT_MOC_LITERAL(5, 32, 6), // "notice"
QT_MOC_LITERAL(6, 39, 3), // "msg"
QT_MOC_LITERAL(7, 43, 7), // "timeout"
QT_MOC_LITERAL(8, 51, 10), // "mboxStatus"
QT_MOC_LITERAL(9, 62, 6), // "status"
QT_MOC_LITERAL(10, 69, 10), // "toggleRead"
QT_MOC_LITERAL(11, 80, 17), // "togglePartialRead"
QT_MOC_LITERAL(12, 98, 12), // "_partialRead"
QT_MOC_LITERAL(13, 111, 13), // "aboutDialogue"
QT_MOC_LITERAL(14, 125, 8), // "showData"
QT_MOC_LITERAL(15, 134, 12), // "settingsPage"
QT_MOC_LITERAL(16, 147, 12), // "autoReorient"
QT_MOC_LITERAL(17, 160, 7) // "enabled"

    },
    "MagRead\0cardRead\0\0MagCard\0_card\0notice\0"
    "msg\0timeout\0mboxStatus\0status\0toggleRead\0"
    "togglePartialRead\0_partialRead\0"
    "aboutDialogue\0showData\0settingsPage\0"
    "autoReorient\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagRead[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       5,    3,   67,    2, 0x08 /* Private */,
       5,    2,   74,    2, 0x28 /* Private | MethodCloned */,
       5,    1,   79,    2, 0x28 /* Private | MethodCloned */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void MagRead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MagRead *_t = static_cast<MagRead *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cardRead((*reinterpret_cast< const MagCard(*)>(_a[1]))); break;
        case 1: _t->notice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< mboxStatus(*)>(_a[3]))); break;
        case 2: _t->notice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->notice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->toggleRead(); break;
        case 5: _t->togglePartialRead((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->aboutDialogue(); break;
        case 7: _t->showData(); break;
        case 8: _t->settingsPage(); break;
        case 9: _t->autoReorient((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MagRead::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MagRead.data,
      qt_meta_data_MagRead,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MagRead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagRead::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MagRead.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MagRead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
