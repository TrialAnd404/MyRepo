#include "zitateintragen.h"
#include "ui_zitateintragen.h"

ZitatEintragen::ZitatEintragen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ZitatEintragen)
{
    ui->setupUi(this);
}

ZitatEintragen::~ZitatEintragen()
{
    delete ui;
}

void ZitatEintragen::on_pbBeenden_clicked()
{
    qApp->quit();
}

void ZitatEintragen::on_pbMenue_clicked()
{
    this->close();
}
