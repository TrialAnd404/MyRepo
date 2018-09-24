#include "frmmain.h"
#include "ui_frmmain.h"
#include <hauptmenueuser.h>
#include <hauptmenueadmin.h>
#include <benutzereinstellungen.h>
#include <QMessageBox>
#include <frmanmelden.h>
#include <frmbenutzerverwaltung.h>
#include "sqlquery.h"


frmMain::frmMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frmMain)
{
    ui->setupUi(this);
    QString test;
}

frmMain::~frmMain()
{

    delete ui;
}

void frmMain::on_pbLogin_clicked()
{
    QString Benutzername = ui->ldtBenutzername->text();
    QString Passwort = ui->ldtPasswort->text();

    SQLQuery* login = new SQLQuery();
    login->datenbankOperation("test");



    ui->ldtTest->text(); //Hier soll der Benutzername aus der DB in das ldtTest eingetragen werden


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

    delete login;
}



