#ifndef FRMJAHRGAENGEVERWALTEN_H
#define FRMJAHRGAENGEVERWALTEN_H

#include <QDialog>

#include "orgeinheitkontrolle.h"
#include "frmjahrgangaendern.h"

/*
 * Oberfläche zur Verwaltung aller OrgEinheiten
 * Autor: Lars
 */
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

    void on_pbJahrgangHinzu_clicked();

    void on_pbSuchen_clicked();

    void on_pbLoeschen_clicked();

    void on_pbAendern_clicked();

private:
    Ui::frmJahrgaengeVerwalten *ui;
    void baueUI();
    OrgEinheitKontrolle* oeKontr;
    QVector<OrgEinheit*> oeListe;
    QVector<OrgEinheit*> suchListe;
};

#endif // FRMJAHRGAENGEVERWALTEN_H
