/****************************************************************************
** Meta object code from reading C++ file 'parametersdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../parametersdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parametersdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParametersDialog_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParametersDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParametersDialog_t qt_meta_stringdata_ParametersDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ParametersDialog"
QT_MOC_LITERAL(1, 17, 25), // "universeSizeChangedSignal"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 18), // "timerChangedSignal"
QT_MOC_LITERAL(4, 63, 14), // "loadDemoSignal"
QT_MOC_LITERAL(5, 78, 19), // "randomizeModeSignal"
QT_MOC_LITERAL(6, 98, 19), // "universeSizeChanged"
QT_MOC_LITERAL(7, 118, 4), // "size"
QT_MOC_LITERAL(8, 123, 12), // "timerChanged"
QT_MOC_LITERAL(9, 136, 4), // "time"
QT_MOC_LITERAL(10, 141, 8), // "loadDemo"
QT_MOC_LITERAL(11, 150, 13) // "randomizeMode"

    },
    "ParametersDialog\0universeSizeChangedSignal\0"
    "\0timerChangedSignal\0loadDemoSignal\0"
    "randomizeModeSignal\0universeSizeChanged\0"
    "size\0timerChanged\0time\0loadDemo\0"
    "randomizeMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParametersDialog[] = {

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
       3,    1,   57,    2, 0x06 /* Public */,
       4,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   66,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ParametersDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParametersDialog *_t = static_cast<ParametersDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->universeSizeChangedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->timerChangedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->loadDemoSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->randomizeModeSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->universeSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->timerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->loadDemo(); break;
        case 7: _t->randomizeMode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParametersDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParametersDialog::universeSizeChangedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParametersDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParametersDialog::timerChangedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParametersDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParametersDialog::loadDemoSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParametersDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParametersDialog::randomizeModeSignal)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ParametersDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ParametersDialog.data,
    qt_meta_data_ParametersDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParametersDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParametersDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParametersDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ParametersDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ParametersDialog::universeSizeChangedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParametersDialog::timerChangedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ParametersDialog::loadDemoSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ParametersDialog::randomizeModeSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
