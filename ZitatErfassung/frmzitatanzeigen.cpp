#include "frmzitatanzeigen.h"
#include "ui_frmzitatanzeigen.h"


frmZitatAnzeigen::frmZitatAnzeigen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmZitatAnzeigen)
{
    ui->setupUi(this);
    this->seitenNr = 1;
    ui->lblSeite->setAlignment(Qt::AlignCenter);
    this->zk = new ZitatKontrolle();
    this->zitListe = zitKontr->holeZitate(SessionInfo::getSessionInfo()->getAktNutzer()->getJahrgang());
    this->suchListe = zitListe;
    this->baueUI(this->zitListe);
}

frmZitatAnzeigen::~frmZitatAnzeigen()
{
    delete zitKontr;
    delete ui;
}

void frmZitatAnzeigen::on_pbBeenden_clicked()
{
    qApp->quit();
}

void frmZitatAnzeigen::on_pbMenue_clicked()
{
    this->close();
}

void frmZitatAnzeigen::on_btnNext_clicked()
{
    this->seitenNr += 5;
    if (this->seitenNr > this->suchListe.length())
    {
        this->seitenNr -= 5;
    }
    this->baueUI();

}

void frmZitatAnzeigen::on_btnPrev_clicked()
{
    this->seitenNr -= 5;
    if (this->seitenNr < 1)
    {
        this->seitenNr = 1;
    }
    this->baueUI();
}

void frmZitatAnzeigen::on_pbSuchen_clicked()
{
    this->seitenNr = 1;
    QString suchwort = ui->ldtSuchwort->text();
    for (int i = 0; i < zitListe.length(); i++)
    {
        if (zitListe[i]->getInhalt().contains(suchwort))
        {
            this->suchListe.append(zitListe[i]);
            break;
        }
        if (zitListe[i]->getRedner().contains(suchwort))
        {
            this->suchListe.append(zitListe[i]);
            break;
        }
        if (zitListe[i]->getKurs_Jahrgang()->getBezeichnung().contains(suchwort))
        {
            this->suchListe.append(zitListe[i]);
            break;
        }
    }
    this->baueUI();
}

void frmZitatAnzeigen::baueUI()
{
    ui->lblSeite->setText("Seite " + this->seitenNr);
    int start = this->seitenNr*5 - 5;
    int ende  = this->seitenNr*5;
    if (ende > this->suchListe.length())
    {
        ende = this->suchListe.length();
    }
    for (int i = start; i < ende; i++)
    {
        Zitat* zit = this->suchListe[i];
        ui->lwAusgabe->addItem(zit->getDatum().toString() + ", " + zit->getKurs_Jahrgang()->getBezeichnung() + ", " + zit->getRedner()
                                + ":\r\n" + zit->getInhalt());
    }
    /*
     *  11.09.2018, 11FIae, Lars:
     *  trololo
     */
}

