#include "frmzitatverwalten.h"
#include "ui_frmzitatverwalten.h"

/*
 * Konstruktor
 * Autor: Lars
 */
frmZitatVerwalten::frmZitatVerwalten(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmZitatVerwalten)
{
    ui->setupUi(this);
    this->zitKontr = new ZitatKontrolle();
    this->fuelleOe();
}

/*
 * Destruktor
 * Autor: Lars
 */
frmZitatVerwalten::~frmZitatVerwalten()
{
    delete ui;
    delete zitKontr;
}

/*
 * Schliessen des Fensters
 * Autor: Lars
 */
void frmZitatVerwalten::on_pbMenue_clicked()
{
    this->close();
}

/*
 * Oeffnen eines Dialogs zum Aendern eines gewaehlten Zitats
 * Autor: Lars
 */
void frmZitatVerwalten::on_pbAendern_clicked()
{
    frmZitatAendern aendernDialog;
    aendernDialog.setZitat(this->suchListe[ui->lwAnzeigen->currentRow()]);
    aendernDialog.setModal(true);
    aendernDialog.exec();
}

/*
 * Loeschen eines gewaehlten Zitats
 * Autor: Lars
 */
void frmZitatVerwalten::on_pbLoeschen_clicked()
{
    //Löschen aus DB
    int aktRow = ui->lwAnzeigen->currentRow();
    Zitat* zit = this->suchListe[aktRow];
    if (this->zitKontr->loescheZitat(zit))
    {
        this->suchListe.remove(aktRow);
        this->baueUI();
    }
}

/*
 * Suchen nach einem Zitat der gewaehlten OrgEinheit
 * Autor: Lars
 */
void frmZitatVerwalten::on_pbSuchen_clicked()
{
    //Suchwort einbauen
    this->zitListe = this->zitKontr->holeZitate(this->oeListe[ui->cbOrgEinheit->currentIndex()]);
    QString suchwort = ui->edtSuchwort->text();
    if (suchwort == "")
    {
        this->suchListe = this->zitListe;
    }
    else
    {
        this->suchListe.clear();
        for (int i = 0; i < zitListe.length(); i++)
        {
            if (zitListe[i]->getInhalt().contains(suchwort, Qt::CaseInsensitive))
            {
                this->suchListe.append(zitListe[i]);
                continue;
            }
            if (zitListe[i]->getRedner().contains(suchwort, Qt::CaseInsensitive))
            {
                this->suchListe.append(zitListe[i]);
                continue;
            }
            if (zitListe[i]->getOrgEinheit()->getBezeichnung().contains(suchwort, Qt::CaseInsensitive))
            {
                this->suchListe.append(zitListe[i]);
                continue;
            }
        }
    }
    this->baueUI();
}

/*
 * Beenden der Anwendung
 * Autor: Lars
 */
void frmZitatVerwalten::on_pbBeenden_clicked()
{
    qApp->quit();
}

/*
 * Anzeigen der Zitate
 * Autor: Lars
 */
void frmZitatVerwalten::baueUI()
{
    ui->lwAnzeigen->clear();
    for (int i = 0; i < this->suchListe.length(); i++)
    {
        Zitat* zit = this->suchListe[i];
        ui->lwAnzeigen->addItem(zit->getDatum().toString() + ", " + zit->getOrgEinheit()->getBezeichnung() + ", " + zit->getRedner()
                                + ":\r\n" + zit->getInhalt());
    }
}

/*
 * Fuellen der ComboBox mit allen OrgEinheiten
 * Autor: Lars
 */
void frmZitatVerwalten::fuelleOe()
{
    this->oeListe = zitKontr->holeOE();
    for (int i = 0; i < oeListe.length(); i++)
    {
        ui->cbOrgEinheit->addItem(oeListe[i]->getBezeichnung() + ", " + oeListe[i]->getJahr());
    }
}

void frmZitatVerwalten::on_pbDownload_clicked()
{
    this->zitKontr->zitateDownload();
}
