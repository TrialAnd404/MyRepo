include "frmanmeldensql.h"
#include "ui_frmanmeldensql.h"

frmAnmeldenSQL::frmAnmeldenSQL(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmAnmeldenSQL)
{
    ui->setupUi(this);
}

frmAnmeldenSQL::~frmAnmeldenSQL()
{
    delete ui;
}
