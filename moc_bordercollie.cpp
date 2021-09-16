/****************************************************************************
** Meta object code from reading C++ file 'bordercollie.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../borderCollie/bordercollie.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bordercollie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bordercollie_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bordercollie_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bordercollie_t qt_meta_stringdata_bordercollie = {
    {
QT_MOC_LITERAL(0, 0, 12), // "bordercollie"
QT_MOC_LITERAL(1, 13, 10), // "mouseMove1"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 38, 5), // "event"
QT_MOC_LITERAL(5, 44, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 66, 22), // "on_addData_btn_clicked"
QT_MOC_LITERAL(7, 89, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(8, 117, 5), // "index"
QT_MOC_LITERAL(9, 123, 22) // "on_display_btn_clicked"

    },
    "bordercollie\0mouseMove1\0\0QMouseEvent*\0"
    "event\0on_pushButton_clicked\0"
    "on_addData_btn_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_display_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bordercollie[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void bordercollie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bordercollie *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseMove1((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_addData_btn_clicked(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_display_btn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject bordercollie::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_bordercollie.data,
    qt_meta_data_bordercollie,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *bordercollie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bordercollie::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bordercollie.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int bordercollie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
