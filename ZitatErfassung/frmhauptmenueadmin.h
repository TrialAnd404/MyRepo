#ifndef FRMHAUPTMENUEADMIN_H
#define FRMHAUPTMENUEADMIN_H

#include <QDialog>

#include "admin.h"
#include "frmmeldunganzeigen.h"

/*
 * Oberfläche des Hauptmenus für Admins
 * Autor: Pascal
 */
namespace Ui {
class frmHauptmenueAdmin;
}

class frmHauptmenueAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit frmHauptmenueAdmin(QWidget *parent = 0);
    ~frmHauptmenueAdmin();
    Admin* getCurrentAdmin();

private slots:
    void on_pbBenutzerEinstellungen_clicked();

    void on_pbBeenden_clicked();

    void on_pbZitatEintragen_clicked();

    void on_pbAbmelden_clicked();

    void on_pbZitatAnzeigen_clicked();

    void on_pbZitatVerwalten_clicked();

    void on_pbJahrgaengeVerwalten_clicked();

    void on_pbBenutzerVerwaltung_clicked();

    void on_btnMeldungenVerwalten_clicked();

private:
    Ui::frmHauptmenueAdmin *ui;
    Admin* currentAdmin;
};

#endif // FRMHAUPTMENUEADMIN_H
