#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::MainWindow),
    m_status("")
{
    m_ui->setupUi(this);
    statusBar()->addWidget(&m_status);
    //Connect
    connect(m_ui->actionRun,SIGNAL(triggered()),this,SLOT(runClicked()));
    connect(m_ui->actionPause,SIGNAL(triggered()),this,SLOT(pauseClicked()));
    connect(m_ui->actionClear_4,SIGNAL(triggered()),this,SLOT(clearClicked()));
    connect(m_ui->actionNew,SIGNAL(triggered()),this,SLOT(newClicked()));
    connect(m_ui->actionOpen,SIGNAL(triggered()),this,SLOT(openClicked()));
    connect(m_ui->actionSave,SIGNAL(triggered()),this,SLOT(saveClicked()));
    connect(m_ui->actionQuit,SIGNAL(triggered()),this,SLOT(quitClicked()));
    connect(m_ui->actionReset_Universe,SIGNAL(triggered()),this,SLOT(resetUniverseClicked()));
    connect(m_ui->actionReset_Timer,SIGNAL(triggered()),this,SLOT(resetTimerClicked()));
    connect(m_ui->universe_spinBox,SIGNAL(valueChanged(int)),this,SLOT(universeSizeChanged(int)));
    connect(m_ui->universe_slider,SIGNAL(valueChanged(int)),this,SLOT(universeSizeChanged(int)));
    connect(m_ui->timer_SpinBox,SIGNAL(valueChanged(int)),this,SLOT(timerChanged(int)));
    connect(m_ui->timer_slider,SIGNAL(valueChanged(int)),this,SLOT(timerChanged(int)));
    connect(m_ui->actionHide_parameters,SIGNAL(toggled(bool)),this,SLOT(hideParameters(bool)));
    connect(m_ui->actionHide_toolbar,SIGNAL(toggled(bool)),this,SLOT(hideToolbar(bool)));
    connect(m_ui->actionMaximized,SIGNAL(triggered()),this,SLOT(maximizedClicked()));
    connect(m_ui->actionNormal,SIGNAL(triggered()),this,SLOT(normalClicked()));
    connect(m_ui->actionFull_Screen,SIGNAL(triggered()),this,SLOT(fullscreenClicked()));
    connect(m_ui->actionAbout,SIGNAL(triggered()),this,SLOT(aboutGolClicked()));
    connect(m_ui->actionParameters_2,SIGNAL(triggered()),this,SLOT(parametersClicked()));
}

MainWindow::~MainWindow()
{
    delete m_ui;
}

void MainWindow::closeEvent(QCloseEvent* e)
{
    Q_UNUSED(e);
    emit quitClickedSignal();
}

/*****************************
 *   public GUI Features
 * ***************************/
void MainWindow::displayGame(GameWidget *game)
{
    m_ui->game_layout->addWidget(game);
}

void MainWindow::status(QString text)
{
    m_status.setText(text);
}

/*****************************
 *   private GUI Features
 * ***************************/
void MainWindow::maximizedClicked()
{
    this->showMaximized();
    m_ui->actionNormal->setEnabled(true);
    m_ui->statusBar->showMessage("Window is in maximized",1000);
}

void MainWindow::fullscreenClicked()
{
    this->showFullScreen();
    m_ui->actionNormal->setEnabled(true);
    m_ui->statusBar->showMessage("Window is in fullscreen",1000);
}

void MainWindow::normalClicked()
{
    this->showNormal();
    m_ui->actionNormal->setEnabled(false);
    m_ui->statusBar->showMessage("Window is in normal",1000);
}


void MainWindow::resizeEvent( QResizeEvent *e )
{
    Q_UNUSED(e);
    m_ui->actionMaximized->setEnabled(!this->isMaximized());
    m_ui->actionFull_Screen->setEnabled(!this->isFullScreen());
}

void MainWindow::hideToolbar(bool hide)
{
    m_ui->mainToolBar->setHidden(hide);
}

void MainWindow::hideParameters(bool hide)
{
    m_ui->groupBox_params->setHidden(hide);
}

void MainWindow::aboutGolClicked(){
   new aboutBox();
}

void MainWindow::rulesClicked(){

}

/***************************
 *      SLOTS
 * **************************/
void MainWindow::runClicked()
{
    emit runClickedSignal();
}

void MainWindow::pauseClicked()
{
    emit pauseClickedSignal();
}

void MainWindow::clearClicked()
{
    emit clearClickedSignal();
}

void MainWindow::newClicked()
{
    emit newClickedSignal();
}

void MainWindow::openClicked()
{
    emit openClickedSignal();
}

void MainWindow::saveClicked()
{
    emit saveClickedSignal();
}

void MainWindow::quitClicked()
{
   emit quitClickedSignal();
}

void MainWindow::resetTimerClicked()
{
    emit resetTimerClickedSignal();
}

void MainWindow::resetUniverseClicked()
{
    emit resetUniverseClickedSignal();
}
//Parameters
void MainWindow::universeSizeChanged(int size)
{
    if(size!=m_ui->universe_spinBox->value() || size!=m_ui->universe_slider->value()){
       emit universeSizeChangedSignal(size);
    }
}

void MainWindow::timerChanged(int t)
{
    emit timerChangedSignal(t);
}

void MainWindow::parametersClicked()
{
    emit parametersClickedSignal();
}

