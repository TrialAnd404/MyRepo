#include "frmhauptmenueuser.h"
#include "ui_frmhauptmenueuser.h"
#include <frmzitateintragen.h>
#include <frmbenutzereinstellungen.h>
#include <frmmain.h>
#include <frmanmelden.h>
#include <frmzitatanzeigen.h>


/*
 * Konstruktor
 * Autor: Pascal
 */
frmHauptmenueUser::frmHauptmenueUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmHauptmenueUser)
{
    ui->setupUi(this);
    //TODO: User Objekt aus Parametern erstellen?
}

/*
 * Destruktor
 * Autor: Pascal
 */
frmHauptmenueUser::~frmHauptmenueUser()
{
    delete ui;
}

/*
 * Beenden der Anwendung
 * Autor: Pascal
 */
void frmHauptmenueUser::on_pbBeenden_clicked()
{
    qApp->quit();
}

/*
 * Öffnen eines Fensters zum Eintragen eines Zitats
 * Autor: Pascal
 */
void frmHauptmenueUser::on_pbZitatEintragen_clicked()
{
    frmZitatEintragen zitateintragen;
    zitateintragen.setModal(true);
    zitateintragen.exec();
}

/*
 * Abmelden und Öffnen eines neuen Anmeldefensters
 * Autor: Pascal
 */
void frmHauptmenueUser::on_pbAbmelden_clicked()
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
void frmHauptmenueUser::on_pbZitatAnzeigen_clicked()
{
    frmZitatAnzeigen zitatanzeigen;
    zitatanzeigen.setModal(true);
    zitatanzeigen.exec();
}

/*
 * Öffnen eines Fensters zum Ändern der eigenen Benutzerdaten
 * Autor: Pascal
 */
void frmHauptmenueUser::on_pbBenutzerEinstellungen_clicked()
{
    frmBenutzerEinstellungen benutzereinstellungen;
    benutzereinstellungen.setModal(true);
    benutzereinstellungen.exec();
}
