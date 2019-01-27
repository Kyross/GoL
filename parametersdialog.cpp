#include "parametersdialog.h"

ParametersDialog::ParametersDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::ParametersDialog)
{
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //remove "?" on the top of the dialog box
    m_ui->setupUi(this);
    m_ui->color_dead_pushButton->setStyleSheet("QPushButton::pressed{border : none;}");
    this->setFixedSize(this->width(),this->height());

    //connect
    connect(m_ui->universe_spinBox,SIGNAL(valueChanged(int)),this,SLOT(universeSizeChanged(int)));
    connect(m_ui->timer_spinBox,SIGNAL(valueChanged(int)),this,SLOT(timerChanged(int)));
    connect(m_ui->demo_load_pushButton,SIGNAL(clicked()),this,SLOT(loadDemo()));
    connect(m_ui->random_pushButton,SIGNAL(clicked()),this,SLOT(randomizeMode()));
    connect(m_ui->born_min_spinBox,SIGNAL(valueChanged(int)),this,SLOT(modeChanged()));
    connect(m_ui->born_max_spinBox,SIGNAL(valueChanged(int)),this,SLOT(modeChanged()));
    connect(m_ui->stase_min_spinBox,SIGNAL(valueChanged(int)),this,SLOT(modeChanged()));
    connect(m_ui->stase_max_spinBox,SIGNAL(valueChanged(int)),this,SLOT(modeChanged()));
    connect(m_ui->born_checkBox,SIGNAL(toggled(bool)),this,SLOT(modeChanged()));
    connect(m_ui->stase_checkBox,SIGNAL(toggled(bool)),this,SLOT(modeChanged()));
    connect(m_ui->dead_checkBox,SIGNAL(toggled(bool)),this,SLOT(modeChanged()));
    connect(m_ui->colorpushButton,SIGNAL(clicked()),this,SLOT(colorClicked()));
    connect(m_ui->reset_mode_pushButton,SIGNAL(clicked()),this,SLOT(resetModeClicked()));
    connect(m_ui->reset_timer_pushButton,SIGNAL(clicked()),this,SLOT(resetTimerClicked()));
    connect(m_ui->reset_universe_pushButton,SIGNAL(clicked()),this,SLOT(resetUniverseClicked()));
    connect(m_ui->reset_color_pushButton,SIGNAL(clicked()),this,SLOT(resetColorClicked()));
    connect(m_ui->reset_parameter_pushButton,SIGNAL(clicked()),this,SLOT(resetParametersClicked()));
    connect(m_ui->clear_pushButton,SIGNAL(clicked()),this,SLOT(clearClicked()));
    connect(m_ui->clear_mode_pushButton,SIGNAL(clicked()),this,SLOT(clearClicked()));
}


ParametersDialog::~ParametersDialog()
{
    delete m_ui;
}

//Getter
bool ParametersDialog::isBornChecked()
{
    return m_ui->born_checkBox->isChecked();
}

bool ParametersDialog::isStaseChecked()
{
    return m_ui->stase_checkBox->isChecked();
}

bool ParametersDialog::isDeadChecked()
{
    return m_ui->dead_checkBox->isChecked();
}

int ParametersDialog::getBornMin()
{
    return m_ui->born_min_spinBox->value();
}

int ParametersDialog::getBornMax()
{
    return m_ui->born_max_spinBox->value();
}

int ParametersDialog::getStaseMin()
{
    return m_ui->stase_min_spinBox->value();
}

int ParametersDialog::getStaseMax()
{
    return m_ui->stase_max_spinBox->value();
}

//Setter
void ParametersDialog::setBornChecked(bool b)
{
    m_ui->born_checkBox->setChecked(b);
}

void ParametersDialog::setStaseChecked(bool b)
{
    m_ui->stase_checkBox->setChecked(b);
}

void ParametersDialog::setDeadChecked(bool b)
{
    m_ui->dead_checkBox->setChecked(b);
}

void ParametersDialog::setBornMin(int min)
{
    m_ui->born_min_spinBox->setValue(min);
}

void ParametersDialog::setBornMax(int max)
{
    m_ui->born_max_spinBox->setValue(max);
}

void ParametersDialog::setStaseMin(int min)
{
    m_ui->stase_min_spinBox->setValue(min);
}

void ParametersDialog::setStaseMax(int max)
{
    m_ui->stase_max_spinBox->setValue(max);
}

void ParametersDialog::setColor(QColor color,QColor dead_color)
{
    QPixmap icon(157, 16);
    icon.fill(color);
    m_ui->colorpushButton->setIcon(QIcon(icon));
    icon.fill(dead_color);
    m_ui->color_dead_pushButton->setIcon(QIcon(icon));
}
void ParametersDialog::setMode(bool born,bool stase,bool dead,int min_born,int max_born,int min_stase,int max_stase)
{
    m_ui->born_checkBox->setChecked(born);
    m_ui->stase_checkBox->setChecked(stase);
    m_ui->dead_checkBox->setChecked(dead);
    m_ui->born_min_spinBox->setEnabled(born);
    m_ui->born_max_spinBox->setEnabled(born);
    m_ui->stase_min_spinBox->setEnabled(stase);
    m_ui->stase_max_spinBox->setEnabled(stase);

    m_ui->born_min_spinBox->setValue(min_born);
    m_ui->born_max_spinBox->setValue(max_born);
    m_ui->stase_min_spinBox->setValue(min_stase);
    m_ui->stase_max_spinBox->setValue(max_stase);

    m_ui->born_min_spinBox->setRange(0,max_born);
    m_ui->born_max_spinBox->setRange(min_born,8);
    m_ui->stase_min_spinBox->setRange(0,max_stase);
    m_ui->stase_max_spinBox->setRange(min_stase,8);
}
//Signals
void ParametersDialog::modeChanged()
{
    bool born=m_ui->born_checkBox->isChecked();
    bool stase=m_ui->stase_checkBox->isChecked();
    bool dead=m_ui->dead_checkBox->isChecked();

    int min_born=m_ui->born_min_spinBox->value();
    int max_born=m_ui->born_max_spinBox->value();
    int min_stase=m_ui->stase_min_spinBox->value();
    int max_stase=m_ui->stase_max_spinBox->value();

    emit modeSignal(born,stase,dead,min_born,max_born,min_stase,max_stase);
}
void ParametersDialog::universeSizeChanged(int size)
{
        m_ui->universe_spinBox->setValue(size);
        emit universeSizeChangedSignal(size);
}

void ParametersDialog::timerChanged(int time)
{
        m_ui->timer_spinBox->setValue(time);
        emit timerChangedSignal(time);
}

void ParametersDialog::resetModeClicked()
{
    emit resetModeClickedSignal();
}
void ParametersDialog::loadDemo()
{
    QString filename;
    int d=m_ui->demo_comboBox->currentIndex();
    if(d==0) filename=":/models/aircraft_carrier.life";
    if(d==1) filename=":/models/beehive.life";
    if(d==2) filename=":/models/boat.life";
    if(d==3) filename=":/models/loaf.life";
    if(d==4) filename=":/models/beacon.life";
    if(d==5) filename=":/models/toad.life";
    if(d==6) filename=":/models/pentadecathlon.life";
    if(d==7) filename=":/models/glider.life";
    if(d==8) filename=":/models/small_ship.life";
    if(d==9) filename=":/models/glider_gun.life";
    if(d==10) filename=":/models/P46_glider_gun.life";

    if(!filename.isEmpty()) emit loadDemoSignal(filename);
}

void ParametersDialog::randomizeMode(){
    emit randomizeModeSignal(m_ui->random_spinBox->value());
}

void ParametersDialog::colorClicked()
{
    emit colorSignal();
}

void ParametersDialog::setParamsEnable(bool e, bool r)
{
    Q_UNUSED(r);
    m_ui->universe_spinBox->setEnabled(e);
    m_ui->clear_pushButton->setEnabled(!e);
    m_ui->reset_universe_pushButton->setEnabled(e);
    m_ui->dead_checkBox->setEnabled(e);
    m_ui->warning_label->setVisible(!e);
    m_ui->warning_mode_label->setVisible(!e);
    m_ui->clear_mode_pushButton->setVisible(!e);
}

void ParametersDialog::resetTimerClicked()
{
    emit resetTimerClickedSignal();
}

void ParametersDialog::resetUniverseClicked()
{
    emit resetUniverseClickedSignal();
}

void ParametersDialog::resetColorClicked()
{
    emit resetColorClickedSignal();
}

void ParametersDialog::resetParametersClicked()
{
    emit resetParametersClickedSignal();
}

void ParametersDialog::clearClicked()
{
    emit clearClickedSignal();
}

void ParametersDialog::initRange(int min_u,int max_u, int min_t, int max_t)
{
    m_ui->universe_spinBox->setRange(min_u,max_u);
    m_ui->timer_spinBox->setRange(min_t,max_t);
}
