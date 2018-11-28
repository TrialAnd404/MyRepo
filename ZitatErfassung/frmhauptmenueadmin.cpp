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

/*
 * Konstruktor
 * Autor: Pascal
 */
frmHauptmenueAdmin::frmHauptmenueAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmHauptmenueAdmin)
{
    ui->setupUi(this);
}

/*
 * Destruktor
 * Autor: Pascal
 */
frmHauptmenueAdmin::~frmHauptmenueAdmin()
{
    delete ui;
}

/*
 * Öffnen eines Fensters für Benutzereinstellungen
 * Autor: Pascal
 */
void frmHauptmenueAdmin::on_pbBenutzerEinstellungen_clicked()
{
    frmBenutzerEinstellungen benutzereinstellungen;
    benutzereinstellungen.setModal(true);
    benutzereinstellungen.exec();
}

/*
 * Beenden der Anwendung
 * Autor: Pascal
 */
void frmHauptmenueAdmin::on_pbBeenden_clicked()
{
    qApp->quit();
}

/*
 * Öffnen eines Fensters zum Eintragen eines Zitatess
 * Autor: Pascal
 */
void frmHauptmenueAdmin::on_pbZitatEintragen_clicked()
{
    frmZitatEintragen zitateintragen;
    zitateintragen.setModal(true);
    zitateintragen.exec();
}

/*
 * Abmelden und öffnen eines Neuen Anmeldefensters
 * Autor: Pascal
 */
void frmHauptmenueAdmin::on_pbAbmelden_clicked()
{
    this->close();
    frmAnmelden frmanmelden;
    frmanmelden.setModal(true);
    frmanmelden.exec();
}

/*
 * Öffnen eines Fensters zum Anzeigen der Zitate
 * Autor: Pascal
 */
void frmHauptmenueAdmin::on_pbZitatAnzeigen_clicked()
{
    frmZitatAnzeigen zitatanzeigen;
    zitatanzeigen.setModal(true);
    zitatanzeigen.exec();
}

/*
 * Öffnen eines Fensters zum Verwalten der Zitate
 * Autor: Pascal
 */
void frmHauptmenueAdmin::on_pbZitatVerwalten_clicked()
{
    frmZitatVerwalten zitatverwalten;
    zitatverwalten.setModal(true);
    zitatverwalten.exec();
}

/*
 * Öffnen eines Fensters zum Verwalten der Jahrgänge/ OrgEinheiten
 * Autor: Pascal
 */
void frmHauptmenueAdmin::on_pbJahrgaengeVerwalten_clicked()
{
    frmJahrgaengeVerwalten jahrgaengeverwalten;
    jahrgaengeverwalten.setModal(true);
    jahrgaengeverwalten.exec();
}

/*
 * Öffnen eines Fensters zum Verwalten der Benutzer
 * Autor: Pascal
 */
void frmHauptmenueAdmin::on_pbBenutzerVerwaltung_clicked()
{
    frmBenutzerVerwaltung benutzerverwaltung;
    benutzerverwaltung.setModal(true);
    benutzerverwaltung.exec();
}

/*
 * Öffnen eines Fenstes zum Verwalten der Meldungen
 * Autor: Pascal
 */
void frmHauptmenueAdmin::on_btnMeldungenVerwalten_clicked()
{
    FrmMeldungAnzeigen meldungsVerwaltung;
    meldungsVerwaltung.setModal(true);
    meldungsVerwaltung.exec();
}
