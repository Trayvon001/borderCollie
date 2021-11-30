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
    QByteArrayData data[83];
    char stringdata0[1637];
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
QT_MOC_LITERAL(23, 271, 8), // "subtitle"
QT_MOC_LITERAL(24, 280, 15), // "add_content_cmd"
QT_MOC_LITERAL(25, 296, 11), // "content2add"
QT_MOC_LITERAL(26, 308, 12), // "subtitle2add"
QT_MOC_LITERAL(27, 321, 16), // "target_file_path"
QT_MOC_LITERAL(28, 338, 10), // "mouseMove1"
QT_MOC_LITERAL(29, 349, 12), // "QMouseEvent*"
QT_MOC_LITERAL(30, 362, 5), // "event"
QT_MOC_LITERAL(31, 368, 18), // "sliderValueChanged"
QT_MOC_LITERAL(32, 387, 13), // "sliderValueUI"
QT_MOC_LITERAL(33, 401, 21), // "calculateNetworkSpeed"
QT_MOC_LITERAL(34, 423, 21), // "receive_connect_state"
QT_MOC_LITERAL(35, 445, 14), // "connect_method"
QT_MOC_LITERAL(36, 460, 13), // "connect_state"
QT_MOC_LITERAL(37, 474, 12), // "receive_data"
QT_MOC_LITERAL(38, 487, 18), // "received_data_type"
QT_MOC_LITERAL(39, 506, 15), // "QVector<double>"
QT_MOC_LITERAL(40, 522, 13), // "received_data"
QT_MOC_LITERAL(41, 536, 21), // "display_search_result"
QT_MOC_LITERAL(42, 558, 11), // "result_path"
QT_MOC_LITERAL(43, 570, 21), // "display_create_result"
QT_MOC_LITERAL(44, 592, 13), // "create_result"
QT_MOC_LITERAL(45, 606, 18), // "display_add_result"
QT_MOC_LITERAL(46, 625, 9), // "add_state"
QT_MOC_LITERAL(47, 635, 23), // "display_search_progress"
QT_MOC_LITERAL(48, 659, 15), // "search_progress"
QT_MOC_LITERAL(49, 675, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(50, 697, 22), // "on_addData_btn_clicked"
QT_MOC_LITERAL(51, 720, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(52, 748, 5), // "index"
QT_MOC_LITERAL(53, 754, 22), // "on_display_btn_clicked"
QT_MOC_LITERAL(54, 777, 26), // "on_checkUpdate_btn_clicked"
QT_MOC_LITERAL(55, 804, 16), // "displayUpdateLog"
QT_MOC_LITERAL(56, 821, 22), // "on_connect_btn_clicked"
QT_MOC_LITERAL(57, 844, 24), // "wifi_change_button_state"
QT_MOC_LITERAL(58, 869, 20), // "on_clear_btn_clicked"
QT_MOC_LITERAL(59, 890, 19), // "on_send_btn_clicked"
QT_MOC_LITERAL(60, 910, 26), // "on_stopDisplay_btn_clicked"
QT_MOC_LITERAL(61, 937, 30), // "on_tab2_clearInput_btn_clicked"
QT_MOC_LITERAL(62, 968, 34), // "on_tab2_addSelectedTag_btn_cl..."
QT_MOC_LITERAL(63, 1003, 29), // "on_tab2_createDoc_btn_clicked"
QT_MOC_LITERAL(64, 1033, 38), // "on_tab2_newAuthorCheckbox_sta..."
QT_MOC_LITERAL(65, 1072, 4), // "arg1"
QT_MOC_LITERAL(66, 1077, 30), // "on_tab2_selectPath_btn_clicked"
QT_MOC_LITERAL(67, 1108, 26), // "on_tab2_search_btn_clicked"
QT_MOC_LITERAL(68, 1135, 29), // "on_tab2_releasePython_clicked"
QT_MOC_LITERAL(69, 1165, 41), // "on_tab2_searchResultDisplay_d..."
QT_MOC_LITERAL(70, 1207, 11), // "QModelIndex"
QT_MOC_LITERAL(71, 1219, 30), // "on_killWordProcess_btn_clicked"
QT_MOC_LITERAL(72, 1250, 28), // "on_tab2_open_in_word_clicked"
QT_MOC_LITERAL(73, 1279, 35), // "on_tab2_clear_search_result_c..."
QT_MOC_LITERAL(74, 1315, 41), // "on_tab2_display_selected_word..."
QT_MOC_LITERAL(75, 1357, 29), // "on_tab2_clearTags_btn_clicked"
QT_MOC_LITERAL(76, 1387, 25), // "on_addContent_btn_clicked"
QT_MOC_LITERAL(77, 1413, 33), // "on_tab2_newTagInput_returnPre..."
QT_MOC_LITERAL(78, 1447, 31), // "on_tab2_delete_last_tag_clicked"
QT_MOC_LITERAL(79, 1479, 39), // "on_tab2_addContent_last_histo..."
QT_MOC_LITERAL(80, 1519, 39), // "on_tab2_addContent_next_histo..."
QT_MOC_LITERAL(81, 1559, 38), // "on_tab2_createDoc_last_histor..."
QT_MOC_LITERAL(82, 1598, 38) // "on_tab2_createDoc_next_histor..."

    },
    "bordercollie\0connect_wifi\0\0connectCMD\0"
    "IP_Address\0wifi_port\0init_wifi\0"
    "send_cmd_to_mcu\0cmd2mcu\0init_doc_process\0"
    "search_doc_cmd\0search_mode\0target_string\0"
    "fuzzy_mode\0target_doc_path\0create_doc_cmd\0"
    "titleInput\0authorInput\0authorContact\0"
    "tagsInput\0contentInput\0filePath\0"
    "fileName\0subtitle\0add_content_cmd\0"
    "content2add\0subtitle2add\0target_file_path\0"
    "mouseMove1\0QMouseEvent*\0event\0"
    "sliderValueChanged\0sliderValueUI\0"
    "calculateNetworkSpeed\0receive_connect_state\0"
    "connect_method\0connect_state\0receive_data\0"
    "received_data_type\0QVector<double>\0"
    "received_data\0display_search_result\0"
    "result_path\0display_create_result\0"
    "create_result\0display_add_result\0"
    "add_state\0display_search_progress\0"
    "search_progress\0on_pushButton_clicked\0"
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
    "on_tab2_delete_last_tag_clicked\0"
    "on_tab2_addContent_last_history_clicked\0"
    "on_tab2_addContent_next_history_clicked\0"
    "on_tab2_createDoc_last_history_clicked\0"
    "on_tab2_createDoc_next_history_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bordercollie[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  249,    2, 0x06 /* Public */,
       6,    0,  256,    2, 0x06 /* Public */,
       7,    1,  257,    2, 0x06 /* Public */,
       9,    0,  260,    2, 0x06 /* Public */,
      10,    4,  261,    2, 0x06 /* Public */,
      15,    8,  270,    2, 0x06 /* Public */,
      24,    3,  287,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    1,  294,    2, 0x0a /* Public */,
      31,    1,  297,    2, 0x0a /* Public */,
      33,    0,  300,    2, 0x0a /* Public */,
      34,    2,  301,    2, 0x0a /* Public */,
      37,    2,  306,    2, 0x0a /* Public */,
      41,    1,  311,    2, 0x0a /* Public */,
      43,    3,  314,    2, 0x0a /* Public */,
      45,    1,  321,    2, 0x0a /* Public */,
      47,    1,  324,    2, 0x0a /* Public */,
      49,    0,  327,    2, 0x08 /* Private */,
      50,    0,  328,    2, 0x08 /* Private */,
      51,    1,  329,    2, 0x08 /* Private */,
      53,    0,  332,    2, 0x08 /* Private */,
      54,    0,  333,    2, 0x08 /* Private */,
      55,    0,  334,    2, 0x08 /* Private */,
      56,    0,  335,    2, 0x08 /* Private */,
      57,    1,  336,    2, 0x08 /* Private */,
      58,    0,  339,    2, 0x08 /* Private */,
      59,    0,  340,    2, 0x08 /* Private */,
      60,    0,  341,    2, 0x08 /* Private */,
      61,    0,  342,    2, 0x08 /* Private */,
      62,    0,  343,    2, 0x08 /* Private */,
      63,    0,  344,    2, 0x08 /* Private */,
      64,    1,  345,    2, 0x08 /* Private */,
      66,    0,  348,    2, 0x08 /* Private */,
      67,    0,  349,    2, 0x08 /* Private */,
      68,    0,  350,    2, 0x08 /* Private */,
      69,    1,  351,    2, 0x08 /* Private */,
      71,    0,  354,    2, 0x08 /* Private */,
      72,    0,  355,    2, 0x08 /* Private */,
      73,    0,  356,    2, 0x08 /* Private */,
      74,    0,  357,    2, 0x08 /* Private */,
      75,    0,  358,    2, 0x08 /* Private */,
      76,    0,  359,    2, 0x08 /* Private */,
      77,    0,  360,    2, 0x08 /* Private */,
      78,    0,  361,    2, 0x08 /* Private */,
      79,    0,  362,    2, 0x08 /* Private */,
      80,    0,  363,    2, 0x08 /* Private */,
      81,    0,  364,    2, 0x08 /* Private */,
      82,    0,  365,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   17,   18,   19,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   26,   27,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   35,   36,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 39,   38,   40,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::Double, QMetaType::QString, QMetaType::QString,   44,   21,   22,
    QMetaType::Void, QMetaType::Double,   46,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   52,
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
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 70,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        case 5: _t->create_doc_cmd((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8]))); break;
        case 6: _t->add_content_cmd((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->mouseMove1((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->calculateNetworkSpeed(); break;
        case 10: _t->receive_connect_state((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 11: _t->receive_data((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2]))); break;
        case 12: _t->display_search_result((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->display_create_result((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 14: _t->display_add_result((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->display_search_progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_pushButton_clicked(); break;
        case 17: _t->on_addData_btn_clicked(); break;
        case 18: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_display_btn_clicked(); break;
        case 20: _t->on_checkUpdate_btn_clicked(); break;
        case 21: _t->displayUpdateLog(); break;
        case 22: _t->on_connect_btn_clicked(); break;
        case 23: _t->wifi_change_button_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_clear_btn_clicked(); break;
        case 25: _t->on_send_btn_clicked(); break;
        case 26: _t->on_stopDisplay_btn_clicked(); break;
        case 27: _t->on_tab2_clearInput_btn_clicked(); break;
        case 28: _t->on_tab2_addSelectedTag_btn_clicked(); break;
        case 29: _t->on_tab2_createDoc_btn_clicked(); break;
        case 30: _t->on_tab2_newAuthorCheckbox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_tab2_selectPath_btn_clicked(); break;
        case 32: _t->on_tab2_search_btn_clicked(); break;
        case 33: _t->on_tab2_releasePython_clicked(); break;
        case 34: _t->on_tab2_searchResultDisplay_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 35: _t->on_killWordProcess_btn_clicked(); break;
        case 36: _t->on_tab2_open_in_word_clicked(); break;
        case 37: _t->on_tab2_clear_search_result_clicked(); break;
        case 38: _t->on_tab2_display_selected_word_btn_clicked(); break;
        case 39: _t->on_tab2_clearTags_btn_clicked(); break;
        case 40: _t->on_addContent_btn_clicked(); break;
        case 41: _t->on_tab2_newTagInput_returnPressed(); break;
        case 42: _t->on_tab2_delete_last_tag_clicked(); break;
        case 43: _t->on_tab2_addContent_last_history_clicked(); break;
        case 44: _t->on_tab2_addContent_next_history_clicked(); break;
        case 45: _t->on_tab2_createDoc_last_history_clicked(); break;
        case 46: _t->on_tab2_createDoc_next_history_clicked(); break;
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
            using _t = void (bordercollie::*)(const QString , const QString , const QString , const QString , const QString , const QString , const QString , const QString );
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
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
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
void bordercollie::create_doc_cmd(const QString _t1, const QString _t2, const QString _t3, const QString _t4, const QString _t5, const QString _t6, const QString _t7, const QString _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
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
