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
    this->close();
    frmAnmelden frmanmelden;
    frmanmelden.setModal(true);
    frmanmelden.exec();
}

frmMain::~frmMain()
{
    delete ui;
}
