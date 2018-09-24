#ifndef HAUPTMENUEUSER_H
#define HAUPTMENUEUSER_H

#include <QDialog>

#include "benutzer.h"

namespace Ui {
class HauptmenueUser;
}

class HauptmenueUser : public QDialog
{
    Q_OBJECT

public:
    explicit HauptmenueUser(Benutzer* currentUser, QWidget *parent = 0);
    ~HauptmenueUser();

private slots:
    void on_pbBeenden_clicked();

    void on_pbZitatEintragen_clicked();

    void on_pbMenue_clicked();

    void on_pbAbmelden_clicked();

    void on_pbZitatAnzeigen_clicked();

    void on_pbBenutzerEinstellungen_clicked();

private:
    Ui::HauptmenueUser *ui;
    Benutzer* currentUser;
};

#endif // HAUPTMENUEUSER_H
