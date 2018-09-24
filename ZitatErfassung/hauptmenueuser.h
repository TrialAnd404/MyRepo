#ifndef HAUPTMENUEUSER_H
#define HAUPTMENUEUSER_H

#include <QDialog>

namespace Ui {
class HauptmenueUser;
}

class HauptmenueUser : public QDialog
{
    Q_OBJECT

public:
    explicit HauptmenueUser(QWidget *parent = 0);
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
//    Benutzer user;
};

#endif // HAUPTMENUEUSER_H
