/****************************************************************************
** Meta object code from reading C++ file 'gamewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gamewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameWidget_t {
    QByteArrayData data[36];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameWidget_t qt_meta_stringdata_GameWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GameWidget"
QT_MOC_LITERAL(1, 11, 22), // "gameEnvironmentChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "gameEnded"
QT_MOC_LITERAL(4, 45, 16), // "gamePausedSignal"
QT_MOC_LITERAL(5, 62, 15), // "gameClearSignal"
QT_MOC_LITERAL(6, 78, 14), // "gameCellSignal"
QT_MOC_LITERAL(7, 93, 20), // "gameGenerationSignal"
QT_MOC_LITERAL(8, 114, 7), // "runGame"
QT_MOC_LITERAL(9, 122, 8), // "stopGame"
QT_MOC_LITERAL(10, 131, 9), // "clearGame"
QT_MOC_LITERAL(11, 141, 17), // "resetCellSizeGame"
QT_MOC_LITERAL(12, 159, 13), // "resetCellGame"
QT_MOC_LITERAL(13, 173, 13), // "randomizeGame"
QT_MOC_LITERAL(14, 187, 1), // "r"
QT_MOC_LITERAL(15, 189, 7), // "isEmpty"
QT_MOC_LITERAL(16, 197, 9), // "isRunning"
QT_MOC_LITERAL(17, 207, 8), // "getTimer"
QT_MOC_LITERAL(18, 216, 13), // "const QTimer*"
QT_MOC_LITERAL(19, 230, 7), // "getCell"
QT_MOC_LITERAL(20, 238, 8), // "getColor"
QT_MOC_LITERAL(21, 247, 14), // "getGenerations"
QT_MOC_LITERAL(22, 262, 4), // "dump"
QT_MOC_LITERAL(23, 267, 11), // "setCellSize"
QT_MOC_LITERAL(24, 279, 1), // "s"
QT_MOC_LITERAL(25, 281, 11), // "setInterval"
QT_MOC_LITERAL(26, 293, 4), // "msec"
QT_MOC_LITERAL(27, 298, 8), // "setColor"
QT_MOC_LITERAL(28, 307, 5), // "color"
QT_MOC_LITERAL(29, 313, 7), // "setDump"
QT_MOC_LITERAL(30, 321, 4), // "data"
QT_MOC_LITERAL(31, 326, 9), // "paintGrid"
QT_MOC_LITERAL(32, 336, 9), // "QPainter&"
QT_MOC_LITERAL(33, 346, 1), // "p"
QT_MOC_LITERAL(34, 348, 9), // "paintCell"
QT_MOC_LITERAL(35, 358, 13) // "newGeneration"

    },
    "GameWidget\0gameEnvironmentChanged\0\0"
    "gameEnded\0gamePausedSignal\0gameClearSignal\0"
    "gameCellSignal\0gameGenerationSignal\0"
    "runGame\0stopGame\0clearGame\0resetCellSizeGame\0"
    "resetCellGame\0randomizeGame\0r\0isEmpty\0"
    "isRunning\0getTimer\0const QTimer*\0"
    "getCell\0getColor\0getGenerations\0dump\0"
    "setCellSize\0s\0setInterval\0msec\0setColor\0"
    "color\0setDump\0data\0paintGrid\0QPainter&\0"
    "p\0paintCell\0newGeneration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    0,  145,    2, 0x06 /* Public */,
       4,    0,  146,    2, 0x06 /* Public */,
       5,    0,  147,    2, 0x06 /* Public */,
       6,    1,  148,    2, 0x06 /* Public */,
       7,    0,  151,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  152,    2, 0x0a /* Public */,
       9,    0,  153,    2, 0x0a /* Public */,
      10,    0,  154,    2, 0x0a /* Public */,
      11,    0,  155,    2, 0x0a /* Public */,
      12,    0,  156,    2, 0x0a /* Public */,
      13,    1,  157,    2, 0x0a /* Public */,
      15,    0,  160,    2, 0x0a /* Public */,
      16,    0,  161,    2, 0x0a /* Public */,
      17,    0,  162,    2, 0x0a /* Public */,
      19,    0,  163,    2, 0x0a /* Public */,
      20,    0,  164,    2, 0x0a /* Public */,
      21,    0,  165,    2, 0x0a /* Public */,
      22,    0,  166,    2, 0x0a /* Public */,
      23,    1,  167,    2, 0x0a /* Public */,
      25,    1,  170,    2, 0x0a /* Public */,
      27,    1,  173,    2, 0x0a /* Public */,
      29,    1,  176,    2, 0x0a /* Public */,
      31,    1,  179,    2, 0x08 /* Private */,
      34,    1,  182,    2, 0x08 /* Private */,
      35,    0,  185,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 18,
    QMetaType::Int,
    QMetaType::QColor,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::QColor,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void,

       0        // eod
};

void GameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameWidget *_t = static_cast<GameWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gameEnvironmentChanged(); break;
        case 1: _t->gameEnded(); break;
        case 2: _t->gamePausedSignal(); break;
        case 3: _t->gameClearSignal(); break;
        case 4: _t->gameCellSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->gameGenerationSignal(); break;
        case 6: _t->runGame(); break;
        case 7: _t->stopGame(); break;
        case 8: _t->clearGame(); break;
        case 9: _t->resetCellSizeGame(); break;
        case 10: _t->resetCellGame(); break;
        case 11: _t->randomizeGame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: { bool _r = _t->isEmpty();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->isRunning();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { const QTimer* _r = _t->getTimer();
            if (_a[0]) *reinterpret_cast< const QTimer**>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->getCell();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { QColor _r = _t->getColor();
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->getGenerations();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->dump();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->setCellSize((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 20: _t->setInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 22: _t->setDump((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->paintGrid((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 24: _t->paintCell((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 25: _t->newGeneration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameEnvironmentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameEnded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gamePausedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameClearSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameCellSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameGenerationSignal)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_GameWidget.data,
    qt_meta_data_GameWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void GameWidget::gameEnvironmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GameWidget::gameEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GameWidget::gamePausedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GameWidget::gameClearSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GameWidget::gameCellSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GameWidget::gameGenerationSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
