#ifndef FRMZITATVERWALTEN_H
#define FRMZITATVERWALTEN_H

#include <QDialog>
#include "zitatkontrolle.h"
#include "frmzitataendern.h"

/*
 * Oberfläche zum Verwalten der Zitate
 * Autor: Lars
 */
namespace Ui {
class frmZitatVerwalten;
}

class frmZitatVerwalten : public QDialog
{
    Q_OBJECT

public:
    explicit frmZitatVerwalten(QWidget *parent = 0);
    ~frmZitatVerwalten();

private slots:
    void on_pbMenue_clicked();

    void on_pbAendern_clicked();

    void on_pbLoeschen_clicked();

    void on_pbSuchen_clicked();

    void on_pbBeenden_clicked();

    void on_pbImport_clicked();

    void on_pbDownload_clicked();

private:
    Ui::frmZitatVerwalten *ui;
    ZitatKontrolle* zitKontr;
    QVector<Zitat*> zitListe;
    QVector<Zitat*> suchListe;
    QVector<OrgEinheit*> oeListe;
    void baueUI();
    void fuelleOe();
};

#endif // FRMZITATVERWALTEN_H
