#include "frmmain.h"
#include "ui_frmmain.h"
#include <frmhauptmenueuser.h>
#include <frmhauptmenueadmin.h>
#include <frmbenutzereinstellungen.h>
#include <QMessageBox>
#include <frmanmelden.h>


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

void frmMain::on_pbStarten_clicked()
{
    //so öffnet man ein neues Window "Hauptmenü-Admin"
    frmAnmelden frmanmelden;
    frmanmelden.setModal(true);
    frmanmelden.exec();
    //MPS
}

