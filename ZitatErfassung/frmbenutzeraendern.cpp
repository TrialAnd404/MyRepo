#include "frmbenutzeraendern.h"
#include "ui_frmbenutzeraendern.h"

/*
 * Konstruktor
 * Autor: Lars
 */
frmBenutzerAendern::frmBenutzerAendern(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmBenutzerAendern)
{
    ui->setupUi(this);
    this->benKontr = new BenutzerKontrolle();
    this->fuelleOE();
    neu = true;
}

/*
 * Destruktor
 * Autor: Lars
 */
frmBenutzerAendern::~frmBenutzerAendern()
{
    delete ui;
    delete benKontr;
}

/*
 * Setzen des anzuzeigenden Benutzers
 * Autor: Lars
 */
void frmBenutzerAendern::setBenutzer(Benutzer* _ben)
{
    this->neu = false;
    this->ben = _ben;
    this->fuelleUI();
}

/*
 * Zurück bzw. Schliessen des Dialogs
 * Autor: Lars
 */
void frmBenutzerAendern::on_btnZurueck_clicked()
{
    this->close();
}

/*
 * Speichern des neuen bzw. geänderten Benutzers
 * Autor: Lars
 */
void frmBenutzerAendern::on_btnSpeichern_clicked()
{
    bool erfolg = false;
    if(neu)
    {
        if (this->benKontr->addBenutzer(ui->edtVorname->text(),ui->edtNachname->text(),this->oeListe[ui->cbOrgEinheit->currentIndex()],ui->edtBenutzername->text(),ui->edtPasswort->text(), ui->cbAdmin->isChecked()))
        {
            erfolg = true;
        }
    }
    else
    {
        this->ben->setVorname(ui->edtVorname->text());
        this->ben->setNachname(ui->edtNachname->text());
        this->ben->setNutzername(ui->edtBenutzername->text());
        this->ben->setPasswort(ui->edtPasswort->text());
        this->ben->setJahrgang(this->oeListe[ui->cbOrgEinheit->currentIndex()]);
        if ( ui->cbAdmin->isChecked())
        {
            this->ben->setAdmin(true);
        }
        if (ui->cbDeaktiviert->isChecked())
        {
            this->ben->setDeaktiviert(true);
        }
        if (this->benKontr->updateBenutzer(ben))
        {
            erfolg = true;
        }
    }
    if(erfolg)
    {
        this->close();
    }
}

/*
 * Fuellen der Oberflaeche mit den Daten des gewählten Benutzers
 * Autor: Lars
 */
void frmBenutzerAendern::fuelleUI()
{
    ui->edtVorname->setText(this->ben->getVorname());
    ui->edtNachname->setText(this->ben->getNachname());
    ui->edtBenutzername->setText(this->ben->getNutzername());
    ui->edtPasswort->setText(this->ben->getPasswort());
    ui->edtPasswort->setEchoMode(QLineEdit::Password);
    if ( this->ben->getAdmin())
    {
        ui->cbAdmin->setChecked(true);
    }
    int index = 0;
    for (int i = 0; i < this->oeListe.length(); i++)
    {
        if (this->oeListe[i]->getID() == this->ben->getJahrgang()->getID())
        {
            index = i;
            break;
        }
    }
    ui->cbOrgEinheit->setCurrentIndex(index);
}

/*
 * Fuellen der ComboBox mit allen OrgEinheiten
 * Autor: Lars
 */
void frmBenutzerAendern::fuelleOE()
{
    this->oeListe = benKontr->holeOE();
    for (int i = 0; i < oeListe.length(); i++)
    {
        ui->cbOrgEinheit->addItem(oeListe[i]->getBezeichnung() + ", " + oeListe[i]->getJahr());
    }
}
