#ifndef HAUPTMENUEADMIN_H
#define HAUPTMENUEADMIN_H

#include <QDialog>

namespace Ui {
class HauptmenueAdmin;
}

class HauptmenueAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit HauptmenueAdmin(QWidget *parent = 0);
    ~HauptmenueAdmin();

private slots:
    void on_pbBenutzerEinstellungen_clicked();

    void on_pbBeenden_clicked();

private:
    Ui::HauptmenueAdmin *ui;
};

#endif // HAUPTMENUEADMIN_H
