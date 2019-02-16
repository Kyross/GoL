#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QColor>
#include <QWidget>
#include <QMessageBox>
#include <QTimer>
#include <QMouseEvent>
#include <QDebug>
#include <QRectF>
#include <QPainter>
#include <qmath.h>
#include <QDebug>
#include <QString>
#include <QFileDialog>

class GameWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GameWidget(QWidget *parent = 0);
    static const int DEFAULT_MIN_CELLS=6;
    static const int DEFAULT_MAX_CELLS=150;
    static const int DEFAULT_VALUE_CELLS=20;
    static const int DEFAULT_MIN_TIMER=1;
    static const int DEFAULT_MAX_TIMER=1000;
    static const int DEFAULT_VALUE_TIMER=200;
    static const int DEFAULT_BORN_MIN=3;
    static const int DEFAULT_BORN_MAX=3;
    static const int DEFAULT_STASE_MIN=2;
    static const int DEFAULT_STASE_MAX=2;
    static const bool DEFAULT_BORN_MODE=true;
    static const bool DEFAULT_STASE_MODE=true;
    static const bool DEFAULT_DEAD_MODE=false;
    const QColor DEFAULT_COLOR="#000";

    ~GameWidget();

protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

signals:
    void gameRunningSignal(bool,bool);
    void gamePausedSignal(bool,bool);
    void gameEnded();
    void gameClearSignal();
    void gameCellSignal(int);
    void gameTimerSignal(int);
    void gameGenerationSignal(int);
    void gameColorSignal(QColor,QColor);
    void gameModeSignal(bool,bool,bool,int,int,int,int);
    void gameFileEditedSignal();
    void gameCellAliveSignal(int);

public slots:
    //Action
    void runGame();
    void stopGame();
    void clearGame();
    void resetCellGame();
    void randomizeGame(int r);
    void loadGame(QString filename);
    void openGame();
    void resetMode();
    void saveGame();
    //State
    bool isEmpty();
    bool isRunning();

    //Getter
    const QTimer * getTimer();
    int getCell();
    QColor getColor();
    QColor getColorDead();
    int getGenerations();
    QString dump();
    int getBornMin();
    int getBornMax();
    int getStaseMin();
    int getStaseMax();
    bool isBorn();
    bool isStase();
    bool isDead();
    int getCellAlive();

    //Setter
    void setCellSize(const int s);
    void setInterval(int msec);
    void setColor(const QColor &color);
    void setDump(const QString &data);
    void setModeBorn(int min,int max,bool b);
    void setModeStase(int min,int max,bool b);
    void setDeadMode(bool b);

private slots:
    void paintGrid(QPainter &p);
    void paintCell(QPainter &p);
    void newGeneration();

private:
    bool isAlive(int k, int j);
    QTimer * m_timer;
    QColor m_color;
    QColor m_color_dead;
    int m_generations;
    bool* m_cell_map;
    bool* m_cell_map_next;
    bool * m_cell_dead_map;
    bool m_dead_mode;
    int m_cell;
    int m_born_min;
    int m_born_max;
    bool m_born_state;
    int m_stase_min;
    int m_stase_max;
    bool m_stase_state;
};

#endif // GAMEWIDGET_H
