#ifndef HAUPTMENUEADMIN_H
#define HAUPTMENUEADMIN_H

#include <QDialog>

#include "admin.h"

namespace Ui {
class HauptmenueAdmin;
}

class HauptmenueAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit HauptmenueAdmin(Admin* currentAdmin, QWidget *parent = 0);
    ~HauptmenueAdmin();
    Admin* getCurrentAdmin();

private slots:
    void on_pbBenutzerEinstellungen_clicked();

    void on_pbBeenden_clicked();

    void on_pbZitatEintragen_clicked();

    void on_pbMenue_clicked();

    void on_pbAbmelden_clicked();

    void on_pbZitatAnzeigen_clicked();

    void on_pbZitatVerwalten_clicked();

    void on_pbJahrgaengeVerwalten_clicked();

    void on_pbBenutzerVerwaltung_clicked();

private:
    Ui::HauptmenueAdmin *ui;
    Admin* currentAdmin;
};

#endif // HAUPTMENUEADMIN_H
