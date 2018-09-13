#include "frmzitatanzeigen.h"
#include "ui_frmzitatanzeigen.h"

frmZitatAnzeigen::frmZitatAnzeigen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmZitatAnzeigen)
{
    ui->setupUi(this);
}

frmZitatAnzeigen::~frmZitatAnzeigen()
{
    delete ui;
}

void frmZitatAnzeigen::on_pbBeenden_clicked()
{
    qApp->quit();
}

void frmZitatAnzeigen::on_pbMenue_clicked()
{
    this->close();
}
