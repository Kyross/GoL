#include "gamewidget.h"

GameWidget::GameWidget(QWidget *parent) :
    QWidget(parent),
    m_timer(new QTimer(this)),
    m_generations(0),
    m_dead_mode(false),
    m_cell(DEFAULT_VALUE_CELLS),
    m_born_min(DEFAULT_BORN_MIN),
    m_born_max(DEFAULT_BORN_MAX),
    m_born_state(true),
    m_stase_min(DEFAULT_STASE_MIN),
    m_stase_max(DEFAULT_STASE_MAX),
    m_stase_state(true)
{
    setColor("#000");
    resetCellGame();
    connect(m_timer, SIGNAL(timeout()), this, SLOT(newGeneration()));
}

GameWidget::~GameWidget()
{
    delete [] m_cell_map;
    delete [] m_cell_map_next;
    delete [] m_cell_dead_map;
    delete m_timer;
}

void GameWidget::runGame()
{
    if(!isRunning()){
        m_timer->start();
        emit gameRunningSignal(isEmpty(), isRunning());
     }
}

void GameWidget::stopGame()
{
    if(isRunning()){
        m_timer->stop();
        emit gamePausedSignal(isEmpty(), isRunning());
    }
}

void GameWidget::clearGame()
{

    for(int k = 1; k <= m_cell; k++) {
        for(int j = 1; j <= m_cell; j++) {
            m_cell_map[k*m_cell + j] = false;
            m_cell_dead_map[k*m_cell+j] = false;
        }
    }
    m_generations=0;
    emit gameClearSignal();
    emit gameRunningSignal(isEmpty(),isRunning());

    update();
}


bool GameWidget::isEmpty()
{
    for(int k = 1; k <= m_cell; k++) {
        for(int j = 1; j <= m_cell; j++) {
            if(m_cell_map[k*m_cell + j] == true) return false;
        }
    }
    return true;
}

int GameWidget::getBornMin()
{
    return m_born_min;
}

int GameWidget::getBornMax()
{
    return m_born_max;
}

int GameWidget::getStaseMin()
{
    return m_stase_min;
}

int GameWidget::getStaseMax()
{
    return m_stase_max;
}

int GameWidget::getCell()
{
    return m_cell;
}

void GameWidget::setCellSize(const int &s)
{
    if(s!=getCell()){
        m_cell = s;
        resetCellGame();
        update();
        emit gameCellSignal(getCell());
        emit gameRunningSignal(isEmpty(),isRunning());
    }
}

void GameWidget::resetCellGame()
{
    if(m_cell_map==nullptr)delete [] m_cell_map;
    if(m_cell_map_next==nullptr)delete [] m_cell_map_next;
    if(m_cell_dead_map==nullptr)delete [] m_cell_dead_map;
    m_cell_map = new bool[(m_cell + 2) * (m_cell + 2)];
    m_cell_map_next = new bool[(m_cell + 2) * (m_cell + 2)];
    m_cell_dead_map = new bool[(m_cell + 2) * (m_cell + 2)]{false};
    memset(m_cell_map, false, sizeof(bool)*(m_cell + 2) * (m_cell + 2));
    memset(m_cell_map_next, false, sizeof(bool)*(m_cell + 2) * (m_cell + 2));
    memset(m_cell_dead_map, false, sizeof(bool)*(m_cell + 2) * (m_cell + 2));
}

void GameWidget::randomizeGame(int r)
{
    for(int k = 1; k <= m_cell; k++) {
        for(int j = 1; j <= m_cell; j++) {
            int nb=(rand()/((double)RAND_MAX+1))*100;
            if(nb<r) m_cell_map[k*m_cell + j] = true;
        }
    }
    update();
    emit gameRunningSignal(isEmpty(),isRunning());
}

bool GameWidget::isRunning()
{
    return m_timer->isActive();
}

int GameWidget::getGenerations()
{
    return m_generations;
}

void GameWidget::setInterval(int msec)
{
    if(msec != m_timer->interval()){
        m_timer->setInterval(msec);
        gameTimerSignal(msec);
    }
}

void GameWidget::setModeBorn(int min,int max,bool b)
{
    m_born_min=min;
    m_born_max=max;
    m_born_state=b;
}

void GameWidget::setModeStase(int min,int max,bool b)
{
    m_stase_min=min;
    m_stase_max=max;
    m_stase_state=b;
}

void GameWidget::setDeadMode(bool b)
{
    m_dead_mode=b;
}
bool GameWidget::isAlive(int k, int j)
{
    int power = 0;
    power += m_cell_map[(k+1)*m_cell +  j];
    power += m_cell_map[(k-1)*m_cell + j];
    power += m_cell_map[k*m_cell + (j+1)];
    power += m_cell_map[k*m_cell + (j-1)];
    power += m_cell_map[(k+1)*m_cell + ( j-1)];
    power += m_cell_map[(k-1)*m_cell + (j+1)];
    power += m_cell_map[(k-1)*m_cell + (j-1)];
    power += m_cell_map[(k+1)*m_cell +  (j+1)];

    if(m_cell_map[k*m_cell + j] == true && power >= m_stase_min && power <=m_stase_max && m_stase_state) return true;
    if(power >= m_born_min && power <= m_born_max && m_born_state) return true;

    return false;
}

void GameWidget::newGeneration()
{
    m_generations++;
    emit gameGenerationSignal();

    int notChanged=0;
    for(int k=1; k <= m_cell; k++) {
        for(int j=1; j <= m_cell; j++) {
            if(m_dead_mode){
                if(m_cell_dead_map[k*m_cell + j]==false){
                    //cell is available
                    m_cell_map_next[k*m_cell + j] = isAlive(k, j);
                }else{
                    //cell is already dead
                    m_cell_map_next[k*m_cell + j] = false;
                }

                if(m_cell_map[k*m_cell + j]==true && m_cell_map_next[k*m_cell + j]==false){
                    //cell died in this generation and cell no more avalaible
                    m_cell_dead_map[k*m_cell + j]=true;
                }
            }else{
               m_cell_map_next[k*m_cell + j] = isAlive(k, j);
            }

            if(m_cell_map_next[k*m_cell + j] == m_cell_map[k*m_cell + j])
                notChanged++;
        }
    }
    if(notChanged == m_cell*m_cell) {
        QMessageBox::information(this,
                                 tr("Game Over"),
                                 tr("All next generations will be the same."),
                                 QMessageBox::Ok);
        emit gameEnded();
        return;
    }
    for(int k=1; k <= m_cell; k++) {
        for(int j=1; j <= m_cell; j++) {
            m_cell_map[k*m_cell + j] = m_cell_map_next[k*m_cell + j];
        }
    }
    update();
}

QString GameWidget::dump()
{
    char temp;
    QString master = "";
    for(int k = 1; k <= m_cell; k++) {
        for(int j = 1; j <= m_cell; j++) {
            if(m_cell_map[k*m_cell + j] == true) {
                temp = '*';
            } else {
                temp = 'o';
            }
            master.append(temp);
        }
        master.append("\n");
    }
    return master;
}

void GameWidget::setDump(const QString &data)
{
    int current = 0;
    for(int k = 1; k <= m_cell; k++) {
        for(int j = 1; j <= m_cell; j++) {
            m_cell_map[k*m_cell + j] = data[current] == '*';
            current++;
        }
        current++;
    }
    update();
}

void GameWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    paintGrid(p);
    paintCell(p);
}

void GameWidget::mousePressEvent(QMouseEvent *e)
{
    double cellWidth = (double)width()/m_cell;
    double cellHeight = (double)height()/m_cell;
    int k = floor(e->y()/cellHeight)+1;
    int j = floor(e->x()/cellWidth)+1;
    int currentLocation = k*m_cell + j;
    if(e->buttons().testFlag(Qt::LeftButton)){
        m_cell_map[currentLocation]=true;
        m_cell_dead_map[currentLocation]=false;
    }
    if(e->buttons().testFlag(Qt::RightButton)){
        m_cell_map[currentLocation]=false;
        m_cell_dead_map[currentLocation]=false;
    }

    update();
    emit gameRunningSignal(isEmpty(), isRunning());
}

void GameWidget::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
    emit gameRunningSignal(isEmpty(), isRunning());
}

void GameWidget::mouseMoveEvent(QMouseEvent *e)
{
    if(e->x()>=0 && e->x()<width() && e->y()>=0 && e->y()<height()){
        //not out of bounds of the grid
        emit gameRunningSignal(isEmpty(), isRunning());
        double cellWidth = (double)width()/m_cell;
        double cellHeight = (double)height()/m_cell;
        int k = floor(e->y()/cellHeight)+1;
        int j = floor(e->x()/cellWidth)+1;
        int currentLocation = k*m_cell + j;

        if(e->buttons().testFlag(Qt::LeftButton)){
            m_cell_map[currentLocation]=true;
            m_cell_dead_map[currentLocation]=false;
        }
        if(e->buttons().testFlag(Qt::RightButton)){
            m_cell_map[currentLocation]=false;
            m_cell_dead_map[currentLocation]=false;
        }
        update();
    }
}

void GameWidget::paintGrid(QPainter &p)
{
    QRect borders(0, 0, width()-1, height()-1); // borders of the universe
    QColor gridColor = "#000"; // color of the grid
    gridColor.setAlpha(40); // must be lighter than main color
    p.setPen(gridColor);
    double cellWidth = (double)width()/m_cell; // width of the widget / number of cells at one row
    for(double k = cellWidth; k <= width(); k += cellWidth)
        p.drawLine(k, 0, k, height());
    double cellHeight = (double)height()/m_cell; // height of the widget / number of cells at one row
    for(double k = cellHeight; k <= height(); k += cellHeight)
        p.drawLine(0, k, width(), k);
    p.drawRect(borders);
}

void GameWidget::paintCell(QPainter &p)
{
    double cellWidth = (double)width()/m_cell;
    double cellHeight = (double)height()/m_cell;
    for(int k=1; k <= m_cell; k++) {
        for(int j=1; j <= m_cell; j++) {
            if(m_cell_map[k*m_cell + j] == true) { // if there is any sense to paint it
                qreal left = (qreal)(cellWidth*j-cellWidth); // margin from left
                qreal top  = (qreal)(cellHeight*k-cellHeight); // margin from top
                QRectF r(left, top, (qreal)cellWidth-1, (qreal)cellHeight-1);
                p.fillRect(r, QBrush(m_color)); // fill cell with brush of main color
            }else if(m_cell_dead_map[k*m_cell + j] == true){
                //dead cell
                qreal left = (qreal)(cellWidth*j-cellWidth); // margin from left
                qreal top  = (qreal)(cellHeight*k-cellHeight); // margin from top
                QRectF r(left, top, (qreal)cellWidth-1, (qreal)cellHeight-1);
                p.fillRect(r, QBrush(m_color_dead)); // fill cell with brush of main color
            }
        }
    }
}

QColor GameWidget::getColor()
{
    return m_color;
}

QColor GameWidget::getColorDead()
{
    return m_color_dead;
}

void GameWidget::setColor(const QColor &color)
{
    m_color = color;
    m_color_dead=color;
    m_color_dead.setAlpha(90);
    update();
    emit gameColorSignal(m_color,m_color_dead);
}

const QTimer * GameWidget::getTimer()
{
    return m_timer;
}

//Getter
bool GameWidget::isBorn()
{
    return m_born_state;
}

bool GameWidget::isStase()
{
    return m_stase_state;
}

bool GameWidget::isDead()
{
    return m_dead_mode;
}

void GameWidget::loadGame(QString filename)
{
    if(filename.length() < 1)
        return;
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
        return;
    QTextStream in(&file);
    int sv;
    in >> sv;
    setCellSize(sv);
    QString dump="";
    for(int k=0; k != sv; k++) {
        QString t;
        in >> t;
        dump.append(t+"\n");
    }
    clearGame();
    setDump(dump);

    int r,g,b; // RGB color
    in >> r >> g >> b;
    setColor(QColor(r,g,b)); // sets color of the dots
    in >> r; // r will be interval number
    setInterval(r);
    gameRunningSignal(isEmpty(),isRunning());
}

void GameWidget::openGame()
{
    QString filename = QFileDialog::getOpenFileName(this,
                                                    tr("Open saved game"),
                                                    QDir::currentPath(),
                                                    tr("life format (*.life)"));
    loadGame(filename);
}
