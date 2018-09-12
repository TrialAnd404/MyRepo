#include "hauptmenueuser.h"
#include "ui_hauptmenueuser.h"

HauptmenueUser::HauptmenueUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HauptmenueUser)
{
    ui->setupUi(this);
}

HauptmenueUser::~HauptmenueUser()
{
    delete ui;
}

void HauptmenueUser::on_pbBeenden_clicked()
{
    this->close();
}
