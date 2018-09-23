#include "frmjahrgaengeverwalten.h"
#include "ui_frmjahrgaengeverwalten.h"

frmJahrgaengeVerwalten::frmJahrgaengeVerwalten(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmJahrgaengeVerwalten)
{
    ui->setupUi(this);
}

frmJahrgaengeVerwalten::~frmJahrgaengeVerwalten()
{
    delete ui;
}

void frmJahrgaengeVerwalten::on_pbBeenden_clicked()
{
    qApp->quit();
}

void frmJahrgaengeVerwalten::on_pbMenue_clicked()
{
    this->close();
}

void frmJahrgaengeVerwalten::on_pbJahrgangHinzu_clicked()
{
    //TODO: Check Auf Doppelte Jahrgänge
}
