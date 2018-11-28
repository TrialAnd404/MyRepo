#ifndef FRMBENUTZEREINSTELLUNGEN_H
#define FRMBENUTZEREINSTELLUNGEN_H

#include <QDialog>

#include "checkvalidentry.h"
#include "sessioninfo.h"
#include "benutzerkontrolle.h"

/*
 * Oberfläche zum Verwalten der persönlichen Benutzerdaten
 * Autor: Üascal
 */
namespace Ui {
class frmBenutzerEinstellungen;
}

class frmBenutzerEinstellungen : public QDialog
{
    Q_OBJECT

public:
    explicit frmBenutzerEinstellungen(QWidget *parent = 0);
    ~frmBenutzerEinstellungen();
private slots:
    void on_pbBeenden_clicked();

    void on_pbMenue_clicked();

    void on_pbSpeichern_clicked();
private:
    Ui::frmBenutzerEinstellungen *ui;
    BenutzerKontrolle* benKontr;
    void baueUI();
};

#endif // FRMBENUTZEREINSTELLUNGEN_H
