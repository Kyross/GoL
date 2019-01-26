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

public slots:
    void universeSizeChanged(int size);
    void timerChanged(int time);
    void loadDemo();
    void randomizeMode();

private:

};

#endif // PARAMETERSDIALOG_H
