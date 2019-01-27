#ifndef PARAMETERSDIALOG_H
#define PARAMETERSDIALOG_H

#include "ui_parametersdialog.h"
#include <QDialog>
#include <QString>
#include <QColorDialog>
#include <QDebug>

namespace Ui {
class ParametersDialog;
}

class ParametersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ParametersDialog(QWidget *parent = nullptr);
    ~ParametersDialog();
     Ui::ParametersDialog *m_ui;

signals:
    void universeSizeChangedSignal(int);
    void timerChangedSignal(int);
    void loadDemoSignal(QString);
    void randomizeModeSignal(int);
    void modeSignal();
    void colorSignal();

public slots:
    void universeSizeChanged(int size);
    void timerChanged(int time);
    void loadDemo();
    void randomizeMode();
    void modeChanged();
    void colorClicked();
    void setParamsEnable(bool,bool);

    //Getter
    bool isBornChecked();
    bool isStaseChecked();
    bool isDeadChecked();
    int getBornMin();
    int getBornMax();
    int getStaseMin();
    int getStaseMax();

    //Setter
    void setBornChecked(bool);
    void setStaseChecked(bool);
    void setDeadChecked(bool);
    void setBornMin(int);
    void setBornMax(int);
    void setStaseMin(int);
    void setStaseMax(int);
    void setColor(QColor,QColor);
private:

};

#endif // PARAMETERSDIALOG_H
