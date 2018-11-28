#include "frmanmelden.h"
#include "ui_frmanmelden.h"
#include <hauptmenueadmin.h>
#include <hauptmenueuser.h>
#include <QMessageBox>

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

    QString user = ui->ldtBenutzername->text();
    QString passwrd = ui->ldtPasswort->text();
    Userlogin* login = new Userlogin;

    if (login->checkLoginCredentials(user, passwrd))
    {
/*
        HauptmenueUser hauptmenueuser;
        hauptmenueuser.setModal(true);
        hauptmenueuser.exec();
*/
        //TODO: Etwas in der Art von Username setzen & an die frmMain
        //weitergeben (bzw das Userhauptmenu)
    }
    /*
    else if(user="admin" && passwrd="1234")
    {
        //so öffnet man ein neues Window "Hauptmenü-Admin"
        HauptmenueAdmin admin;
        admin.setModal(true);
        admin.exec();
        //MPS
    }
    */
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Anmeldedaten inkorrekt!");
        msgBox.exec();
    }
    delete login;
}
