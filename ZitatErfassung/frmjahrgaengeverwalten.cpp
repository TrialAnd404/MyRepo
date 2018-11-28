#include "frmjahrgaengeverwalten.h"
#include "ui_frmjahrgaengeverwalten.h"

/*
 * Konstruktor
 * Autor: Lars
 */
frmJahrgaengeVerwalten::frmJahrgaengeVerwalten(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmJahrgaengeVerwalten)
{
    ui->setupUi(this);
    this->oeKontr = new OrgEinheitKontrolle();
    this->oeListe = oeKontr->holeOeEinheit();
    this->suchListe = this->oeListe;
    this->baueUI();
}

/*
 * Destruktor
 * Autor: Lars
 */
frmJahrgaengeVerwalten::~frmJahrgaengeVerwalten()
{
    delete ui;
    delete this->oeKontr;
}

/*
 * Beenden der Anwendung
 * Autor: Lars
 */
void frmJahrgaengeVerwalten::on_pbBeenden_clicked()
{
    qApp->quit();
}

/*
 * Schliessen des Fensters
 * Autor: Lars
 */
void frmJahrgaengeVerwalten::on_pbMenue_clicked()
{
    this->close();
}

/*
 * Hinzufuegen einer OrgEinheit
 * Autor: Lars
 */
void frmJahrgaengeVerwalten::on_pbJahrgangHinzu_clicked()
{
    if (this->oeKontr->addOE(ui->edtBezeichnung->text(), ui->edtJahr->text()))
    {
        this->baueUI();
    }

}

/*
 * Anzeigen aller OrgEinheiten
 * Autor: Lars
 */
void frmJahrgaengeVerwalten::baueUI()
{
    ui->lwAusgabe->clear();
    for (int i = 0; i < this->suchListe.size(); i++)
    {
        OrgEinheit* oe = this->suchListe[i];
        ui->lwAusgabe->addItem(oe->getBezeichnung() + ", " + oe->getJahr());
    }
}

/*
 * Holen und Filtern der OrgEinheiten, Alle bei leerem Suchwort
 * Autor: Lars
 */
void frmJahrgaengeVerwalten::on_pbSuchen_clicked()
{
    QString suchwort = ui->edtSuche->text();
    if (suchwort == "")
    {
        this->suchListe = this->oeListe;
    }
    else
    {
        this->suchListe.clear();
        for (int i = 0; i < this->oeListe.length(); i++)
        {
            if (oeListe[i]->getBezeichnung().contains(suchwort))
            {
                this->suchListe.append(oeListe[i]);
                continue;
            }
            if (oeListe[i]->getJahr().contains(suchwort))
            {
                this->suchListe.append(oeListe[i]);
                continue;
            }
        }
    }
    this->baueUI();
}

/*
 * Loeschen einer OrgEinheit
 * Autor: Lars
 */
void frmJahrgaengeVerwalten::on_pbLoeschen_clicked()
{
    int index = ui->lwAusgabe->currentRow();
    this->oeKontr->loescheOE(this->suchListe[index]);
}

/*
 * Oeffnen eines Dialogs zum Aendern einer OrgEinheit
 * Autor: Lars
 */
void frmJahrgaengeVerwalten::on_pbAendern_clicked()
{
    int index = ui->lwAusgabe->currentRow();
    frmJahrgangAendern frmOeAendern;
    frmOeAendern.setOE(this->suchListe[index]);
    frmOeAendern.setModal(true);
    frmOeAendern.exec();
}
