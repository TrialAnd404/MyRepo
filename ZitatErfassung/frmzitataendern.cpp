#include "frmzitataendern.h"
#include "ui_frmzitataendern.h"

/*
 * Kontruktor
 * Autor: Lars
 */
frmZitatAendern::frmZitatAendern(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmZitatAendern)
{
    ui->setupUi(this);
    this->zitKontr = new ZitatKontrolle();
    ui->edtEingetragenVon->setEnabled(false);
    ui->edtOrgEinheit->setEnabled(false);
}

/*
 * Destruktor
 * Autor: Lars
 */
frmZitatAendern::~frmZitatAendern()
{
    delete ui;
    delete this->zit;
    delete this->zitKontr;
}

/*
 * Setzen des zu aendernden Zitats
 * Autor: Lars
 */
void frmZitatAendern::setZitat(Zitat *_zit)
{
    this->zit = _zit;
    this->baueUI();
}

/*
 * Aendern des Zitats
 * Autor: Lars
 */
void frmZitatAendern::on_btnAendern_clicked()
{
    zit->setDatum(ui->deDatum->date());
    zit->setRedner(ui->edtRedner->text());
    zit->setInhalt(ui->edtZitat->text());
    if (this->zitKontr->aendereZitat(this->zit))
    {
        this->close();
    }
}

/*
 * Schliessen des Dialogs
 * Autor: Lars
 */
void frmZitatAendern::on_btnZurueck_clicked()
{
    this->close();
}

/*
 * Setzen der Attribute des zu aendernden Zitats
 * Autor: Lars
 */
void frmZitatAendern::baueUI()
{
    ui->edtEingetragenVon->setText(this->zit->getEingetragenVon()->getNutzername());
    ui->edtOrgEinheit->setText(zit->getOrgEinheit()->getBezeichnung() + ", " + zit->getOrgEinheit()->getJahr());
    ui->deDatum->setDate(zit->getDatum());
    ui->edtRedner->setText(zit->getRedner());
    ui->edtZitat->setText(zit->getInhalt());
}




void frmZitatAendern::on_pbMenue_clicked()
{
    this->close();
}
