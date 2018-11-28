#include "frmjahrgangaendern.h"
#include "ui_frmjahrgangaendern.h"

/*
 * Konstruktor
 * Autor: Lars
 */
frmJahrgangAendern::frmJahrgangAendern(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmJahrgangAendern)
{
    ui->setupUi(this);
    this->oeKontr = new OrgEinheitKontrolle();
}

/*
 * Destruktor
 * Autor: Lars
 */
frmJahrgangAendern::~frmJahrgangAendern()
{
    delete ui;
    delete this->oeKontr;
}

/*
 * Setzen der zu aendernden OrgEinheit
 * Autor: Lars
 */
void frmJahrgangAendern::setOE(OrgEinheit *_oe)
{
    this->oe = _oe;
    this->baueUI();
}

/*
 * Schliessen des Dialogs
 * Autor: Lars
 */
void frmJahrgangAendern::on_btnZurueck_clicked()
{
    this->close();
}

/*
 * Aendern der OrgEinheit
 * Autor: Lars
 */
void frmJahrgangAendern::on_btnAendern_clicked()
{
    bool erfolg = false;
    this->oe->setBezeichnung(ui->edtBezeichnung->text());
    this->oe->setJahr(ui->edtJahr->text());
    this->oeKontr->aendereOE(this->oe);
    if (erfolg)
    {
        this->close();
    }
}

/*
 * Anzeigen der Werte der gewaehlten OrgEinheit
 * Autor: Lars
 */
void frmJahrgangAendern::baueUI()
{
    ui->edtBezeichnung->setText(this->oe->getBezeichnung());
    ui->edtJahr->setText(this->oe->getJahr());
}
