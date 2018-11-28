#include "zitateintragen.h"
#include "ui_zitateintragen.h"

ZitatEintragen::ZitatEintragen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ZitatEintragen)
{
    ui->setupUi(this);
    zk = new ZitatKontrolle();
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

void ZitatEintragen::on_pbSpeichern_clicked()
{
    bool klappt = zk->legeZitatAn(ui->edtZitat->text(),ui->edtRedner->text(),ui->deDatum->date(), ui->cbOrgEinheit->currentText());
    if (klappt)
    {

    }
    else
    {

    }
}
