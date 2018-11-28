#ifndef FRMHAUPTMENUEUSER_H
#define FRMHAUPTMENUEUSER_H

#include <QDialog>

#include "benutzer.h"

namespace Ui {
class frmHauptmenueUser;
}

class frmHauptmenueUser : public QDialog
{
    Q_OBJECT

public:
    explicit frmHauptmenueUser(Benutzer* currentUser, QWidget *parent = 0);
    ~frmHauptmenueUser();

private slots:
    void on_pbBeenden_clicked();

    void on_pbZitatEintragen_clicked();

    void on_pbAbmelden_clicked();

    void on_pbZitatAnzeigen_clicked();

    void on_pbBenutzerEinstellungen_clicked();

private:
    Ui::frmHauptmenueUser *ui;
    Benutzer* currentUser;
};

#endif // FRMHAUPTMENUEUSER_H
