#include "frmhauptmenueadmin.h"
#include "ui_frmhauptmenueadmin.h"
#include <frmbenutzereinstellungen.h>
#include <frmzitateintragen.h>
#include <frmmain.h>
#include <frmanmelden.h>
#include <frmzitatanzeigen.h>
#include <frmzitatverwalten.h>
#include <frmjahrgaengeverwalten.h>
#include <frmbenutzerverwaltung.h>

frmHauptmenueAdmin::frmHauptmenueAdmin(Admin* currentAdmin, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmHauptmenueAdmin)
{
    ui->setupUi(this);
}

frmHauptmenueAdmin::~frmHauptmenueAdmin()
{
    delete ui;
}

void frmHauptmenueAdmin::on_pbBenutzerEinstellungen_clicked()
{
    //so öffnet man ein neues Window "Benutzereinstellungen"
    frmBenutzerEinstellungen benutzereinstellungen;
    benutzereinstellungen.setModal(true);
    benutzereinstellungen.exec();
    //MPS
}

void frmHauptmenueAdmin::on_pbBeenden_clicked()
{
    qApp->quit();
}

void frmHauptmenueAdmin::on_pbZitatEintragen_clicked()
{
    //so öffnet man ein neues Window "Benutzereinstellungen"
    frmZitatEintragen zitateintragen;
    zitateintragen.setModal(true);
    zitateintragen.exec();
    //MPS
}


void frmHauptmenueAdmin::on_pbAbmelden_clicked()
{
    this->close();
    //so öffnet man ein neues Window "frmmain" (Anmeldemaske)
    frmAnmelden frmanmelden;
    frmanmelden.setModal(true);
    frmanmelden.exec();
    //MPS
}

void frmHauptmenueAdmin::on_pbZitatAnzeigen_clicked()
{
    //so öffnet man ein neues Window "zitatanzeigen"
    frmZitatAnzeigen zitatanzeigen;
    zitatanzeigen.setModal(true);
    zitatanzeigen.exec();
    //MPS
}

void frmHauptmenueAdmin::on_pbZitatVerwalten_clicked()
{
    //so öffnet man ein neues Window "zitatverwalten"
    frmZitatVerwalten zitatverwalten;
    zitatverwalten.setModal(true);
    zitatverwalten.exec();
    //MPS
}

void frmHauptmenueAdmin::on_pbJahrgaengeVerwalten_clicked()
{
    //so öffnet man ein neues Window "jahrgaengeverwalten"
    frmJahrgaengeVerwalten jahrgaengeverwalten;
    jahrgaengeverwalten.setModal(true);
    jahrgaengeverwalten.exec();
    //MPS
}

void frmHauptmenueAdmin::on_pbBenutzerVerwaltung_clicked()
{
    //so öffnet man ein neues Window "jahrgaengeverwalten"
    frmBenutzerVerwaltung benutzerverwaltung;
    benutzerverwaltung.setModal(true);
    benutzerverwaltung.exec();
    //MPS
}

void frmHauptmenueAdmin::on_btnMeldungenVerwalten_clicked()
{
    FrmMeldungAnzeigen meldungsVerwaltung;
    meldungsVerwaltung.setModal(true);
    meldungsVerwaltung.exec();
}
