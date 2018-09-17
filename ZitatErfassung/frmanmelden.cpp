#include "frmanmelden.h"
#include "ui_frmanmelden.h"
#include <hauptmenueadmin.h>
#include <hauptmenueuser.h>
#include <QMessageBox>
#include "sqlquery.h"

frmAnmelden::frmAnmelden(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmAnmelden)
{
    ui->setupUi(this);


}

frmAnmelden::~frmAnmelden()
{
    delete ui;
}

void frmAnmelden::on_pbLogin_clicked()
{
    QString Benutzername = ui->ldtBenutzername->text();
    QString Passwort = ui->ldtPasswort->text();

    SQLQuery* pipapo = new SQLQuery();
    pipapo->datenbankOperation("TEST");

/*
    if(Benutzername == "admin" && Passwort == "1234"){
        //so öffnet man ein neues Window "Hauptmenü-Admin"
        HauptmenueAdmin hauptmenueadmin;
        hauptmenueadmin.setModal(true);
        hauptmenueadmin.exec();
    //MPS
    }
    else if(Benutzername == "benutzer" && Passwort == "1234"){
        //so öffnet man ein neues Window "Hauptmenü-Admin"
        HauptmenueUser hauptmenueuser;
        hauptmenueuser.setModal(true);
        hauptmenueuser.exec();
    //MPS
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Anmeldedaten inkorrekt!");
        msgBox.exec();
    }
*/
}
