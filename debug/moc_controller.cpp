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
    QByteArrayData data[26];
    char stringdata0[198];
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
QT_MOC_LITERAL(6, 36, 4), // "open"
QT_MOC_LITERAL(7, 41, 4), // "load"
QT_MOC_LITERAL(8, 46, 4), // "save"
QT_MOC_LITERAL(9, 51, 4), // "quit"
QT_MOC_LITERAL(10, 56, 13), // "resetUniverse"
QT_MOC_LITERAL(11, 70, 10), // "resetTimer"
QT_MOC_LITERAL(12, 81, 3), // "end"
QT_MOC_LITERAL(13, 85, 15), // "setUniverseSize"
QT_MOC_LITERAL(14, 101, 4), // "size"
QT_MOC_LITERAL(15, 106, 8), // "setTimer"
QT_MOC_LITERAL(16, 115, 1), // "t"
QT_MOC_LITERAL(17, 117, 7), // "painted"
QT_MOC_LITERAL(18, 125, 10), // "parameters"
QT_MOC_LITERAL(19, 136, 11), // "selectColor"
QT_MOC_LITERAL(20, 148, 9), // "randomize"
QT_MOC_LITERAL(21, 158, 1), // "r"
QT_MOC_LITERAL(22, 160, 4), // "mode"
QT_MOC_LITERAL(23, 165, 9), // "resetMode"
QT_MOC_LITERAL(24, 175, 10), // "resetColor"
QT_MOC_LITERAL(25, 186, 11) // "resetParams"

    },
    "Controller\0run\0\0pause\0clear\0newFile\0"
    "open\0load\0save\0quit\0resetUniverse\0"
    "resetTimer\0end\0setUniverseSize\0size\0"
    "setTimer\0t\0painted\0parameters\0selectColor\0"
    "randomize\0r\0mode\0resetMode\0resetColor\0"
    "resetParams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controller[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x0a /* Public */,
       3,    0,  120,    2, 0x0a /* Public */,
       4,    0,  121,    2, 0x0a /* Public */,
       5,    0,  122,    2, 0x0a /* Public */,
       6,    0,  123,    2, 0x0a /* Public */,
       7,    1,  124,    2, 0x0a /* Public */,
       8,    0,  127,    2, 0x0a /* Public */,
       9,    0,  128,    2, 0x0a /* Public */,
      10,    0,  129,    2, 0x0a /* Public */,
      11,    0,  130,    2, 0x0a /* Public */,
      12,    0,  131,    2, 0x0a /* Public */,
      13,    1,  132,    2, 0x0a /* Public */,
      15,    1,  135,    2, 0x0a /* Public */,
      17,    0,  138,    2, 0x0a /* Public */,
      18,    0,  139,    2, 0x0a /* Public */,
      19,    0,  140,    2, 0x0a /* Public */,
      20,    1,  141,    2, 0x0a /* Public */,
      22,    0,  144,    2, 0x0a /* Public */,
      23,    0,  145,    2, 0x0a /* Public */,
      24,    0,  146,    2, 0x0a /* Public */,
      25,    0,  147,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
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
        case 4: _t->open(); break;
        case 5: _t->load((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->save(); break;
        case 7: _t->quit(); break;
        case 8: _t->resetUniverse(); break;
        case 9: _t->resetTimer(); break;
        case 10: _t->end(); break;
        case 11: _t->setUniverseSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setTimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->painted(); break;
        case 14: _t->parameters(); break;
        case 15: _t->selectColor(); break;
        case 16: _t->randomize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->mode(); break;
        case 18: _t->resetMode(); break;
        case 19: _t->resetColor(); break;
        case 20: _t->resetParams(); break;
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
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
