#include "frmanmelden.h"
#include "ui_frmanmelden.h"
#include <frmhauptmenueadmin.h>
#include <frmhauptmenueuser.h>
#include <QMessageBox>

frmAnmelden::frmAnmelden(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmAnmelden)
{
    ui->setupUi(this);
    ui->ldtPasswort->setEchoMode(QLineEdit::Password);
}

frmAnmelden::~frmAnmelden()
{
    delete ui;
}

void frmAnmelden::on_pbLogin_clicked()
{

    QString user = ui->ldtBenutzername->text();
    QString passwrd = ui->ldtPasswort->text();
    Userlogin* login = new Userlogin();

    if (login->checkLoginCredentials(user, passwrd))
    {
        if (SessionInfo::getSessionInfo()->getAktNutzer()->getAdmin())
        {
            frmHauptmenueAdmin hauptmenueAdmin(NULL, this);
            hauptmenueAdmin.setModal(true);
            hauptmenueAdmin.exec();
        }
        else
        {
            frmHauptmenueUser hauptmenueBenutzer(NULL, this);
            hauptmenueBenutzer.setModal(true);
            hauptmenueBenutzer.exec();
        }
        //TODO: Etwas in der Art von Username setzen & an die frmMain
        //weitergeben (bzw das Userhauptmenu)
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Anmeldedaten inkorrekt!");
        msgBox.exec();
    }
    delete login;
}
