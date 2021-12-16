#include "pesform.h"
#include "ui_pesform.h"

Pesform::Pesform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pesform)
{
    ui->setupUi(this);
}

Pesform::~Pesform()
{
    delete ui;
}
