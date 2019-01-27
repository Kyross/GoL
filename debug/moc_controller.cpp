/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Controller_t {
    QByteArrayData data[22];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Controller_t qt_meta_stringdata_Controller = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Controller"
QT_MOC_LITERAL(1, 11, 3), // "run"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 5), // "pause"
QT_MOC_LITERAL(4, 22, 5), // "clear"
QT_MOC_LITERAL(5, 28, 7), // "newFile"
QT_MOC_LITERAL(6, 36, 4), // "save"
QT_MOC_LITERAL(7, 41, 4), // "quit"
QT_MOC_LITERAL(8, 46, 13), // "resetUniverse"
QT_MOC_LITERAL(9, 60, 10), // "resetTimer"
QT_MOC_LITERAL(10, 71, 3), // "end"
QT_MOC_LITERAL(11, 75, 15), // "setUniverseSize"
QT_MOC_LITERAL(12, 91, 4), // "size"
QT_MOC_LITERAL(13, 96, 8), // "setTimer"
QT_MOC_LITERAL(14, 105, 1), // "t"
QT_MOC_LITERAL(15, 107, 7), // "painted"
QT_MOC_LITERAL(16, 115, 10), // "parameters"
QT_MOC_LITERAL(17, 126, 11), // "selectColor"
QT_MOC_LITERAL(18, 138, 4), // "mode"
QT_MOC_LITERAL(19, 143, 9), // "resetMode"
QT_MOC_LITERAL(20, 153, 10), // "resetColor"
QT_MOC_LITERAL(21, 164, 11) // "resetParams"

    },
    "Controller\0run\0\0pause\0clear\0newFile\0"
    "save\0quit\0resetUniverse\0resetTimer\0"
    "end\0setUniverseSize\0size\0setTimer\0t\0"
    "painted\0parameters\0selectColor\0mode\0"
    "resetMode\0resetColor\0resetParams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controller[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    0,  108,    2, 0x0a /* Public */,
       7,    0,  109,    2, 0x0a /* Public */,
       8,    0,  110,    2, 0x0a /* Public */,
       9,    0,  111,    2, 0x0a /* Public */,
      10,    0,  112,    2, 0x0a /* Public */,
      11,    1,  113,    2, 0x0a /* Public */,
      13,    1,  116,    2, 0x0a /* Public */,
      15,    1,  119,    2, 0x0a /* Public */,
      16,    0,  122,    2, 0x0a /* Public */,
      17,    0,  123,    2, 0x0a /* Public */,
      18,    0,  124,    2, 0x0a /* Public */,
      19,    0,  125,    2, 0x0a /* Public */,
      20,    0,  126,    2, 0x0a /* Public */,
      21,    0,  127,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Controller *_t = static_cast<Controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->pause(); break;
        case 2: _t->clear(); break;
        case 3: _t->newFile(); break;
        case 4: _t->save(); break;
        case 5: _t->quit(); break;
        case 6: _t->resetUniverse(); break;
        case 7: _t->resetTimer(); break;
        case 8: _t->end(); break;
        case 9: _t->setUniverseSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setTimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->painted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->parameters(); break;
        case 13: _t->selectColor(); break;
        case 14: _t->mode(); break;
        case 15: _t->resetMode(); break;
        case 16: _t->resetColor(); break;
        case 17: _t->resetParams(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Controller::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Controller.data,
    qt_meta_data_Controller,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Controller.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
