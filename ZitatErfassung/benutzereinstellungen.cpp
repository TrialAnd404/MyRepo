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
    qApp->quit();
}

void BenutzerEinstellungen::on_pbMenue_clicked()
{
    this->close();
}

void BenutzerEinstellungen::on_pbSpeichern_clicked()
{
    CheckValidEntry.CheckValidName(ui->ldtBenutzername);
    CheckValidEntry.CheckValidPasswrd(ui->ldtPasswort);
    CheckValidEntry.CheckValidName(ui->ldtNachname);
    CheckValidEntry.CheckValidName(ui->ldtVorname);
}
