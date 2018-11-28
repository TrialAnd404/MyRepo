#ifndef FRMANMELDEN_H
#define FRMANMELDEN_H

#include <QDialog>

#include "userlogin.h"
#include "hauptmenueadmin.h"
#include "hauptmenueuser.h"

namespace Ui {
class frmAnmelden;
}

class frmAnmelden : public QDialog
{
    Q_OBJECT

public:
    explicit frmAnmelden(QWidget *parent = 0);
    ~frmAnmelden();

private slots:
    void on_pbLogin_clicked();

private:
    Ui::frmAnmelden *ui;
};

#endif // FRMANMELDEN_H
