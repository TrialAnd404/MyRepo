#include "frmhauptmenueuser.h"
#include "ui_frmhauptmenueuser.h"
#include <frmzitateintragen.h>
#include <frmbenutzereinstellungen.h>
#include <frmmain.h>
#include <frmanmelden.h>
#include <frmzitatanzeigen.h>



frmHauptmenueUser::frmHauptmenueUser(Benutzer* currentUser, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmHauptmenueUser)
{
    ui->setupUi(this);
    //TODO: User Objekt aus Parametern erstellen?
}

frmHauptmenueUser::~frmHauptmenueUser()
{
    delete ui;
}

void frmHauptmenueUser::on_pbBeenden_clicked()
{
    qApp->quit();
}


void frmHauptmenueUser::on_pbZitatEintragen_clicked()
{
    //so öffnet man ein neues Window "Benutzereinstellungen"
    frmZitatEintragen zitateintragen;
    zitateintragen.setModal(true);
    zitateintragen.exec();
    //MPS
}


void frmHauptmenueUser::on_pbAbmelden_clicked()
{
    this->close();
    //so öffnet man ein neues Window "frmmain" (Anmeldemaske)
    frmAnmelden frmanmelden;
    frmanmelden.setModal(true);
    frmanmelden.exec();
    //MPS
}


void frmHauptmenueUser::on_pbZitatAnzeigen_clicked()
{
    //so öffnet man ein neues Window "zitatanzeigen"
    frmZitatAnzeigen zitatanzeigen;
    zitatanzeigen.setModal(true);
    zitatanzeigen.exec();
    //MPS
}

void frmHauptmenueUser::on_pbBenutzerEinstellungen_clicked()
{
    //so öffnet man ein neues Window "Benutzereinstellungen"
    frmBenutzerEinstellungen benutzereinstellungen;
    benutzereinstellungen.setModal(true);
    benutzereinstellungen.exec();
    //MPS
}
