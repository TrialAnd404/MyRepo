#include "hauptmenueadmin.h"
#include "ui_hauptmenueadmin.h"
#include <benutzereinstellungen.h>

HauptmenueAdmin::HauptmenueAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HauptmenueAdmin)
{
    ui->setupUi(this);
}

HauptmenueAdmin::~HauptmenueAdmin()
{
    delete ui;
}

void HauptmenueAdmin::on_pbBenutzerEinstellungen_clicked()
{
    //so öffnet man ein neues Window "Benutzereinstellungen"
    BenutzerEinstellungen benutzereinstellungen;
    benutzereinstellungen.setModal(true);
    benutzereinstellungen.exec();
    //MPS
}

void HauptmenueAdmin::on_pbBeenden_clicked()
{
    this->close();
}
