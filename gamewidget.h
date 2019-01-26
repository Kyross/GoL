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

class GameWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GameWidget(QWidget *parent = 0);
    static const int DEFAULT_MIN_CELLS=6;
    static const int DEFAULT_MAX_CELLS=500;
    static const int DEFAULT_VALUE_CELLS=50;
    static const int DEFAULT_MIN_TIMER=1;
    static const int DEFAULT_MAX_TIMER=500;
    static const int DEFAULT_VALUE_TIMER=200;
    ~GameWidget();

protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

signals:
    void gameEnvironmentChanged();
    void gameEnded();
    void gamePausedSignal();
    void gameClearSignal();
    void gameCellSignal(int);
    void gameGenerationSignal();

public slots:
    //Action
    void runGame();
    void stopGame();
    void clearGame();
    void resetCellSizeGame();
    void resetCellGame();
    void randomizeGame(int r);

    //State
    bool isEmpty();
    bool isRunning();

    //Getter
    const QTimer * getTimer();
    int getCell();
    QColor getColor();
    int getGenerations();
    QString dump();

    //Setter
    void setCellSize(const int &s);
    void setInterval(int msec);
    void setColor(const QColor &color);
    void setDump(const QString &data);

private slots:
    void paintGrid(QPainter &p);
    void paintCell(QPainter &p);
    void newGeneration();

private:
    bool isAlive(int k, int j);
    QColor m_color;
    QTimer * m_timer;
    int m_generations;
    bool* m_cell_map;
    bool* m_cell_map_next;
    int m_cell;
};

#endif // GAMEWIDGET_H
