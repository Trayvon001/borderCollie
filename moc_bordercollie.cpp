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
#include <QtCore/QVector>
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
    QByteArrayData data[76];
    char stringdata0[1430];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bordercollie_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bordercollie_t qt_meta_stringdata_bordercollie = {
    {
QT_MOC_LITERAL(0, 0, 12), // "bordercollie"
QT_MOC_LITERAL(1, 13, 12), // "connect_wifi"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "connectCMD"
QT_MOC_LITERAL(4, 38, 10), // "IP_Address"
QT_MOC_LITERAL(5, 49, 9), // "wifi_port"
QT_MOC_LITERAL(6, 59, 9), // "init_wifi"
QT_MOC_LITERAL(7, 69, 15), // "send_cmd_to_mcu"
QT_MOC_LITERAL(8, 85, 7), // "cmd2mcu"
QT_MOC_LITERAL(9, 93, 16), // "init_doc_process"
QT_MOC_LITERAL(10, 110, 14), // "search_doc_cmd"
QT_MOC_LITERAL(11, 125, 11), // "search_mode"
QT_MOC_LITERAL(12, 137, 13), // "target_string"
QT_MOC_LITERAL(13, 151, 10), // "fuzzy_mode"
QT_MOC_LITERAL(14, 162, 15), // "target_doc_path"
QT_MOC_LITERAL(15, 178, 14), // "create_doc_cmd"
QT_MOC_LITERAL(16, 193, 10), // "titleInput"
QT_MOC_LITERAL(17, 204, 11), // "authorInput"
QT_MOC_LITERAL(18, 216, 13), // "authorContact"
QT_MOC_LITERAL(19, 230, 9), // "tagsInput"
QT_MOC_LITERAL(20, 240, 12), // "contentInput"
QT_MOC_LITERAL(21, 253, 8), // "filePath"
QT_MOC_LITERAL(22, 262, 8), // "fileName"
QT_MOC_LITERAL(23, 271, 15), // "add_content_cmd"
QT_MOC_LITERAL(24, 287, 11), // "content2add"
QT_MOC_LITERAL(25, 299, 12), // "subtitle2add"
QT_MOC_LITERAL(26, 312, 16), // "target_file_path"
QT_MOC_LITERAL(27, 329, 10), // "mouseMove1"
QT_MOC_LITERAL(28, 340, 12), // "QMouseEvent*"
QT_MOC_LITERAL(29, 353, 5), // "event"
QT_MOC_LITERAL(30, 359, 18), // "sliderValueChanged"
QT_MOC_LITERAL(31, 378, 13), // "sliderValueUI"
QT_MOC_LITERAL(32, 392, 21), // "calculateNetworkSpeed"
QT_MOC_LITERAL(33, 414, 21), // "receive_connect_state"
QT_MOC_LITERAL(34, 436, 14), // "connect_method"
QT_MOC_LITERAL(35, 451, 13), // "connect_state"
QT_MOC_LITERAL(36, 465, 12), // "receive_data"
QT_MOC_LITERAL(37, 478, 18), // "received_data_type"
QT_MOC_LITERAL(38, 497, 15), // "QVector<double>"
QT_MOC_LITERAL(39, 513, 13), // "received_data"
QT_MOC_LITERAL(40, 527, 21), // "display_search_result"
QT_MOC_LITERAL(41, 549, 11), // "result_path"
QT_MOC_LITERAL(42, 561, 21), // "display_create_result"
QT_MOC_LITERAL(43, 583, 13), // "create_result"
QT_MOC_LITERAL(44, 597, 18), // "display_add_result"
QT_MOC_LITERAL(45, 616, 9), // "add_state"
QT_MOC_LITERAL(46, 626, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(47, 648, 22), // "on_addData_btn_clicked"
QT_MOC_LITERAL(48, 671, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(49, 699, 5), // "index"
QT_MOC_LITERAL(50, 705, 22), // "on_display_btn_clicked"
QT_MOC_LITERAL(51, 728, 26), // "on_checkUpdate_btn_clicked"
QT_MOC_LITERAL(52, 755, 16), // "displayUpdateLog"
QT_MOC_LITERAL(53, 772, 22), // "on_connect_btn_clicked"
QT_MOC_LITERAL(54, 795, 24), // "wifi_change_button_state"
QT_MOC_LITERAL(55, 820, 20), // "on_clear_btn_clicked"
QT_MOC_LITERAL(56, 841, 19), // "on_send_btn_clicked"
QT_MOC_LITERAL(57, 861, 26), // "on_stopDisplay_btn_clicked"
QT_MOC_LITERAL(58, 888, 30), // "on_tab2_clearInput_btn_clicked"
QT_MOC_LITERAL(59, 919, 34), // "on_tab2_addSelectedTag_btn_cl..."
QT_MOC_LITERAL(60, 954, 29), // "on_tab2_createDoc_btn_clicked"
QT_MOC_LITERAL(61, 984, 38), // "on_tab2_newAuthorCheckbox_sta..."
QT_MOC_LITERAL(62, 1023, 4), // "arg1"
QT_MOC_LITERAL(63, 1028, 30), // "on_tab2_selectPath_btn_clicked"
QT_MOC_LITERAL(64, 1059, 26), // "on_tab2_search_btn_clicked"
QT_MOC_LITERAL(65, 1086, 29), // "on_tab2_releasePython_clicked"
QT_MOC_LITERAL(66, 1116, 41), // "on_tab2_searchResultDisplay_d..."
QT_MOC_LITERAL(67, 1158, 11), // "QModelIndex"
QT_MOC_LITERAL(68, 1170, 30), // "on_killWordProcess_btn_clicked"
QT_MOC_LITERAL(69, 1201, 28), // "on_tab2_open_in_word_clicked"
QT_MOC_LITERAL(70, 1230, 35), // "on_tab2_clear_search_result_c..."
QT_MOC_LITERAL(71, 1266, 41), // "on_tab2_display_selected_word..."
QT_MOC_LITERAL(72, 1308, 29), // "on_tab2_clearTags_btn_clicked"
QT_MOC_LITERAL(73, 1338, 25), // "on_addContent_btn_clicked"
QT_MOC_LITERAL(74, 1364, 33), // "on_tab2_newTagInput_returnPre..."
QT_MOC_LITERAL(75, 1398, 31) // "on_tab2_delete_last_tag_clicked"

    },
    "bordercollie\0connect_wifi\0\0connectCMD\0"
    "IP_Address\0wifi_port\0init_wifi\0"
    "send_cmd_to_mcu\0cmd2mcu\0init_doc_process\0"
    "search_doc_cmd\0search_mode\0target_string\0"
    "fuzzy_mode\0target_doc_path\0create_doc_cmd\0"
    "titleInput\0authorInput\0authorContact\0"
    "tagsInput\0contentInput\0filePath\0"
    "fileName\0add_content_cmd\0content2add\0"
    "subtitle2add\0target_file_path\0mouseMove1\0"
    "QMouseEvent*\0event\0sliderValueChanged\0"
    "sliderValueUI\0calculateNetworkSpeed\0"
    "receive_connect_state\0connect_method\0"
    "connect_state\0receive_data\0"
    "received_data_type\0QVector<double>\0"
    "received_data\0display_search_result\0"
    "result_path\0display_create_result\0"
    "create_result\0display_add_result\0"
    "add_state\0on_pushButton_clicked\0"
    "on_addData_btn_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_display_btn_clicked\0"
    "on_checkUpdate_btn_clicked\0displayUpdateLog\0"
    "on_connect_btn_clicked\0wifi_change_button_state\0"
    "on_clear_btn_clicked\0on_send_btn_clicked\0"
    "on_stopDisplay_btn_clicked\0"
    "on_tab2_clearInput_btn_clicked\0"
    "on_tab2_addSelectedTag_btn_clicked\0"
    "on_tab2_createDoc_btn_clicked\0"
    "on_tab2_newAuthorCheckbox_stateChanged\0"
    "arg1\0on_tab2_selectPath_btn_clicked\0"
    "on_tab2_search_btn_clicked\0"
    "on_tab2_releasePython_clicked\0"
    "on_tab2_searchResultDisplay_doubleClicked\0"
    "QModelIndex\0on_killWordProcess_btn_clicked\0"
    "on_tab2_open_in_word_clicked\0"
    "on_tab2_clear_search_result_clicked\0"
    "on_tab2_display_selected_word_btn_clicked\0"
    "on_tab2_clearTags_btn_clicked\0"
    "on_addContent_btn_clicked\0"
    "on_tab2_newTagInput_returnPressed\0"
    "on_tab2_delete_last_tag_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bordercollie[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  224,    2, 0x06 /* Public */,
       6,    0,  231,    2, 0x06 /* Public */,
       7,    1,  232,    2, 0x06 /* Public */,
       9,    0,  235,    2, 0x06 /* Public */,
      10,    4,  236,    2, 0x06 /* Public */,
      15,    7,  245,    2, 0x06 /* Public */,
      23,    3,  260,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    1,  267,    2, 0x0a /* Public */,
      30,    1,  270,    2, 0x0a /* Public */,
      32,    0,  273,    2, 0x0a /* Public */,
      33,    2,  274,    2, 0x0a /* Public */,
      36,    2,  279,    2, 0x0a /* Public */,
      40,    1,  284,    2, 0x0a /* Public */,
      42,    3,  287,    2, 0x0a /* Public */,
      44,    1,  294,    2, 0x0a /* Public */,
      46,    0,  297,    2, 0x08 /* Private */,
      47,    0,  298,    2, 0x08 /* Private */,
      48,    1,  299,    2, 0x08 /* Private */,
      50,    0,  302,    2, 0x08 /* Private */,
      51,    0,  303,    2, 0x08 /* Private */,
      52,    0,  304,    2, 0x08 /* Private */,
      53,    0,  305,    2, 0x08 /* Private */,
      54,    1,  306,    2, 0x08 /* Private */,
      55,    0,  309,    2, 0x08 /* Private */,
      56,    0,  310,    2, 0x08 /* Private */,
      57,    0,  311,    2, 0x08 /* Private */,
      58,    0,  312,    2, 0x08 /* Private */,
      59,    0,  313,    2, 0x08 /* Private */,
      60,    0,  314,    2, 0x08 /* Private */,
      61,    1,  315,    2, 0x08 /* Private */,
      63,    0,  318,    2, 0x08 /* Private */,
      64,    0,  319,    2, 0x08 /* Private */,
      65,    0,  320,    2, 0x08 /* Private */,
      66,    1,  321,    2, 0x08 /* Private */,
      68,    0,  324,    2, 0x08 /* Private */,
      69,    0,  325,    2, 0x08 /* Private */,
      70,    0,  326,    2, 0x08 /* Private */,
      71,    0,  327,    2, 0x08 /* Private */,
      72,    0,  328,    2, 0x08 /* Private */,
      73,    0,  329,    2, 0x08 /* Private */,
      74,    0,  330,    2, 0x08 /* Private */,
      75,    0,  331,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   17,   18,   19,   20,   21,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   25,   26,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   34,   35,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 38,   37,   39,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::Double, QMetaType::QString, QMetaType::QString,   43,   21,   22,
    QMetaType::Void, QMetaType::Double,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 67,   49,
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

void bordercollie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bordercollie *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connect_wifi((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 1: _t->init_wifi(); break;
        case 2: _t->send_cmd_to_mcu((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->init_doc_process(); break;
        case 4: _t->search_doc_cmd((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 5: _t->create_doc_cmd((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 6: _t->add_content_cmd((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->mouseMove1((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->calculateNetworkSpeed(); break;
        case 10: _t->receive_connect_state((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 11: _t->receive_data((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2]))); break;
        case 12: _t->display_search_result((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->display_create_result((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 14: _t->display_add_result((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->on_pushButton_clicked(); break;
        case 16: _t->on_addData_btn_clicked(); break;
        case 17: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_display_btn_clicked(); break;
        case 19: _t->on_checkUpdate_btn_clicked(); break;
        case 20: _t->displayUpdateLog(); break;
        case 21: _t->on_connect_btn_clicked(); break;
        case 22: _t->wifi_change_button_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_clear_btn_clicked(); break;
        case 24: _t->on_send_btn_clicked(); break;
        case 25: _t->on_stopDisplay_btn_clicked(); break;
        case 26: _t->on_tab2_clearInput_btn_clicked(); break;
        case 27: _t->on_tab2_addSelectedTag_btn_clicked(); break;
        case 28: _t->on_tab2_createDoc_btn_clicked(); break;
        case 29: _t->on_tab2_newAuthorCheckbox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_tab2_selectPath_btn_clicked(); break;
        case 31: _t->on_tab2_search_btn_clicked(); break;
        case 32: _t->on_tab2_releasePython_clicked(); break;
        case 33: _t->on_tab2_searchResultDisplay_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 34: _t->on_killWordProcess_btn_clicked(); break;
        case 35: _t->on_tab2_open_in_word_clicked(); break;
        case 36: _t->on_tab2_clear_search_result_clicked(); break;
        case 37: _t->on_tab2_display_selected_word_btn_clicked(); break;
        case 38: _t->on_tab2_clearTags_btn_clicked(); break;
        case 39: _t->on_addContent_btn_clicked(); break;
        case 40: _t->on_tab2_newTagInput_returnPressed(); break;
        case 41: _t->on_tab2_delete_last_tag_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
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
            using _t = void (bordercollie::*)(const bool , const QString , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bordercollie::connect_wifi)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (bordercollie::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bordercollie::init_wifi)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (bordercollie::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bordercollie::send_cmd_to_mcu)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (bordercollie::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bordercollie::init_doc_process)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (bordercollie::*)(const int , const QString , const int , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bordercollie::search_doc_cmd)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (bordercollie::*)(const QString , const QString , const QString , const QString , const QString , const QString , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bordercollie::create_doc_cmd)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (bordercollie::*)(const QString , const QString , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bordercollie::add_content_cmd)) {
                *result = 6;
                return;
            }
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
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void bordercollie::connect_wifi(const bool _t1, const QString _t2, const int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bordercollie::init_wifi()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void bordercollie::send_cmd_to_mcu(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void bordercollie::init_doc_process()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void bordercollie::search_doc_cmd(const int _t1, const QString _t2, const int _t3, const QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void bordercollie::create_doc_cmd(const QString _t1, const QString _t2, const QString _t3, const QString _t4, const QString _t5, const QString _t6, const QString _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void bordercollie::add_content_cmd(const QString _t1, const QString _t2, const QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
