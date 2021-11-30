/****************************************************************************
** Meta object code from reading C++ file 'docprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../borderCollie/lib/docprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'docprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocProcess_t {
    QByteArrayData data[29];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocProcess_t qt_meta_stringdata_DocProcess = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DocProcess"
QT_MOC_LITERAL(1, 11, 13), // "return_result"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 18), // "searched_file_path"
QT_MOC_LITERAL(4, 45, 20), // "return_create_result"
QT_MOC_LITERAL(5, 66, 12), // "create_state"
QT_MOC_LITERAL(6, 79, 8), // "filePath"
QT_MOC_LITERAL(7, 88, 8), // "fileName"
QT_MOC_LITERAL(8, 97, 25), // "return_add_content_signal"
QT_MOC_LITERAL(9, 123, 8), // "addState"
QT_MOC_LITERAL(10, 132, 22), // "return_search_progress"
QT_MOC_LITERAL(11, 155, 15), // "search_progress"
QT_MOC_LITERAL(12, 171, 15), // "init_doc_thread"
QT_MOC_LITERAL(13, 187, 17), // "search_target_doc"
QT_MOC_LITERAL(14, 205, 11), // "search_mode"
QT_MOC_LITERAL(15, 217, 13), // "target_string"
QT_MOC_LITERAL(16, 231, 10), // "fuzzy_mode"
QT_MOC_LITERAL(17, 242, 15), // "target_doc_path"
QT_MOC_LITERAL(18, 258, 10), // "create_doc"
QT_MOC_LITERAL(19, 269, 10), // "titleInput"
QT_MOC_LITERAL(20, 280, 11), // "authorInput"
QT_MOC_LITERAL(21, 292, 13), // "authorContact"
QT_MOC_LITERAL(22, 306, 9), // "tagsInput"
QT_MOC_LITERAL(23, 316, 12), // "contentInput"
QT_MOC_LITERAL(24, 329, 8), // "subtitle"
QT_MOC_LITERAL(25, 338, 11), // "add_content"
QT_MOC_LITERAL(26, 350, 11), // "content2add"
QT_MOC_LITERAL(27, 362, 12), // "subtitle2add"
QT_MOC_LITERAL(28, 375, 16) // "target_file_path"

    },
    "DocProcess\0return_result\0\0searched_file_path\0"
    "return_create_result\0create_state\0"
    "filePath\0fileName\0return_add_content_signal\0"
    "addState\0return_search_progress\0"
    "search_progress\0init_doc_thread\0"
    "search_target_doc\0search_mode\0"
    "target_string\0fuzzy_mode\0target_doc_path\0"
    "create_doc\0titleInput\0authorInput\0"
    "authorContact\0tagsInput\0contentInput\0"
    "subtitle\0add_content\0content2add\0"
    "subtitle2add\0target_file_path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocProcess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    3,   57,    2, 0x06 /* Public */,
       8,    1,   64,    2, 0x06 /* Public */,
      10,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   70,    2, 0x0a /* Public */,
      13,    4,   71,    2, 0x0a /* Public */,
      18,    8,   80,    2, 0x0a /* Public */,
      25,    3,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   19,   20,   21,   22,   23,    6,    7,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   26,   27,   28,

       0        // eod
};

void DocProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->return_result((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->return_create_result((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->return_add_content_signal((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->return_search_progress((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->init_doc_thread(); break;
        case 5: _t->search_target_doc((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 6: _t->create_doc((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8]))); break;
        case 7: _t->add_content((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DocProcess::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocProcess::return_result)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DocProcess::*)(const double , const QString , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocProcess::return_create_result)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DocProcess::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocProcess::return_add_content_signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DocProcess::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocProcess::return_search_progress)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DocProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DocProcess.data,
    qt_meta_data_DocProcess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DocProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocProcess.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void DocProcess::return_result(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DocProcess::return_create_result(const double _t1, const QString _t2, const QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DocProcess::return_add_content_signal(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DocProcess::return_search_progress(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
