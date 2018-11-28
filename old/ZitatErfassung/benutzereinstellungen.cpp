#include "benutzereinstellungen.h"
#include "ui_benutzereinstellungen.h"

BenutzerEinstellungen::BenutzerEinstellungen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BenutzerEinstellungen)
{
    ui->setupUi(this);

    //###################################################
    //#
    //#      TODO: Vielleicht schon bei Start des Fensters
    //#      Daten aus DB auslesen und LineEdits damit füttern?
    //#      Dann umgeht man später beim Speichern das Problem
    //#      Wenn ein User seinen Namen gar nicht ändern möchte,
    //#      Aber trotzdem auf eine korekte Eingabe abgefragt wird.
}

BenutzerEinstellungen::~BenutzerEinstellungen()
{
    delete ui;
}

void BenutzerEinstellungen::on_pbBeenden_clicked()
{
    qApp->quit();
}

void BenutzerEinstellungen::on_pbMenue_clicked()
{
    this->close();
}

void BenutzerEinstellungen::on_pbSpeichern_clicked()
{
    CheckValidEntry* entryCheck = new CheckValidEntry;


    //####################################################
    //#     ?TODO?
    //#     Abfrage der einzelnen Eingaben. Kann man vielleicht schöner machen?

    if(entryCheck->CheckValidName(ui->ldtBenutzername->text()))
    {
        ui->lblWarnUsername->clear();
    //TODO: Speichern in DB
    }
    else
    {
        //Anzeige von Fehlermedlung neben Eingabefeld in einem Label
        ui->ldtBenutzername->text().clear();
        ui->lblWarnName->setText("Ungültiger Name!");
    }

    if(entryCheck->CheckValidPasswrd(ui->ldtPasswort->text()))
    {
        ui->lblWarnPasswrd->clear();
    //TODO: Speichern in DB
    }
    else
    {
        ui->ldtPasswort->clear();
        ui->lblWarnPasswrd->setText("Passwort muss min. 8 Zeichen haben und darf keine Leerzeichen enthalten!");
    }

    if(entryCheck->CheckValidName(ui->ldtNachname->text()))
    {
        ui->lblWarnName->clear();
    //TODO: Speichern in DB
    }
    else
    {
        ui->ldtNachname->text().clear();
        ui->lblWarnName->setText("Ungültiger Name!");
    }

    if(entryCheck->CheckValidName(ui->ldtVorname->text()))
    {
        ui->lblWarnSurname->clear();
    //TODO: Speichern in DB
    }
    else
    {
        ui->ldtVorname->text().clear();
        ui->ldtVorname->setText("Ungueltiger Name!");
    }

    delete entryCheck;
}
