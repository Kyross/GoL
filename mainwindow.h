#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "aboutbox.h"
#include "gamewidget.h"
#include <QMainWindow>
#include <QColor>
#include <QLabel>
#include <QDebug>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
        void closeEvent(QCloseEvent* e);
public:
    explicit MainWindow(QWidget *parent = nullptr);
    void displayGame(GameWidget *game);
    void status(QString text);
    ~MainWindow();
    Ui::MainWindow *m_ui;

signals:
    void runClickedSignal();
    void pauseClickedSignal();
    void clearClickedSignal();
    void newClickedSignal();
    void openClickedSignal();
    void saveClickedSignal();
    void quitClickedSignal();
    void resetUniverseClickedSignal();
    void resetTimerClickedSignal();
    void universeSizeChangedSignal(int size);
    void timerChangedSignal(int t);
    void parametersClickedSignal();

public slots:
    void runClicked();
    void pauseClicked();
    void clearClicked();
    void newClicked();
    void openClicked();
    void saveClicked();
    void quitClicked();
    void resetUniverseClicked();
    void resetTimerClicked();
    void parametersClicked();
    //changement couleur
    void universeSizeChanged(int size);
    void timerChanged(int t);
    void hideToolbar(bool hide);
    void hideParameters(bool hide);
    //Window
    void maximizedClicked();
    void fullscreenClicked();
    void normalClicked();
    void resizeEvent( QResizeEvent *e );
    //About
    void aboutGolClicked();
    void rulesClicked();

private:
    QLabel m_status;
};

#endif // MAINWINDOW_H
