#include "frmmeldunganzeigen.h"
#include "ui_frmmeldunganzeigen.h"

/*
 * Konstruktor
 * Autor: Lars
 */
FrmMeldungAnzeigen::FrmMeldungAnzeigen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmMeldungAnzeigen)
{
    ui->setupUi(this);
    this->meldKontr = new MeldungKontrolle();
    this->baueUI();
}

/*
 * Destruktor
 * Autor: Lars
 */
FrmMeldungAnzeigen::~FrmMeldungAnzeigen()
{
    delete ui;
    delete this->meldKontr;
}

/*
 * Schliessen des Fensters
 * Autor: Lars
 */
void FrmMeldungAnzeigen::on_btnZurueck_clicked()
{
    this->close();
}

/*
 * Beenden der Anwendung
 * Autor: Lars
 */
void FrmMeldungAnzeigen::on_btnBeenden_clicked()
{
    qApp->quit();
}

/*
 * Öffnen eines Fensters zum Bearbeiten einer gwählten Meldung
 * Autor: Lars
 */
void FrmMeldungAnzeigen::on_btnBearbeiten_clicked()
{
    frmZitatAendern aendereZitat;
    aendereZitat.setModal(true);
    aendereZitat.setZitat(this->meldListe[ui->lwAusgabe->currentRow()]->getZitat());
    aendereZitat.exec();
}

/*
 * Bauen der Oberfläche
 * Autor: Lars
 */
void FrmMeldungAnzeigen::baueUI()
{
    this->meldListe = meldKontr->holeMeldung();
    for (int i = 0; i < this->meldListe.length(); i++)
    {
        ui->lwAusgabe->addItem("Zitat ID: " + QString::number(this->meldListe[i]->getZitat()->getID()) + ", Melder: " + this->meldListe[i]->getSender()->getNutzername() + ", Grund: " + this->meldListe[i]->getGrund());
    }
}

void FrmMeldungAnzeigen::on_btnLoeschen_clicked()
{
    if (this->meldKontr->loescheMeldung(this->meldListe[ui->lwAusgabe->currentRow()]))
    {
        this->baueUI();
    }
}
