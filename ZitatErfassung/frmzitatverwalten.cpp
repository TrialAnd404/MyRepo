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

void frmZitatVerwalten::on_pbSpeichern_clicked()
{

}

void frmZitatVerwalten::on_pbLoeschen_clicked()
{

}

void frmZitatVerwalten::on_pbSuchen_clicked()
{

}
