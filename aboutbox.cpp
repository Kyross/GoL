#include "aboutbox.h"

aboutBox::aboutBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutBox)
{
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //remove "?" on the top of the dialog box
    ui->setupUi(this);
    this->show();
    connect(ui->close_pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

aboutBox::~aboutBox()
{
    delete ui;
}

void aboutBox::close()
{
   this->destroy();
}
