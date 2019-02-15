#include "controller.h"

Controller::Controller(QApplication *app,MainWindow *window, GameWidget *game, QWidget *parent):
    QWidget(parent),
    m_application(app),
    m_window(window),
    m_game(game)
{
    m_window->show();
    m_window->displayGame(m_game);

    //Initialization with parameters
    m_params=new ParametersDialog();
    m_window->initRange(m_game->DEFAULT_MIN_CELLS,m_game->DEFAULT_MAX_CELLS,m_game->DEFAULT_MIN_TIMER,m_game->DEFAULT_MAX_TIMER);
    m_params->initRange(m_game->DEFAULT_MIN_CELLS,m_game->DEFAULT_MAX_CELLS,m_game->DEFAULT_MIN_TIMER,m_game->DEFAULT_MAX_TIMER);

    //Connect
    //*** run, pause
    connect(m_window,SIGNAL(runClickedSignal()),this,SLOT(run()));
    connect(m_game,SIGNAL(gameRunningSignal(bool,bool)),this,SLOT(painted(bool,bool)));
    connect(m_game,SIGNAL(gameRunningSignal(bool,bool)),m_window,SLOT(setRunPause(bool,bool)));
    connect(m_window,SIGNAL(pauseClickedSignal()),this,SLOT(pause()));
    connect(m_game,SIGNAL(gamePausedSignal(bool,bool)),this,SLOT(pause()));
    connect(m_game,SIGNAL(gamePausedSignal(bool,bool)),m_window,SLOT(setRunPause(bool,bool)));
    connect(m_game,SIGNAL(gameRunningSignal(bool,bool)),m_params,SLOT(setParamsEnable(bool,bool)));
    connect(m_game,SIGNAL(gameRunningSignal(bool,bool)),m_window,SLOT(setParamsEnable(bool,bool)));
    //*** clear, new
    connect(m_window,SIGNAL(clearClickedSignal()),this,SLOT(clear()));
    connect(m_game,SIGNAL(gameClearSignal()),this,SLOT(clear()));
    connect(m_game,SIGNAL(gameRunningSignal(bool,bool)),m_window,SLOT(setRunPause(bool,bool)));
    connect(m_window,SIGNAL(newClickedSignal()),this,SLOT(newFile()));
    //*** open, save ,quit
    connect(m_window,SIGNAL(openClickedSignal()),m_game,SLOT(openGame()));
    connect(m_window,SIGNAL(saveClickedSignal()),this,SLOT(save()));
    connect(m_window,SIGNAL(quitClickedSignal()),this,SLOT(quit()));
    //***Universe
    connect(m_window,SIGNAL(resetUniverseClickedSignal()),this,SLOT(resetUniverse()));
    connect(m_window,SIGNAL(universeSizeChangedSignal(int)),this,SLOT(setUniverseSize(int)));
    connect(m_params,SIGNAL(universeSizeChangedSignal(int)),this,SLOT(setUniverseSize(int)));
    connect(m_game,SIGNAL(gameCellSignal(int)),m_window,SLOT(universeSizeChanged(int)));
    connect(m_game,SIGNAL(gameCellSignal(int)),m_params,SLOT(universeSizeChanged(int)));
    //***Timer
    connect(m_window,SIGNAL(resetTimerClickedSignal()),this,SLOT(resetTimer()));
    connect(m_window,SIGNAL(timerChangedSignal(int)),this,SLOT(setTimer(int)));
    connect(m_params,SIGNAL(timerChangedSignal(int)),this,SLOT(setTimer(int)));
    connect(m_game,SIGNAL(gameTimerSignal(int)),m_window,SLOT(timerChanged(int)));
    connect(m_game,SIGNAL(gameTimerSignal(int)),m_params,SLOT(timerChanged(int)));
    //*** game
    connect(m_game,SIGNAL(gameEnded()),this,SLOT(end()));
    connect(m_game,SIGNAL(gameGenerationSignal()),this,SLOT(run()));
    //***parameters
    connect(m_window,SIGNAL(resetColorClickedSignal()),this,SLOT(resetColor()));
    connect(m_window,SIGNAL(parametersClickedSignal()),this,SLOT(parameters()));
    connect(m_params,SIGNAL(resetTimerClickedSignal()),this,SLOT(resetTimer()));
    connect(m_params,SIGNAL(resetUniverseClickedSignal()),this,SLOT(resetUniverse()));
    connect(m_params,SIGNAL(resetColorClickedSignal()),this,SLOT(resetColor()));
    connect(m_params,SIGNAL(resetParametersClickedSignal()),this,SLOT(resetParams()));
    connect(m_params,SIGNAL(clearClickedSignal()),this,SLOT(clear()));
    //***color
    connect(m_params,SIGNAL(colorSignal()),this,SLOT(selectColor()));
    connect(m_game,SIGNAL(gameColorSignal(QColor,QColor)),m_params,SLOT(setColor(QColor,QColor)));
    connect(m_params,SIGNAL(loadDemoSignal(QString)),m_game,SLOT(loadGame(QString)));
    connect(m_params,SIGNAL(randomizeModeSignal(int)),m_game,SLOT(randomizeGame(int)));
    //***mode
    connect(m_params,SIGNAL(resetModeClickedSignal()),m_game,SLOT(resetMode()));
    connect(m_game,SIGNAL(gameModeSignal(bool,bool,bool,int,int,int,int)),m_params,SLOT(setMode(bool,bool,bool,int,int,int,int)));
    connect(m_params,SIGNAL(modeSignal(bool,bool,bool,int,int,int,int)),this,SLOT(mode(bool,bool,bool,int,int,int,int)));

    //Inits with default value
    newFile();
    m_window->status("");
}

void Controller::run()
{
    if(!m_game->isRunning()){
        m_game->runGame();
    }
    m_window->status("Game is running : "+QString::number(m_game->getGenerations())+" generations");
    m_window->setDataGenerations(m_game->getGenerations());
    m_window->setDataCellAlive(m_game->getCellAlive());

}

void Controller::pause()
{
        m_game->stopGame();
        m_window->status("Game is paused : "+QString::number(m_game->getGenerations())+" generations");
}

void Controller::end()
{
    m_game->stopGame();
    m_window->status("Game is end : "+QString::number(m_game->getGenerations())+" generations done");
}

void Controller::clear()
{
    m_game->stopGame();
    if(!m_game->isEmpty()){
        m_game->clearGame();
        m_window->setDataGenerations(m_game->getGenerations());
        m_window->status("");
        m_window->statusBar()->showMessage("Clear done",1000);
    }
}

void Controller::newFile()
{
    m_game->clearGame();
    resetTimer();
    resetUniverse();
    resetColor();
    m_game->resetMode();
    m_window->status("");
    m_window->statusBar()->showMessage("New File done",1000);
    m_window->setDataGenerations(m_game->getGenerations());
    m_window->setDataCellAlive(m_game->getCellAlive());
}

void Controller::mode(bool born,bool stase,bool dead,int min_born,int max_born,int min_stase,int max_stase)
{
    m_game->setModeBorn(min_born,max_born, born);
    m_game->setModeStase(min_stase,max_stase, stase);
    m_game->setDeadMode(dead);
    m_window->statusBar()->showMessage("Game mode changed",1000);
}

void Controller::resetParams()
{
    resetUniverse();
    resetTimer();
    resetColor();
    m_window->statusBar()->showMessage("Parameters reset",1000);
}

void Controller::save()
{
    m_game->saveGame();
    m_window->status("File saved");
}
void Controller::quit()
{
    m_application->instance()->quit();
}

void Controller::resetUniverse()
{
    if(m_game->isEmpty()){
        m_game->setCellSize(m_game->DEFAULT_VALUE_CELLS);
        m_game->resetCellGame();
        m_window->statusBar()->showMessage("Universe reset",1000);
    }
}
void Controller::resetTimer()
{
   setTimer(m_game->DEFAULT_VALUE_TIMER);
   m_window->statusBar()->showMessage("Timer reset",1000);
}

void Controller::resetColor()
{
    m_game->setColor(m_game->DEFAULT_COLOR);
    m_window->statusBar()->showMessage("Color reset",1000);
}
void Controller::setUniverseSize(int size)
{
    if(size!=m_game->getCell()){
        m_game->setCellSize(size);
        m_window->statusBar()->showMessage("Universe size updated",1000);
    }
}

void Controller::setTimer(int t)
{
    m_game->setInterval(t);
    m_window->statusBar()->showMessage("Timer updated",1000);
}

void Controller::painted(bool e,bool r)
{
    Q_UNUSED(e);
    m_window->statusBar()->showMessage("Painting",1000);
    if(!r) m_window->status("Game is ready");
    m_window->setDataCellAlive(m_game->getCellAlive());
}

void Controller::parameters()
{
    m_params->hide(); //hide to put it in foreground
    m_params->show();
}

void Controller::selectColor()
{
    QColor color = QColorDialog::getColor(m_game->getColor(), this, tr("Select color"));
    if(!color.isValid())
        return;
    m_game->setColor(color);
}

