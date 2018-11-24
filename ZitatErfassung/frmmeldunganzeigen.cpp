#include "frmmeldunganzeigen.h"
#include "ui_frmmeldunganzeigen.h"

FrmMeldungAnzeigen::FrmMeldungAnzeigen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmMeldungAnzeigen)
{
    ui->setupUi(this);
    this->meldKontr = new MeldungKontrolle();
    this->baueUI();
}

FrmMeldungAnzeigen::~FrmMeldungAnzeigen()
{
    delete ui;
    delete this->meldKontr;
}

void FrmMeldungAnzeigen::on_btnZurueck_clicked()
{
    this->close();
}

void FrmMeldungAnzeigen::on_btnBeenden_clicked()
{
    qApp->quit();
}

void FrmMeldungAnzeigen::on_btnBearbeiten_clicked()
{
    frmZitatAendern aendereZitat;
    aendereZitat.setModal(true);
    aendereZitat.setZitat(this->meldListe[ui->lwAusgabe->currentRow()]->getZitat());
    aendereZitat.exec();
}

void FrmMeldungAnzeigen::baueUI()
{
    this->meldListe = meldKontr->holeMeldung();
    for (int i = 0; i < this->meldListe.length(); i++)
    {
        ui->lwAusgabe->addItem("Zitat ID: " + QString::number(this->meldListe[i]->getZitat()->getID()) + ", Melder: " + this->meldListe[i]->getSender()->getNutzername() + ", Grund: " + this->meldListe[i]->getGrund());
    }
}
