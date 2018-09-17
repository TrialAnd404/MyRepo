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

    if (login.checkLoginCredentials(user, passwrd))
    {
        HauptmenueUser hauptmenueuser;
        hauptmenueuser.setModal(true);
        hauptmenueuser.exec();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Anmeldedaten inkorrekt!");
        msgBox.exec();
    }
    delete login;
}
