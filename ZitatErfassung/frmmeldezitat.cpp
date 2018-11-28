#include "frmmeldezitat.h"
#include "ui_frmmeldezitat.h"

/*
 * Konstruktor
 * Autor: Lars
 */
frmMeldeZitat::frmMeldeZitat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmMeldeZitat)
{
    ui->setupUi(this);
    this->meldKontr = new MeldungKontrolle();
}

/*
 * Destruktor
 * Autor: Lars
 */
frmMeldeZitat::~frmMeldeZitat()
{
    delete ui;
    delete this->meldKontr;
}

/*
 * Setzen des zu meldenden Zitats
 * Autor: Lars
 */
void frmMeldeZitat::setZitat(Zitat *_zit)
{
    this->zit = _zit;
    this->baueUI();
}

/*
 * Senden der Meldung
 * Autor: Lars
 */
void frmMeldeZitat::on_btnMelden_clicked()
{
    bool erfolg = false;
    if (this->zit)
    {
        erfolg = this->meldKontr->sendeMeldung(this->zit, ui->edtGrund->toPlainText());
    }
    if (erfolg)
    {
        this->close();
    }
}

/*
 * Schliessen des Dialogs
 * Autor: Lars
 */
void frmMeldeZitat::on_btnZurueck_clicked()
{
    this->close();
}

/*
 * Setzen der Attribute des zu meldenden Zitats
 * Autor: Lars
 */
void frmMeldeZitat::baueUI()
{
    if (zit)
    {
        ui->lwAusgabe->addItem(zit->getDatum().toString() + ", " + /* zit->getOrgEinheit()->getBezeichnung()  */+ ", " + zit->getRedner()
                                + ":\r\n" + zit->getInhalt());
    }
    else
    {
        ui->lwAusgabe->addItem("Kein Zitat ausgewählt!");
    }
    ui->edtGrund->setText("Bitte Meldungsgrund abgeben!");

}

