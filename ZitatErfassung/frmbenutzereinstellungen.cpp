#include "frmbenutzereinstellungen.h"
#include "ui_frmbenutzereinstellungen.h"

/*
 * Kontruktor
 * Autor: Pascal
 */
frmBenutzerEinstellungen::frmBenutzerEinstellungen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmBenutzerEinstellungen)
{
    ui->setupUi(this);
    this->benKontr = new BenutzerKontrolle();
    this->baueUI();
}

/*
 * Destruktor
 * Autor: Pascal
 */
frmBenutzerEinstellungen::~frmBenutzerEinstellungen()
{
    delete ui;
    delete benKontr;
}

/*
 * Beenden der Anwendung
 * Autor: Pascal
 */
void frmBenutzerEinstellungen::on_pbBeenden_clicked()
{
    qApp->quit();
}

/*
 * Schließen des Fensters
 * Autor: Pascal
 */
void frmBenutzerEinstellungen::on_pbMenue_clicked()
{
    this->close();
}

/*
 * Speichern der neuen Benutzerdaten
 * Autor: Tim
 */
void frmBenutzerEinstellungen::on_pbSpeichern_clicked()
{
    Benutzer* aktNutzer = SessionInfo::getSessionInfo()->getAktNutzer();
    CheckValidEntry* entryCheck = new CheckValidEntry();


    //####################################################
    //#     ?TODO?
    //#     Abfrage der einzelnen Eingaben. Kann man vielleicht schöner machen?

    if(entryCheck->CheckValidName(ui->edtBenutzername->text()))
    {
        ui->lblWarnUsername->clear();
    //TODO: Speichern in DB
        aktNutzer->setVorname(ui->edtBenutzertyp->text());
    }
    else
    {
        //Anzeige von Fehlermedlung neben Eingabefeld in einem Label
        ui->edtBenutzername->text().clear();
        ui->lblWarnName->setText("Ungültiger Name!");
    }

    if(entryCheck->CheckValidPasswrd(ui->edtPasswort->text()))
    {
        ui->lblWarnPasswrd->clear();
    //TODO: Speichern in DB
        aktNutzer->setPasswort(ui->edtPasswort->text());
    }
    else
    {
        ui->edtPasswort->clear();
        ui->lblWarnPasswrd->setText("Passwort muss min. 8 Zeichen haben und darf keine Leerzeichen enthalten!");
    }

    if(entryCheck->CheckValidName(ui->edtNachname->text()))
    {
        ui->lblWarnName->clear();
    //TODO: Speichern in DB
        aktNutzer->setNachname(ui->edtNachname->text());
    }
    else
    {
        ui->edtNachname->text().clear();
        ui->lblWarnName->setText("Ungültiger Name!");
    }

    if(entryCheck->CheckValidName(ui->edtVorname->text()))
    {
        ui->lblWarnSurname->clear();
    //TODO: Speichern in DB
        aktNutzer->setVorname(ui->edtVorname->text());
    }
    else
    {
        ui->edtVorname->text().clear();
        ui->edtVorname->setText("Ungueltiger Name!");
    }

    delete entryCheck;
}

/*
 * Methode zum Initialisieren der Werte auf der Oberfläche
 * Autor: Pascal
 */
void frmBenutzerEinstellungen::baueUI()
{
    Benutzer* aktNutzer = SessionInfo::getSessionInfo()->getAktNutzer();
    ui->edtVorname->setText(aktNutzer->getVorname());
    ui->edtNachname->setText(aktNutzer->getNachname());
    ui->edtJahrgang->setText(aktNutzer->getJahrgang()->getBezeichnung() + ", " + aktNutzer->getJahrgang()->getJahr());
    ui->edtJahrgang->setEnabled(false);
    //ui->edtBenutzertyp->setText();
    ui->edtBenutzertyp->setEnabled(false);
    ui->edtBenutzername->setText(aktNutzer->getNutzername());
    ui->edtPasswort->setText(aktNutzer->getPasswort());
    ui->edtPasswort->setEchoMode(QLineEdit::Password);
}

