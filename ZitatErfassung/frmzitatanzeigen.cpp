#include "frmzitatanzeigen.h"
#include "ui_frmzitatanzeigen.h"

/*
 * Konstruktor
 * Autor: Lars
 */
frmZitatAnzeigen::frmZitatAnzeigen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmZitatAnzeigen)
{
    ui->setupUi(this);
    this->seitenNr = 1;
    ui->lblSeite->setAlignment(Qt::AlignCenter);
    this->zitKontr = new ZitatKontrolle();
    this->zitListe = zitKontr->holeZitate(SessionInfo::getSessionInfo()->getAktNutzer()->getJahrgang());
    this->suchListe = zitListe;
    this->baueUI();
}

/*
 * Destruktor
 * Autor: Lars
 */
frmZitatAnzeigen::~frmZitatAnzeigen()
{
    delete zitKontr;
    delete ui;
}

/*
 * Beenden der Anwendung
 * Autor: Lars
 */
void frmZitatAnzeigen::on_pbBeenden_clicked()
{
    qApp->quit();
}

/*
 * Schliessen des Fensters
 * Autor: Lars
 */
void frmZitatAnzeigen::on_pbMenue_clicked()
{
    this->close();
}

/*
 * Naechste Seite anzeigen
 * Autor: Lars
 */
void frmZitatAnzeigen::on_btnNext_clicked()
{
    if (this->seitenNr*5 < this->suchListe.length())
    {
        this->seitenNr++;
    }
    this->baueUI();

}

/*
 * Vorherige Seite anzeigen
 * Autor: Lars
 */
void frmZitatAnzeigen::on_btnPrev_clicked()
{
    if (this->seitenNr > 1)
    {
        this->seitenNr--;
    }
    this->baueUI();
}

/*
 * Suchen der Zitate
 * Autor: Lars
 */
void frmZitatAnzeigen::on_pbSuchen_clicked()
{
    this->seitenNr = 1;
    QString suchwort = ui->ldtSuchwort->text();
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
 * Bauen der Anzeige, abhängig von der Seitenzahl
 * Autor: Lars
 */
void frmZitatAnzeigen::baueUI()
{
    ui->lwAusgabe->clear();
    ui->lblSeite->setText("Seite: " + QString::number(this->seitenNr));
    int start = this->seitenNr*5 - 5;
    int ende  = this->seitenNr*5;
    if (ende > this->suchListe.length())
    {
        ende = this->suchListe.length();
    }

    for (int i = start; i < ende; i++)
    {
        Zitat* zit = this->suchListe[i];
        ui->lwAusgabe->addItem(zit->getDatum().toString() + ", " + zit->getOrgEinheit()->getBezeichnung() + ", " + zit->getRedner()
                                + ":\r\n" + zit->getInhalt());
    }
}

/*
 * Oeffnen eines Dialogs zum Melden des gewählten Zitats
 * Autor: Lars
 */
void frmZitatAnzeigen::on_btnMelden_clicked()
{
    int index = ui->lwAusgabe->currentRow();
    if (index < 0)
    {
        QMessageBox msgBox;
        msgBox.setText("Kein Zitat ausgewählt!");
        msgBox.exec();
        return;
    }
    frmMeldeZitat meldenDialog;
    meldenDialog.setZitat(this->suchListe[index]);
    meldenDialog.setModal(true);
    meldenDialog.exec();
}
