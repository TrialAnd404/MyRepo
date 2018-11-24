#ifndef FRMBENUTZERVERWALTUNG_H
#define FRMBENUTZERVERWALTUNG_H

#include <QDialog>
#include "benutzerkontrolle.h"
#include "frmbenutzeraendern.h"
#include "frmbenutzerimport.h"

/*
 * Oberfläche zum Verwalten aller Benutzer
 * Autor: Lars
 */
namespace Ui {
class frmBenutzerVerwaltung;
}

class frmBenutzerVerwaltung : public QDialog
{
    Q_OBJECT

public:
    explicit frmBenutzerVerwaltung(QWidget *parent = 0);
    ~frmBenutzerVerwaltung();

private slots:
    void on_pbMenue_clicked();

    void on_pbBeenden_clicked();

    void on_pbBenutzerAnlegen_clicked();

    void on_pbBearbeiten_clicked();

    void on_pbLoeschen_clicked();

    void on_pbSuchen_clicked();

    void on_btnImport_clicked();

private:
    Ui::frmBenutzerVerwaltung *ui;
    BenutzerKontrolle* benKontr;
    QVector<OrgEinheit*> oeListe;
    QVector<Benutzer*> benListe;
    QVector<Benutzer*> suchListe;
    void baueOE();
    void baueUI();
};

#endif // FRMBENUTZERVERWALTUNG_H
