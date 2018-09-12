#include "frmmain.h"
#include "ui_frmmain.h"
#include <hauptmenueuser.h>
#include <hauptmenueadmin.h>
#include <benutzereinstellungen.h>
#include <QMessageBox>

frmMain::frmMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frmMain)
{
    ui->setupUi(this);
}

frmMain::~frmMain()
{
    delete ui;
}

void frmMain::on_pbLogin_clicked()
{
    QString Benutzername = ui->ldtBenutzername->text();
    QString Passwort = ui->ldtPasswort->text();

    if(Benutzername == "ADMIN" && Passwort == "1234")
    {
        //so öffnet man ein neues Window "Hauptmenü-Admin"
        this->close();
        HauptmenueAdmin hauptmenueadmin;
        hauptmenueadmin.setModal(true);
        hauptmenueadmin.exec();
        //MPS
    }
    else if(Benutzername=="BENUTZER" && Passwort=="1234")
    {
        //so öffnet man ein neues Window "Hauptmenü-User"
        this->close();
        HauptmenueUser hauptmenueuser;
        hauptmenueuser.setModal(true);
        hauptmenueuser.exec();
        //MPS
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Bitte überprüfen Sie ihre Anmeldedaten");
        msgBox.exec();
    }


}
