#ifndef FRMBENUTZERAENDERN_H
#define FRMBENUTZERAENDERN_H

#include <QDialog>
#include "benutzerkontrolle.h"

/*
 * Oberfläche zum Neuanlegen oder Ändern eines Benutzers
 * Autor: Lars
 */
namespace Ui {
class frmBenutzerAendern;
}

class frmBenutzerAendern : public QDialog
{
    Q_OBJECT

public:
    explicit frmBenutzerAendern(QWidget *parent = 0);
    ~frmBenutzerAendern();
    void setBenutzer(Benutzer* _ben);

private slots:
    void on_btnZurueck_clicked();

    void on_btnSpeichern_clicked();

    void on_pbBeenden_clicked();

    void on_pbMenue_clicked();

private:
    Ui::frmBenutzerAendern *ui;
    BenutzerKontrolle* benKontr;
    QVector<OrgEinheit*> oeListe;
    bool neu;
    Benutzer* ben;
    void fuelleUI();
    void fuelleOE();
};

#endif // FRMBENUTZERAENDERN_H
