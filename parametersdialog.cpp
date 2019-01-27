#include "parametersdialog.h"

ParametersDialog::ParametersDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::ParametersDialog)
{
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //remove "?" on the top of the dialog box
    m_ui->setupUi(this);
    m_ui->warning_label->setVisible(false);

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
        qDebug()<<color;
    QPixmap icon(157, 16);
    icon.fill(color);
    m_ui->colorpushButton->setIcon(QIcon(icon));
}

//Signals
void ParametersDialog::modeChanged()
{
    m_ui->born_min_spinBox->setEnabled(m_ui->born_checkBox->isChecked());
    m_ui->born_max_spinBox->setEnabled(m_ui->born_checkBox->isChecked());
    m_ui->stase_min_spinBox->setEnabled(m_ui->stase_checkBox->isChecked());
    m_ui->stase_max_spinBox->setEnabled(m_ui->stase_checkBox->isChecked());
    emit modeSignal();
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
    m_ui->universe_spinBox->setEnabled(e);
    m_ui->reset_universe_pushButton->setEnabled(e);
    m_ui->warning_label->setVisible(!e);
}
