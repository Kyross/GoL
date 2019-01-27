#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "gamewidget.h"
#include "parametersdialog.h"
#include "ui_parametersdialog.h"
#include <QObject>
#include <QApplication>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>
#include <QColor>
#include <QColorDialog>

class Controller : public QWidget
{
    Q_OBJECT
public:
    explicit Controller(QApplication *app,MainWindow *window, GameWidget *game,QWidget *parent=nullptr);

public slots:
    void run();
    void pause();
    void clear();
    void newFile();
    void save();
    void quit();
    void resetUniverse();
    void resetTimer();
    void end();
    void setUniverseSize(int size);
    void setTimer(int t);
    void painted(bool);
    void parameters();
    void selectColor();
    void mode();
    void resetMode();
    void resetColor();
    void resetParams();

 private :
    void updateControl();
    QApplication *m_application;
    MainWindow *m_window;
    GameWidget *m_game;
    ParametersDialog * m_params;
};

#endif // CONTROLLER_H
