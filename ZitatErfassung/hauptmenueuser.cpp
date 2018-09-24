#include "hauptmenueuser.h"
#include "ui_hauptmenueuser.h"
#include <zitateintragen.h>
#include <benutzereinstellungen.h>
#include <frmmain.h>
#include <frmanmelden.h>
#include <frmzitatanzeigen.h>



HauptmenueUser::HauptmenueUser(Benutzer* currentUser, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HauptmenueUser)
{
    ui->setupUi(this);
    //TODO: User Objekt aus Parametern erstellen?
}

HauptmenueUser::~HauptmenueUser()
{
    delete ui;
}

void HauptmenueUser::on_pbBeenden_clicked()
{
    qApp->quit();
}


void HauptmenueUser::on_pbZitatEintragen_clicked()
{
    //so öffnet man ein neues Window "Benutzereinstellungen"
    ZitatEintragen zitateintragen;
    zitateintragen.setModal(true);
    zitateintragen.exec();
    //MPS
}


void HauptmenueUser::on_pbAbmelden_clicked()
{
    this->close();
    //so öffnet man ein neues Window "frmmain" (Anmeldemaske)
    frmAnmelden frmanmelden;
    frmanmelden.setModal(true);
    frmanmelden.exec();
    //MPS
}


void HauptmenueUser::on_pbZitatAnzeigen_clicked()
{
    //so öffnet man ein neues Window "zitatanzeigen"
    frmZitatAnzeigen zitatanzeigen;
    zitatanzeigen.setModal(true);
    zitatanzeigen.exec();
    //MPS
}

void HauptmenueUser::on_pbBenutzerEinstellungen_clicked()
{
    //so öffnet man ein neues Window "Benutzereinstellungen"
    BenutzerEinstellungen benutzereinstellungen;
    benutzereinstellungen.setModal(true);
    benutzereinstellungen.exec();
    //MPS
}
