#include "frmbenutzerverwaltung.h"
#include "ui_frmbenutzerverwaltung.h"

/*
 * Konstruktor
 * Autor: Lars
 */
frmBenutzerVerwaltung::frmBenutzerVerwaltung(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmBenutzerVerwaltung)
{
    ui->setupUi(this);
    this->benKontr = new BenutzerKontrolle();
    this->baueOE();
}

/*
 * Destruktor
 * Autor: Lars
 */
frmBenutzerVerwaltung::~frmBenutzerVerwaltung()
{
    delete ui;
    delete benKontr;
}

/*
 * Schliessen des Fensters
 * Autor: Lars
 */
void frmBenutzerVerwaltung::on_pbMenue_clicked()
{
    this->close();
}

/*
 * Beenden def Anwendung
 * Autor: Lars
 */
void frmBenutzerVerwaltung::on_pbBeenden_clicked()
{
    qApp->quit();
}

/*
 * Oeffnen eines Dialogs zum Anlegen eines neuen Benutzers
 * Autor: Lars
 */
void frmBenutzerVerwaltung::on_pbBenutzerAnlegen_clicked()
{
    frmBenutzerAendern frmNeuerNutzer;
    frmNeuerNutzer.setModal(true);
    frmNeuerNutzer.exec();
}

/*
 * Oeffnen eines Dialogs zum Aendern eines gewaehlten Benutzers
 * Autor: Lars
 */
void frmBenutzerVerwaltung::on_pbBearbeiten_clicked()
{
    frmBenutzerAendern frmNutzerAendern;
    frmNutzerAendern.setBenutzer(this->benListe[ui->lwAnzeigen->currentRow()]);
    frmNutzerAendern.setModal(true);
    frmNutzerAendern.exec();
}

/*
 * Loeschen eines gewaehlten Benutzers
 * Autor: Lars
 */
void frmBenutzerVerwaltung::on_pbLoeschen_clicked()
{
    if (this->benKontr->loescheBenutzer(this->benListe[ui->lwAnzeigen->currentRow()]))
    {
        this->baueUI();
    }
}

/*
 * Suchen und Anzeigen der Benutzer aus der gewaehlten OrgEinheit bzw. Admins, alle Benutzer bei leerem Suchwort
 * Autor: Lars
 */
void frmBenutzerVerwaltung::on_pbSuchen_clicked()
{
    QString suchwort = ui->edtSuchwort->text();
    if (ui->cbAdmin->isChecked())
    {
        this->benListe = this->benKontr->holeAdmin();
    }
    else
    {
        this->benListe = this->benKontr->holeBenutzer(this->oeListe[ui->cmbJahrgang->currentIndex()]);
    }
    if (suchwort == "")
    {
        this->suchListe = this->benListe;
    }
    else
    {
        this->suchListe.clear();
        for (int i = 0; i < this->benListe.length(); i++)
        {
            Benutzer* ben = this->benListe[i];
            if (ben->getVorname().contains(suchwort, Qt::CaseInsensitive))
            {
                this->suchListe.append(ben);
                continue;
            }
            else if (ben->getNachname().contains(suchwort, Qt::CaseInsensitive))
            {
                this->suchListe.append(ben);
                continue;
            }
            else if (ben->getNutzername().contains(suchwort, Qt::CaseInsensitive))
            {
                this->suchListe.append(ben);
                continue;
            }
        }
    }

    this->baueUI();
}

/*
 * Fuellen der ComboBox mit allen OrgEinheiten
 * Autor: Lars
 */
void frmBenutzerVerwaltung::baueOE()
{
    this->oeListe = benKontr->holeOE();
    for (int i = 0; i < oeListe.length(); i++)
    {
        ui->cmbJahrgang->addItem(oeListe[i]->getBezeichnung() + ", " + oeListe[i]->getJahr());
    }
}

/*
 * Anzeigen der Benutzer
 * Autor: Lars
 */
void frmBenutzerVerwaltung::baueUI()
{
    ui->lwAnzeigen->clear();
    for (int i = 0; i < this->suchListe.length(); i++)
    {
        Benutzer* nutzer = this->suchListe[i];
        ui->lwAnzeigen->addItem(nutzer->getNutzername() + ": " + nutzer->getVorname() + " " + nutzer->getNachname());
    }
}

/*
 * Öffnen eines Fensters zum Importieren von Benutzern
 * Autor: Lars
 */
void frmBenutzerVerwaltung::on_btnImport_clicked()
{
    FrmBenutzerImport nutzerImport;
    nutzerImport.setModal(true);
    nutzerImport.exec();
}
