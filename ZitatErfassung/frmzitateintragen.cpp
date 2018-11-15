#include "frmzitateintragen.h"
#include "ui_frmzitateintragen.h"

/*
 * Konstruktor
 * Autor: Lars
 */
frmZitatEintragen::frmZitatEintragen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmZitatEintragen)
{
    ui->setupUi(this);
    zk = new ZitatKontrolle();
    ui->deDatum->setDate(QDate::currentDate());
    this->fuelleOE();
}

/*
 * Destruktor
 * Autor: Lars
 */
frmZitatEintragen::~frmZitatEintragen()
{
    delete zk;
    delete ui;
}

/*
 * Anwendung beenden
 * Autor: Lars
 */
void frmZitatEintragen::on_pbBeenden_clicked()
{
    qApp->quit();
}

/*
 * Schliessen des Fensters
 * Autor: Lars
 */
void frmZitatEintragen::on_pbMenue_clicked()
{
    this->close();
}

/*
 * Speichern des Zitats
 * Autor: Lars
 */
void frmZitatEintragen::on_pbSpeichern_clicked()
{
    bool klappt = zk->legeZitatAn(ui->edtZitat->text(),ui->edtRedner->text(),ui->deDatum->date() );
}

/*
 * Fuellen der OrgEinheit mit der des aktuellen Nutzers
 * Autor: Lars
 */
void frmZitatEintragen::fuelleOE()
{
    OrgEinheit* org = SessionInfo::getSessionInfo()->getAktNutzer()->getJahrgang();
    ui->edtOrgEinheit->setText(org->getBezeichnung() + ", " + org->getJahr());
    ui->edtOrgEinheit->setEnabled(false);
}
