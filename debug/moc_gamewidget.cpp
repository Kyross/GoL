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
    QByteArrayData data[54];
    char stringdata0[536];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameWidget_t qt_meta_stringdata_GameWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GameWidget"
QT_MOC_LITERAL(1, 11, 17), // "gameRunningSignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "gamePausedSignal"
QT_MOC_LITERAL(4, 47, 9), // "gameEnded"
QT_MOC_LITERAL(5, 57, 15), // "gameClearSignal"
QT_MOC_LITERAL(6, 73, 14), // "gameCellSignal"
QT_MOC_LITERAL(7, 88, 15), // "gameTimerSignal"
QT_MOC_LITERAL(8, 104, 20), // "gameGenerationSignal"
QT_MOC_LITERAL(9, 125, 15), // "gameColorSignal"
QT_MOC_LITERAL(10, 141, 7), // "runGame"
QT_MOC_LITERAL(11, 149, 8), // "stopGame"
QT_MOC_LITERAL(12, 158, 9), // "clearGame"
QT_MOC_LITERAL(13, 168, 13), // "resetCellGame"
QT_MOC_LITERAL(14, 182, 13), // "randomizeGame"
QT_MOC_LITERAL(15, 196, 1), // "r"
QT_MOC_LITERAL(16, 198, 8), // "loadGame"
QT_MOC_LITERAL(17, 207, 8), // "filename"
QT_MOC_LITERAL(18, 216, 8), // "openGame"
QT_MOC_LITERAL(19, 225, 7), // "isEmpty"
QT_MOC_LITERAL(20, 233, 9), // "isRunning"
QT_MOC_LITERAL(21, 243, 8), // "getTimer"
QT_MOC_LITERAL(22, 252, 13), // "const QTimer*"
QT_MOC_LITERAL(23, 266, 7), // "getCell"
QT_MOC_LITERAL(24, 274, 8), // "getColor"
QT_MOC_LITERAL(25, 283, 12), // "getColorDead"
QT_MOC_LITERAL(26, 296, 14), // "getGenerations"
QT_MOC_LITERAL(27, 311, 4), // "dump"
QT_MOC_LITERAL(28, 316, 10), // "getBornMin"
QT_MOC_LITERAL(29, 327, 10), // "getBornMax"
QT_MOC_LITERAL(30, 338, 11), // "getStaseMin"
QT_MOC_LITERAL(31, 350, 11), // "getStaseMax"
QT_MOC_LITERAL(32, 362, 6), // "isBorn"
QT_MOC_LITERAL(33, 369, 7), // "isStase"
QT_MOC_LITERAL(34, 377, 6), // "isDead"
QT_MOC_LITERAL(35, 384, 11), // "setCellSize"
QT_MOC_LITERAL(36, 396, 1), // "s"
QT_MOC_LITERAL(37, 398, 11), // "setInterval"
QT_MOC_LITERAL(38, 410, 4), // "msec"
QT_MOC_LITERAL(39, 415, 8), // "setColor"
QT_MOC_LITERAL(40, 424, 5), // "color"
QT_MOC_LITERAL(41, 430, 7), // "setDump"
QT_MOC_LITERAL(42, 438, 4), // "data"
QT_MOC_LITERAL(43, 443, 11), // "setModeBorn"
QT_MOC_LITERAL(44, 455, 3), // "min"
QT_MOC_LITERAL(45, 459, 3), // "max"
QT_MOC_LITERAL(46, 463, 1), // "b"
QT_MOC_LITERAL(47, 465, 12), // "setModeStase"
QT_MOC_LITERAL(48, 478, 11), // "setDeadMode"
QT_MOC_LITERAL(49, 490, 9), // "paintGrid"
QT_MOC_LITERAL(50, 500, 9), // "QPainter&"
QT_MOC_LITERAL(51, 510, 1), // "p"
QT_MOC_LITERAL(52, 512, 9), // "paintCell"
QT_MOC_LITERAL(53, 522, 13) // "newGeneration"

    },
    "GameWidget\0gameRunningSignal\0\0"
    "gamePausedSignal\0gameEnded\0gameClearSignal\0"
    "gameCellSignal\0gameTimerSignal\0"
    "gameGenerationSignal\0gameColorSignal\0"
    "runGame\0stopGame\0clearGame\0resetCellGame\0"
    "randomizeGame\0r\0loadGame\0filename\0"
    "openGame\0isEmpty\0isRunning\0getTimer\0"
    "const QTimer*\0getCell\0getColor\0"
    "getColorDead\0getGenerations\0dump\0"
    "getBornMin\0getBornMax\0getStaseMin\0"
    "getStaseMax\0isBorn\0isStase\0isDead\0"
    "setCellSize\0s\0setInterval\0msec\0setColor\0"
    "color\0setDump\0data\0setModeBorn\0min\0"
    "max\0b\0setModeStase\0setDeadMode\0paintGrid\0"
    "QPainter&\0p\0paintCell\0newGeneration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  214,    2, 0x06 /* Public */,
       3,    2,  219,    2, 0x06 /* Public */,
       4,    0,  224,    2, 0x06 /* Public */,
       5,    0,  225,    2, 0x06 /* Public */,
       6,    1,  226,    2, 0x06 /* Public */,
       7,    1,  229,    2, 0x06 /* Public */,
       8,    0,  232,    2, 0x06 /* Public */,
       9,    2,  233,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  238,    2, 0x0a /* Public */,
      11,    0,  239,    2, 0x0a /* Public */,
      12,    0,  240,    2, 0x0a /* Public */,
      13,    0,  241,    2, 0x0a /* Public */,
      14,    1,  242,    2, 0x0a /* Public */,
      16,    1,  245,    2, 0x0a /* Public */,
      18,    0,  248,    2, 0x0a /* Public */,
      19,    0,  249,    2, 0x0a /* Public */,
      20,    0,  250,    2, 0x0a /* Public */,
      21,    0,  251,    2, 0x0a /* Public */,
      23,    0,  252,    2, 0x0a /* Public */,
      24,    0,  253,    2, 0x0a /* Public */,
      25,    0,  254,    2, 0x0a /* Public */,
      26,    0,  255,    2, 0x0a /* Public */,
      27,    0,  256,    2, 0x0a /* Public */,
      28,    0,  257,    2, 0x0a /* Public */,
      29,    0,  258,    2, 0x0a /* Public */,
      30,    0,  259,    2, 0x0a /* Public */,
      31,    0,  260,    2, 0x0a /* Public */,
      32,    0,  261,    2, 0x0a /* Public */,
      33,    0,  262,    2, 0x0a /* Public */,
      34,    0,  263,    2, 0x0a /* Public */,
      35,    1,  264,    2, 0x0a /* Public */,
      37,    1,  267,    2, 0x0a /* Public */,
      39,    1,  270,    2, 0x0a /* Public */,
      41,    1,  273,    2, 0x0a /* Public */,
      43,    3,  276,    2, 0x0a /* Public */,
      47,    3,  283,    2, 0x0a /* Public */,
      48,    1,  290,    2, 0x0a /* Public */,
      49,    1,  293,    2, 0x08 /* Private */,
      52,    1,  296,    2, 0x08 /* Private */,
      53,    0,  299,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor, QMetaType::QColor,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 22,
    QMetaType::Int,
    QMetaType::QColor,
    QMetaType::QColor,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::QColor,   40,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void,

       0        // eod
};

void GameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameWidget *_t = static_cast<GameWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gameRunningSignal((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->gamePausedSignal((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->gameEnded(); break;
        case 3: _t->gameClearSignal(); break;
        case 4: _t->gameCellSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->gameTimerSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->gameGenerationSignal(); break;
        case 7: _t->gameColorSignal((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 8: _t->runGame(); break;
        case 9: _t->stopGame(); break;
        case 10: _t->clearGame(); break;
        case 11: _t->resetCellGame(); break;
        case 12: _t->randomizeGame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->loadGame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->openGame(); break;
        case 15: { bool _r = _t->isEmpty();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->isRunning();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { const QTimer* _r = _t->getTimer();
            if (_a[0]) *reinterpret_cast< const QTimer**>(_a[0]) = std::move(_r); }  break;
        case 18: { int _r = _t->getCell();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 19: { QColor _r = _t->getColor();
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 20: { QColor _r = _t->getColorDead();
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 21: { int _r = _t->getGenerations();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 22: { QString _r = _t->dump();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 23: { int _r = _t->getBornMin();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 24: { int _r = _t->getBornMax();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 25: { int _r = _t->getStaseMin();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 26: { int _r = _t->getStaseMax();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->isBorn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->isStase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->isDead();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->setCellSize((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 31: _t->setInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 33: _t->setDump((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->setModeBorn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 35: _t->setModeStase((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 36: _t->setDeadMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->paintGrid((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 38: _t->paintCell((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 39: _t->newGeneration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameWidget::*)(bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameRunningSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)(bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gamePausedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameEnded)) {
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
            using _t = void (GameWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameTimerSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameGenerationSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)(QColor , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWidget::gameColorSignal)) {
                *result = 7;
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
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void GameWidget::gameRunningSignal(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameWidget::gamePausedSignal(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameWidget::gameEnded()
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
void GameWidget::gameTimerSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GameWidget::gameGenerationSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GameWidget::gameColorSignal(QColor _t1, QColor _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
