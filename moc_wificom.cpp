/****************************************************************************
** Meta object code from reading C++ file 'wificom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../borderCollie/lib/wificom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wificom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WiFiCom_t {
    QByteArrayData data[18];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WiFiCom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WiFiCom_t qt_meta_stringdata_WiFiCom = {
    {
QT_MOC_LITERAL(0, 0, 7), // "WiFiCom"
QT_MOC_LITERAL(1, 8, 18), // "send_connect_state"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "connect_method"
QT_MOC_LITERAL(4, 43, 13), // "connect_state"
QT_MOC_LITERAL(5, 57, 9), // "send_data"
QT_MOC_LITERAL(6, 67, 9), // "data_type"
QT_MOC_LITERAL(7, 77, 15), // "QVector<double>"
QT_MOC_LITERAL(8, 93, 4), // "data"
QT_MOC_LITERAL(9, 98, 20), // "change_connect_state"
QT_MOC_LITERAL(10, 119, 10), // "connectCMD"
QT_MOC_LITERAL(11, 130, 10), // "IP_Address"
QT_MOC_LITERAL(12, 141, 9), // "wifi_port"
QT_MOC_LITERAL(13, 151, 16), // "init_wifi_thread"
QT_MOC_LITERAL(14, 168, 17), // "send_data_to_wifi"
QT_MOC_LITERAL(15, 186, 13), // "data_for_emit"
QT_MOC_LITERAL(16, 200, 16), // "socket_Read_Data"
QT_MOC_LITERAL(17, 217, 19) // "socket_Disconnected"

    },
    "WiFiCom\0send_connect_state\0\0connect_method\0"
    "connect_state\0send_data\0data_type\0"
    "QVector<double>\0data\0change_connect_state\0"
    "connectCMD\0IP_Address\0wifi_port\0"
    "init_wifi_thread\0send_data_to_wifi\0"
    "data_for_emit\0socket_Read_Data\0"
    "socket_Disconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WiFiCom[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    3,   59,    2, 0x0a /* Public */,
      13,    0,   66,    2, 0x0a /* Public */,
      14,    1,   67,    2, 0x0a /* Public */,
      16,    0,   70,    2, 0x08 /* Private */,
      17,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WiFiCom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WiFiCom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_connect_state((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 1: _t->send_data((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2]))); break;
        case 2: _t->change_connect_state((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 3: _t->init_wifi_thread(); break;
        case 4: _t->send_data_to_wifi((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->socket_Read_Data(); break;
        case 6: _t->socket_Disconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WiFiCom::*)(const bool , const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiFiCom::send_connect_state)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WiFiCom::*)(int , QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiFiCom::send_data)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WiFiCom::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WiFiCom.data,
    qt_meta_data_WiFiCom,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WiFiCom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WiFiCom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WiFiCom.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WiFiCom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WiFiCom::send_connect_state(const bool _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WiFiCom::send_data(int _t1, QVector<double> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
