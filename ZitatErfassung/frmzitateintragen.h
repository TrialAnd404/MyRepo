#ifndef FRMZITATEINTRAGEN_H
#define FRMZITATEINTRAGEN_H

#include <QDialog>
#include "zitatkontrolle.h"

/*
 * Oberfläche zum Eintragen eines Zitats
 * Autor: Lars
 */
namespace Ui {
class frmZitatEintragen;
}

class frmZitatEintragen : public QDialog
{
    Q_OBJECT

public:
    explicit frmZitatEintragen(QWidget *parent = 0);
    ~frmZitatEintragen();

private slots:
    void on_pbBeenden_clicked();

    void on_pbMenue_clicked();

    void on_pbSpeichern_clicked();

private:
    Ui::frmZitatEintragen *ui;
    ZitatKontrolle* zk;
    void fuelleOE();
};

#endif // FRMZITATEINTRAGEN_H
