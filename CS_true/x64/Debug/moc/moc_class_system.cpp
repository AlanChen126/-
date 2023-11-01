/****************************************************************************
** Meta object code from reading C++ file 'class_system.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../class_system.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'class_system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_class_system_t {
    QByteArrayData data[12];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_class_system_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_class_system_t qt_meta_stringdata_class_system = {
    {
QT_MOC_LITERAL(0, 0, 12), // "class_system"
QT_MOC_LITERAL(1, 13, 23), // "set_data_Button_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 26), // "change_term_Button_clicked"
QT_MOC_LITERAL(4, 65, 23), // "show_dag_Button_clicked"
QT_MOC_LITERAL(5, 89, 15), // "handleDataReady"
QT_MOC_LITERAL(6, 105, 6), // "xueshi"
QT_MOC_LITERAL(7, 112, 6), // "xuefen"
QT_MOC_LITERAL(8, 119, 25), // "show_class_Button_clicked"
QT_MOC_LITERAL(9, 145, 17), // "handlechangeReady"
QT_MOC_LITERAL(10, 163, 9), // "class_num"
QT_MOC_LITERAL(11, 173, 8) // "term_num"

    },
    "class_system\0set_data_Button_clicked\0"
    "\0change_term_Button_clicked\0"
    "show_dag_Button_clicked\0handleDataReady\0"
    "xueshi\0xuefen\0show_class_Button_clicked\0"
    "handlechangeReady\0class_num\0term_num"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_class_system[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    2,   47,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    2,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

       0        // eod
};

void class_system::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<class_system *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_data_Button_clicked(); break;
        case 1: _t->change_term_Button_clicked(); break;
        case 2: _t->show_dag_Button_clicked(); break;
        case 3: _t->handleDataReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->show_class_Button_clicked(); break;
        case 5: _t->handlechangeReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject class_system::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_class_system.data,
    qt_meta_data_class_system,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *class_system::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *class_system::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_class_system.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int class_system::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
