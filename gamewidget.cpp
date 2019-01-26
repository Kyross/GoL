#include "gamewidget.h"

GameWidget::GameWidget(QWidget *parent) :
    QWidget(parent),
    m_timer(new QTimer(this)),
    m_cell(50)
{
    m_generations=0;
    m_timer->setInterval(300);
    m_color = "#000";
    m_cell_map = new bool[(m_cell + 2) * (m_cell + 2)];
    m_cell_map_next = new bool[(m_cell + 2) * (m_cell + 2)];
    connect(m_timer, SIGNAL(timeout()), this, SLOT(newGeneration()));
    memset(m_cell_map, false, sizeof(bool)*(m_cell + 2) * (m_cell + 2));
    memset(m_cell_map_next, false, sizeof(bool)*(m_cell + 2) * (m_cell + 2));
}

GameWidget::~GameWidget()
{
    delete [] m_cell_map;
    delete [] m_cell_map_next;
    delete m_timer;
}

void GameWidget::runGame()
{
    m_timer->start();
}

void GameWidget::stopGame()
{
    m_timer->stop();
    emit gamePausedSignal();
}

void GameWidget::clearGame()
{
    for(int k = 1; k <= m_cell; k++) {
        for(int j = 1; j <= m_cell; j++) {
            m_cell_map[k*m_cell + j] = false;
        }
    }
    m_generations=0;
    emit gameClearSignal();

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
int GameWidget::getCell()
{
    return m_cell;
}

void GameWidget::resetCellSizeGame()
{
    m_cell=DEFAULT_VALUE_CELLS;
    resetCellGame();
    update();
    emit gameCellSignal(DEFAULT_VALUE_CELLS);
}
void GameWidget::setCellSize(const int &s)
{
    if(s!=getCell())emit gameCellSignal(getCell());
    m_cell = s;
    resetCellGame();
    update();
}

void GameWidget::resetCellGame()
{
    delete [] m_cell_map;
    delete [] m_cell_map_next;
    m_cell_map = new bool[(m_cell + 2) * (m_cell + 2)];
    m_cell_map_next = new bool[(m_cell + 2) * (m_cell + 2)];
    memset(m_cell_map, false, sizeof(bool)*(m_cell + 2) * (m_cell + 2));
    memset(m_cell_map_next, false, sizeof(bool)*(m_cell + 2) * (m_cell + 2));
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
    m_timer->setInterval(msec);
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
    if (((m_cell_map[k*m_cell + j] == true) && (power == 2)) || (power == 3))
           return true;
    return false;
}

void GameWidget::newGeneration()
{
    m_generations++;
    emit gameGenerationSignal();

    int notChanged=0;
    for(int k=1; k <= m_cell; k++) {
        for(int j=1; j <= m_cell; j++) {
            m_cell_map_next[k*m_cell + j] = isAlive(k, j);
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
    emit gameEnvironmentChanged();
    double cellWidth = (double)width()/m_cell;
    double cellHeight = (double)height()/m_cell;
    int k = floor(e->y()/cellHeight)+1;
    int j = floor(e->x()/cellWidth)+1;
    m_cell_map[k*m_cell + j] = !m_cell_map[k*m_cell + j];
    update();
}

void GameWidget::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
    emit gameEnvironmentChanged();
}

void GameWidget::mouseMoveEvent(QMouseEvent *e)
{
    emit gameEnvironmentChanged();
    double cellWidth = (double)width()/m_cell;
    double cellHeight = (double)height()/m_cell;
    int k = floor(e->y()/cellHeight)+1;
    int j = floor(e->x()/cellWidth)+1;
    int currentLocation = k*m_cell + j;
    if(!m_cell_map[currentLocation]){                //if current cell is empty,fill in it
        m_cell_map [currentLocation]= !m_cell_map[currentLocation];
        update();
    }
}

void GameWidget::paintGrid(QPainter &p)
{
    QRect borders(0, 0, width()-1, height()-1); // borders of the universe
    QColor gridColor = m_color; // color of the grid
    gridColor.setAlpha(10); // must be lighter than main color
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
                QRectF r(left, top, (qreal)cellWidth, (qreal)cellHeight);
                p.fillRect(r, QBrush(m_color)); // fill cell with brush of main color
            }
        }
    }
}

QColor GameWidget::getColor()
{
    return m_color;
}

void GameWidget::setColor(const QColor &color)
{
    m_color = color;
    update();
}

const QTimer * GameWidget::getTimer()
{
    return m_timer;
}

