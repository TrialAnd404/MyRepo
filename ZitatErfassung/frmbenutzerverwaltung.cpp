#include "frmbenutzerverwaltung.h"
#include "ui_frmbenutzerverwaltung.h"

frmBenutzerVerwaltung::frmBenutzerVerwaltung(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmBenutzerVerwaltung)
{
    ui->setupUi(this);
}

frmBenutzerVerwaltung::~frmBenutzerVerwaltung()
{
    delete ui;
}
