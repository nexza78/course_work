/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/admin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Admin_t {
    QByteArrayData data[13];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Admin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Admin_t qt_meta_stringdata_Admin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Admin"
QT_MOC_LITERAL(1, 6, 12), // "login_window"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 32), // "on_pushButton_change_acc_clicked"
QT_MOC_LITERAL(4, 53, 23), // "on_pB_save_info_clicked"
QT_MOC_LITERAL(5, 77, 30), // "on_pushButton_add_size_clicked"
QT_MOC_LITERAL(6, 108, 33), // "on_pushButton_change_size_cli..."
QT_MOC_LITERAL(7, 142, 30), // "on_pushButton_del_size_clicked"
QT_MOC_LITERAL(8, 173, 15), // "update_cur_size"
QT_MOC_LITERAL(9, 189, 33), // "on_pushButton_save_orders_cli..."
QT_MOC_LITERAL(10, 223, 31), // "on_pushButton_set_price_clicked"
QT_MOC_LITERAL(11, 255, 32), // "on_pushButton_set_status_clicked"
QT_MOC_LITERAL(12, 288, 30) // "on_pushButton_set_date_clicked"

    },
    "Admin\0login_window\0\0"
    "on_pushButton_change_acc_clicked\0"
    "on_pB_save_info_clicked\0"
    "on_pushButton_add_size_clicked\0"
    "on_pushButton_change_size_clicked\0"
    "on_pushButton_del_size_clicked\0"
    "update_cur_size\0on_pushButton_save_orders_clicked\0"
    "on_pushButton_set_price_clicked\0"
    "on_pushButton_set_status_clicked\0"
    "on_pushButton_set_date_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

       0        // eod
};

void Admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Admin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login_window(); break;
        case 1: _t->on_pushButton_change_acc_clicked(); break;
        case 2: _t->on_pB_save_info_clicked(); break;
        case 3: _t->on_pushButton_add_size_clicked(); break;
        case 4: _t->on_pushButton_change_size_clicked(); break;
        case 5: _t->on_pushButton_del_size_clicked(); break;
        case 6: _t->update_cur_size(); break;
        case 7: _t->on_pushButton_save_orders_clicked(); break;
        case 8: _t->on_pushButton_set_price_clicked(); break;
        case 9: _t->on_pushButton_set_status_clicked(); break;
        case 10: _t->on_pushButton_set_date_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Admin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Admin::login_window)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Admin::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Admin.data,
    qt_meta_data_Admin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Admin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Admin::login_window()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
