#ifndef ABOUTBOX_H
#define ABOUTBOX_H

#include <QDialog>
#include "ui_aboutbox.h"

namespace Ui {
class aboutBox;
}

class aboutBox : public QDialog
{
    Q_OBJECT

public:
    explicit aboutBox(QWidget *parent = nullptr);
    ~aboutBox();

public slots:
    void close();
private:
    Ui::aboutBox *ui;
};

#endif // ABOUTBOX_H
