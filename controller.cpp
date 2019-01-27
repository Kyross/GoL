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
    //***cells
    m_game->setCellSize(m_game->DEFAULT_VALUE_CELLS);
    m_window->m_ui->universe_spinBox->setRange(m_game->DEFAULT_MIN_CELLS,m_game->DEFAULT_MAX_CELLS);
    m_window->m_ui->universe_spinBox->setValue(m_game->getCell());
    m_params->m_ui->universe_spinBox->setRange(m_game->DEFAULT_MIN_CELLS,m_game->DEFAULT_MAX_CELLS);
    m_params->m_ui->universe_spinBox->setValue(m_game->getCell());
    m_window->m_ui->universe_slider->setRange(m_game->DEFAULT_MIN_CELLS,m_game->DEFAULT_MAX_CELLS);
    m_window->m_ui->universe_slider->setValue(m_game->getCell());
    //***timer
    m_game->setInterval(m_game->DEFAULT_VALUE_TIMER);
    m_window->m_ui->timer_SpinBox->setRange(m_game->DEFAULT_MIN_TIMER,m_game->DEFAULT_MAX_TIMER);
    m_window->m_ui->timer_SpinBox->setValue(m_game->getTimer()->interval());
    m_window->m_ui->timer_slider->setRange(m_game->DEFAULT_MIN_TIMER,m_game->DEFAULT_MAX_TIMER);
    m_window->m_ui->timer_slider->setValue(m_game->getTimer()->interval());
    m_params->m_ui->timer_spinBox->setRange(m_game->DEFAULT_MIN_TIMER,m_game->DEFAULT_MAX_TIMER);
    m_params->m_ui->timer_spinBox->setValue(m_game->getTimer()->interval());

    //Connect
    //*** run, pause
    connect(m_window,SIGNAL(runClickedSignal()),this,SLOT(run()));
    connect(m_game,SIGNAL(gameRunningSignal(bool,bool)),this,SLOT(painted(bool,bool)));
    connect(m_game,SIGNAL(gameRunningSignal(bool,bool)),m_window,SLOT(setRunPause(bool,bool)));
    connect(m_window,SIGNAL(pauseClickedSignal()),this,SLOT(pause()));
    connect(m_game,SIGNAL(gamePausedSignal(bool,bool)),this,SLOT(pause()));
    connect(m_game,SIGNAL(gamePausedSignal(bool,bool)),m_window,SLOT(setRunPause(bool,bool)));
    connect(m_game,SIGNAL(gameRunningSignal(bool,bool)),m_params,SLOT(setParamsEnable(bool,bool)));
    //*** clear, new
    connect(m_window,SIGNAL(clearClickedSignal()),this,SLOT(clear()));
    connect(m_game,SIGNAL(gameClearSignal()),this,SLOT(clear()));
    connect(m_game,SIGNAL(gameRunningSignal(bool,bool)),m_window,SLOT(setRunPause(bool,bool)));
    //connect(m_window,SIGNAL(newClickedSignal()),this,SLOT(newFile()));

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
    connect(m_window->m_ui->actionReset_Color,SIGNAL(triggered()),this,SLOT(resetColor()));
    connect(m_window,SIGNAL(parametersClickedSignal()),this,SLOT(parameters()));



    //color
    connect(m_params,SIGNAL(colorSignal()),this,SLOT(selectColor()));
    connect(m_game,SIGNAL(gameColorSignal(QColor,QColor)),m_params,SLOT(setColor(QColor,QColor)));


    connect(m_params,SIGNAL(loadDemoSignal(QString)),m_game,SLOT(loadGame(QString)));
    connect(m_params,SIGNAL(randomizeModeSignal(int)),m_game,SLOT(randomizeGame(int)));
    connect(m_params,SIGNAL(modeSignal()),this,SLOT(mode()));
    connect(m_params->m_ui->reset_mode_pushButton,SIGNAL(clicked()),this,SLOT(resetMode()));
    connect(m_params->m_ui->reset_timer_pushButton,SIGNAL(clicked()),this,SLOT(resetTimer()));
    connect(m_params->m_ui->reset_universe_pushButton,SIGNAL(clicked()),this,SLOT(resetUniverse()));
    connect(m_params->m_ui->reset_color_pushButton,SIGNAL(clicked()),this,SLOT(resetColor()));
    connect(m_params->m_ui->reset_parameter_pushButton,SIGNAL(clicked()),this,SLOT(resetParams()));

    //updateControl();
}

void Controller::run()
{
    if(!m_game->isRunning()){
        m_game->runGame();
        //updateControl();
    }
    m_window->status("Game is running : "+QString::number(m_game->getGenerations())+" generations");
}

void Controller::pause()
{
        m_game->stopGame();
        m_window->status("Game is paused : "+QString::number(m_game->getGenerations())+" generations");
        //updateControl();
}

void Controller::end()
{
    m_game->stopGame();
    m_window->status("Game is end : "+QString::number(m_game->getGenerations())+" generations done");
    //updateControl();
}

void Controller::clear()
{
    m_game->stopGame();
    if(!m_game->isEmpty()){
        m_game->clearGame();
        m_window->status("");
        m_window->statusBar()->showMessage("Clear done",1000);
    }
    //updateControl();
}

void Controller::newFile()
{
    m_game->clearGame();
    resetTimer();
    resetUniverse();
    resetColor();
    resetMode();
    m_window->status("");
    m_window->statusBar()->showMessage("New File done",1000);
    //updateControl();
}

void Controller::mode()
{
    m_game->setModeBorn(m_params->getBornMin(),m_params->getBornMax(), m_params->isBornChecked());
    m_game->setModeStase(m_params->getStaseMin(),m_params->getStaseMax(), m_params->isStaseChecked());
    m_game->setDeadMode(m_params->isDeadChecked());
    m_window->statusBar()->showMessage("Game mode changed",1000);
}

void Controller::resetMode()
{
    m_game->setModeBorn(m_game->DEFAULT_BORN_MIN,m_game->DEFAULT_BORN_MAX,true);
    m_game->setModeStase(m_game->DEFAULT_STASE_MIN,m_game->DEFAULT_STASE_MAX,true);
    m_game->setDeadMode(false);

    m_window->statusBar()->showMessage("Game mode default",1000);
    //updateControl();
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
    QString filename = QFileDialog::getSaveFileName(this,
                                                    tr("Save current game"),
                                                    QDir::currentPath(),
                                                    tr("*.life Files (*.life)"));
    if(filename.length() < 1)
        return;
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
        return;
    QString s = QString::number(m_game->getCell())+"\n";
    file.write(s.toUtf8());
    file.write(m_game->dump().toUtf8());
    QColor color = m_game->getColor();
    QString buf = QString::number(color.red())+" "+
                  QString::number(color.green())+" "+
                  QString::number(color.blue())+"\n";
    file.write(buf.toUtf8());
    buf.clear();
    buf = QString::number(m_game->getTimer()->interval())+"\n";
    file.write(buf.toUtf8());
    file.close();
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
    /*
    QPixmap icon(157, 16);
    icon.fill(m_game->getColor());
    m_params->m_ui->colorpushButton->setIcon(QIcon(icon));
    icon.fill(m_game->getColorDead());
    //m_params->m_ui->color_dead_pushButton->setIcon(QIcon(icon));
    */
    m_window->statusBar()->showMessage("Color reset",1000);
}
void Controller::setUniverseSize(int size)
{
    if(size!=m_game->getCell()){
        m_game->setCellSize(size);
        m_window->statusBar()->showMessage("Universe size updated",1000);
        //updateControl();
    }
}

void Controller::setTimer(int t)
{
    m_game->setInterval(t);
    m_window->statusBar()->showMessage("Timer updated",1000);
    //updateControl();
}

void Controller::painted(bool p)
{
    //updateControl();
    m_window->statusBar()->showMessage("Painting",1000);
    if(p) m_window->status("Game is ready");
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

void Controller::updateControl()
{
    //Universe
    m_window->m_ui->universe_spinBox->setEnabled(m_game->isEmpty());
    m_window->m_ui->universe_slider->setEnabled(m_game->isEmpty());
    m_window->m_ui->actionReset_Universe->setEnabled(m_game->isEmpty());
    m_params->m_ui->universe_spinBox->setEnabled(m_game->isEmpty());
    m_params->m_ui->reset_universe_pushButton->setEnabled(m_game->isEmpty());
    m_params->m_ui->warning_label->setVisible(!m_game->isEmpty());
    m_window->universeSizeChanged(m_game->getCell());
    m_params->universeSizeChanged(m_game->getCell());
    //Timer
    m_window->timerChanged(m_game->getTimer()->interval());
    //Run, Pause
    m_window->m_ui->actionRun->setEnabled(!m_game->isRunning() && !m_game->isEmpty());
    m_window->m_ui->actionPause->setEnabled(!m_window->m_ui->actionRun->isEnabled() && m_game->isRunning());

    //Clear
    m_window->m_ui->actionClear_4->setEnabled(!m_game->isEmpty());

    //New
    m_window->m_ui->actionNew->setEnabled(!m_game->isEmpty() || m_game->getCell() != m_game->DEFAULT_VALUE_CELLS || m_game->getTimer()->interval() != m_game->DEFAULT_VALUE_TIMER);

    //Game mode
    m_params->setBornChecked(m_game->isBorn());
    m_params->setStaseChecked(m_game->isStase());
    m_params->setDeadChecked(m_game->isDead());
    m_params->setBornMin(m_game->getStaseMin());
    m_params->setBornMax(m_game->getBornMax());
    m_params->setStaseMin(m_game->getStaseMin());
    m_params->setStaseMax(m_game->getStaseMax());
}
