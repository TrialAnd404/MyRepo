#include "frmzitatverwalten.h"
#include "ui_frmzitatverwalten.h"

frmZitatVerwalten::frmZitatVerwalten(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmZitatVerwalten)
{
    ui->setupUi(this);
}

frmZitatVerwalten::~frmZitatVerwalten()
{
    delete ui;
}

void frmZitatVerwalten::on_pbMenue_clicked()
{
    this->close();
}
