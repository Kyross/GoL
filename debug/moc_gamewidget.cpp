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
    QByteArrayData data[45];
    char stringdata0[453];
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
QT_MOC_LITERAL(23, 267, 10), // "getBornMin"
QT_MOC_LITERAL(24, 278, 10), // "getBornMax"
QT_MOC_LITERAL(25, 289, 11), // "getStaseMin"
QT_MOC_LITERAL(26, 301, 11), // "getStaseMax"
QT_MOC_LITERAL(27, 313, 11), // "setCellSize"
QT_MOC_LITERAL(28, 325, 1), // "s"
QT_MOC_LITERAL(29, 327, 11), // "setInterval"
QT_MOC_LITERAL(30, 339, 4), // "msec"
QT_MOC_LITERAL(31, 344, 8), // "setColor"
QT_MOC_LITERAL(32, 353, 5), // "color"
QT_MOC_LITERAL(33, 359, 7), // "setDump"
QT_MOC_LITERAL(34, 367, 4), // "data"
QT_MOC_LITERAL(35, 372, 11), // "setModeBorn"
QT_MOC_LITERAL(36, 384, 3), // "min"
QT_MOC_LITERAL(37, 388, 3), // "max"
QT_MOC_LITERAL(38, 392, 1), // "b"
QT_MOC_LITERAL(39, 394, 12), // "setModeStase"
QT_MOC_LITERAL(40, 407, 9), // "paintGrid"
QT_MOC_LITERAL(41, 417, 9), // "QPainter&"
QT_MOC_LITERAL(42, 427, 1), // "p"
QT_MOC_LITERAL(43, 429, 9), // "paintCell"
QT_MOC_LITERAL(44, 439, 13) // "newGeneration"

    },
    "GameWidget\0gameEnvironmentChanged\0\0"
    "gameEnded\0gamePausedSignal\0gameClearSignal\0"
    "gameCellSignal\0gameGenerationSignal\0"
    "runGame\0stopGame\0clearGame\0resetCellSizeGame\0"
    "resetCellGame\0randomizeGame\0r\0isEmpty\0"
    "isRunning\0getTimer\0const QTimer*\0"
    "getCell\0getColor\0getGenerations\0dump\0"
    "getBornMin\0getBornMax\0getStaseMin\0"
    "getStaseMax\0setCellSize\0s\0setInterval\0"
    "msec\0setColor\0color\0setDump\0data\0"
    "setModeBorn\0min\0max\0b\0setModeStase\0"
    "paintGrid\0QPainter&\0p\0paintCell\0"
    "newGeneration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    0,  175,    2, 0x06 /* Public */,
       4,    0,  176,    2, 0x06 /* Public */,
       5,    0,  177,    2, 0x06 /* Public */,
       6,    1,  178,    2, 0x06 /* Public */,
       7,    0,  181,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  182,    2, 0x0a /* Public */,
       9,    0,  183,    2, 0x0a /* Public */,
      10,    0,  184,    2, 0x0a /* Public */,
      11,    0,  185,    2, 0x0a /* Public */,
      12,    0,  186,    2, 0x0a /* Public */,
      13,    1,  187,    2, 0x0a /* Public */,
      15,    0,  190,    2, 0x0a /* Public */,
      16,    0,  191,    2, 0x0a /* Public */,
      17,    0,  192,    2, 0x0a /* Public */,
      19,    0,  193,    2, 0x0a /* Public */,
      20,    0,  194,    2, 0x0a /* Public */,
      21,    0,  195,    2, 0x0a /* Public */,
      22,    0,  196,    2, 0x0a /* Public */,
      23,    0,  197,    2, 0x0a /* Public */,
      24,    0,  198,    2, 0x0a /* Public */,
      25,    0,  199,    2, 0x0a /* Public */,
      26,    0,  200,    2, 0x0a /* Public */,
      27,    1,  201,    2, 0x0a /* Public */,
      29,    1,  204,    2, 0x0a /* Public */,
      31,    1,  207,    2, 0x0a /* Public */,
      33,    1,  210,    2, 0x0a /* Public */,
      35,    3,  213,    2, 0x0a /* Public */,
      39,    3,  220,    2, 0x0a /* Public */,
      40,    1,  227,    2, 0x08 /* Private */,
      43,    1,  230,    2, 0x08 /* Private */,
      44,    0,  233,    2, 0x08 /* Private */,

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
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::QColor,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   36,   37,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   36,   37,   38,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 41,   42,
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
        case 19: { int _r = _t->getBornMin();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 20: { int _r = _t->getBornMax();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 21: { int _r = _t->getStaseMin();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 22: { int _r = _t->getStaseMax();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->setCellSize((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 24: _t->setInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 26: _t->setDump((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->setModeBorn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 28: _t->setModeStase((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 29: _t->paintGrid((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 30: _t->paintCell((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 31: _t->newGeneration(); break;
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
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
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
