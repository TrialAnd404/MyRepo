#include "frmanmelden.h"
#include "ui_frmanmelden.h"
#include <frmhauptmenueadmin.h>
#include <frmhauptmenueuser.h>
#include <QMessageBox>

/*
 * Konstruktor
 * Autor: Pascal
 */
frmAnmelden::frmAnmelden(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmAnmelden)
{
    ui->setupUi(this);
    ui->ldtPasswort->setEchoMode(QLineEdit::Password);
}

/*
 * Destruktor
 * Autor: Pascal
 */
frmAnmelden::~frmAnmelden()
{
    delete ui;
}

/*
 * Knopf Anmelden
 * Autor: Pascal
 */
void frmAnmelden::on_pbLogin_clicked()
{

    QString user = ui->ldtBenutzername->text();
    QString passwrd = ui->ldtPasswort->text();
    Userlogin* login = new Userlogin();

    if (login->checkLoginCredentials(user, passwrd))
    {
        if (SessionInfo::getSessionInfo()->getAktNutzer()->getAdmin())
        {
            frmHauptmenueAdmin hauptmenueAdmin(this);
            hauptmenueAdmin.setModal(true);
            hauptmenueAdmin.exec();
        }
        else
        {
            frmHauptmenueUser hauptmenueBenutzer(this);
            hauptmenueBenutzer.setModal(true);
            hauptmenueBenutzer.exec();
        }
        ui->ldtPasswort->clear();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Anmeldedaten inkorrekt!");
        msgBox.exec();
    }
    delete login;

}
