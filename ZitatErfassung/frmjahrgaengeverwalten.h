#ifndef FRMJAHRGAENGEVERWALTEN_H
#define FRMJAHRGAENGEVERWALTEN_H

#include <QDialog>

namespace Ui {
class frmJahrgaengeVerwalten;
}

class frmJahrgaengeVerwalten : public QDialog
{
    Q_OBJECT

public:
    explicit frmJahrgaengeVerwalten(QWidget *parent = 0);
    ~frmJahrgaengeVerwalten();

private slots:
    void on_pbBeenden_clicked();

    void on_pbMenue_clicked();

private:
    Ui::frmJahrgaengeVerwalten *ui;
};

#endif // FRMJAHRGAENGEVERWALTEN_H
