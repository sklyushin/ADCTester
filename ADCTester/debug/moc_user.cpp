/****************************************************************************
** Meta object code from reading C++ file 'user.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../user.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_User_t {
    QByteArrayData data[16];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_User_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_User_t qt_meta_stringdata_User = {
    {
QT_MOC_LITERAL(0, 0, 4), // "User"
QT_MOC_LITERAL(1, 5, 15), // "on_send_clicked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "saveImage1"
QT_MOC_LITERAL(4, 33, 10), // "saveImage2"
QT_MOC_LITERAL(5, 44, 24), // "on_choose_mode_4_clicked"
QT_MOC_LITERAL(6, 69, 15), // "on_stop_clicked"
QT_MOC_LITERAL(7, 85, 21), // "on_showGraph2_clicked"
QT_MOC_LITERAL(8, 107, 17), // "on_Search_clicked"
QT_MOC_LITERAL(9, 125, 24), // "on_choose_mode_1_clicked"
QT_MOC_LITERAL(10, 150, 24), // "on_choose_mode_2_clicked"
QT_MOC_LITERAL(11, 175, 24), // "on_choose_mode_3_clicked"
QT_MOC_LITERAL(12, 200, 24), // "on_FoundedPort_activated"
QT_MOC_LITERAL(13, 225, 4), // "arg1"
QT_MOC_LITERAL(14, 230, 18), // "on_Connect_clicked"
QT_MOC_LITERAL(15, 249, 21) // "on_Disconnect_clicked"

    },
    "User\0on_send_clicked\0\0saveImage1\0"
    "saveImage2\0on_choose_mode_4_clicked\0"
    "on_stop_clicked\0on_showGraph2_clicked\0"
    "on_Search_clicked\0on_choose_mode_1_clicked\0"
    "on_choose_mode_2_clicked\0"
    "on_choose_mode_3_clicked\0"
    "on_FoundedPort_activated\0arg1\0"
    "on_Connect_clicked\0on_Disconnect_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_User[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void User::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        User *_t = static_cast<User *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_send_clicked(); break;
        case 1: _t->saveImage1(); break;
        case 2: _t->saveImage2(); break;
        case 3: _t->on_choose_mode_4_clicked(); break;
        case 4: _t->on_stop_clicked(); break;
        case 5: _t->on_showGraph2_clicked(); break;
        case 6: _t->on_Search_clicked(); break;
        case 7: _t->on_choose_mode_1_clicked(); break;
        case 8: _t->on_choose_mode_2_clicked(); break;
        case 9: _t->on_choose_mode_3_clicked(); break;
        case 10: _t->on_FoundedPort_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_Connect_clicked(); break;
        case 12: _t->on_Disconnect_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject User::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_User.data,
      qt_meta_data_User,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *User::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *User::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_User.stringdata0))
        return static_cast<void*>(const_cast< User*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int User::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
