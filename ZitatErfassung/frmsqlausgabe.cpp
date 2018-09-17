#include "frmsqlausgabe.h"
#include "ui_frmsqlausgabe.h"

frmSqlAusgabe::frmSqlAusgabe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmSqlAusgabe)
{
    ui->setupUi(this);
}

frmSqlAusgabe::~frmSqlAusgabe()
{
    delete ui;
}
