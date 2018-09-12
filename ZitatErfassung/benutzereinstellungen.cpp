#include "benutzereinstellungen.h"
#include "ui_benutzereinstellungen.h"

BenutzerEinstellungen::BenutzerEinstellungen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BenutzerEinstellungen)
{
    ui->setupUi(this);
}

BenutzerEinstellungen::~BenutzerEinstellungen()
{
    delete ui;
}

void BenutzerEinstellungen::on_pbBeenden_clicked()
{
    this->close();
}
