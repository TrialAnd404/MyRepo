#include "hauptmenueadmin.h"
#include "ui_hauptmenueadmin.h"
#include <benutzereinstellungen.h>
#include <zitateintragen.h>
#include <frmmain.h>
#include <frmanmelden.h>
#include <frmzitatanzeigen.h>
#include <frmzitatverwalten.h>
#include <frmjahrgaengeverwalten.h>
#include <frmbenutzerverwaltung.h>

HauptmenueAdmin::HauptmenueAdmin(Admin* currentAdmin, QWidget *parent) :
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
    qApp->quit();
}

void HauptmenueAdmin::on_pbZitatEintragen_clicked()
{
    //so öffnet man ein neues Window "Benutzereinstellungen"
    ZitatEintragen zitateintragen;
    zitateintragen.setModal(true);
    zitateintragen.exec();
    //MPS
}


void HauptmenueAdmin::on_pbAbmelden_clicked()
{
    this->close();
    //so öffnet man ein neues Window "frmmain" (Anmeldemaske)
    frmAnmelden frmanmelden;
    frmanmelden.setModal(true);
    frmanmelden.exec();
    //MPS
}

void HauptmenueAdmin::on_pbZitatAnzeigen_clicked()
{
    //so öffnet man ein neues Window "zitatanzeigen"
    frmZitatAnzeigen zitatanzeigen;
    zitatanzeigen.setModal(true);
    zitatanzeigen.exec();
    //MPS
}

void HauptmenueAdmin::on_pbZitatVerwalten_clicked()
{
    //so öffnet man ein neues Window "zitatverwalten"
    frmZitatVerwalten zitatverwalten;
    zitatverwalten.setModal(true);
    zitatverwalten.exec();
    //MPS
}

void HauptmenueAdmin::on_pbJahrgaengeVerwalten_clicked()
{
    //so öffnet man ein neues Window "jahrgaengeverwalten"
    frmJahrgaengeVerwalten jahrgaengeverwalten;
    jahrgaengeverwalten.setModal(true);
    jahrgaengeverwalten.exec();
    //MPS
}



void HauptmenueAdmin::on_pbBenutzerVerwaltung_clicked()
{
    //so öffnet man ein neues Window "jahrgaengeverwalten"
    frmBenutzerVerwaltung benutzerverwaltung;
    benutzerverwaltung.setModal(true);
    benutzerverwaltung.exec();
    //MPS
}
