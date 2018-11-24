#include "frmbenutzerimport.h"
#include "ui_frmbenutzerimport.h"

FrmBenutzerImport::FrmBenutzerImport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmBenutzerImport)
{
    ui->setupUi(this);
    this->benKontr = new BenutzerKontrolle();
}

FrmBenutzerImport::~FrmBenutzerImport()
{
    delete ui;
    delete benKontr;
}

void FrmBenutzerImport::on_btnZurueck_clicked()
{
    this->close();
}

void FrmBenutzerImport::on_btnImport_clicked()
// Luca,Keller,lucak,test,10FIAE,2018;Yannik,Limbach,yannikl,test,10FIAE,2018
{
    QVector<QString> fehlerListe;
    QVector<OrgEinheit*> orgListe = this->benKontr->holeOE();
    QString eingabe = ui->edtEingabe->toPlainText();
    QStringList einzelneBenutzer = eingabe.split(";");
    for (int i = 0; i < einzelneBenutzer.length(); i++)
    {
        QStringList benDaten = einzelneBenutzer[i].split(",");
        OrgEinheit* org;
        for (int j = 0; j < orgListe.length(); j++)
        {
            if (orgListe[j]->getBezeichnung() == benDaten[4] && orgListe[j]->getJahr() == benDaten[5])
            {
                 org = orgListe[j];
            }
        }
        if (!this->benKontr->addBenutzer(benDaten[0],benDaten[1],org,benDaten[2],benDaten[3]))
        {
            fehlerListe.append( benDaten[0] + ", " +  benDaten[1]);
        }
    }
    if (fehlerListe.isEmpty())
    {
        ui->lblFehler->setText("Erfolg!");
    }
    else
    {
        QString ausgabe = "Fehler bei:";
        for (int i = 0; i < fehlerListe.length(); i++)
        {
            ausgabe.append( fehlerListe[i] + "; ");
        }
        ui->lblFehler->setText(ausgabe);
    }

}
