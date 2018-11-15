#ifndef FRMMELDEZITAT_H
#define FRMMELDEZITAT_H

#include <QDialog>
#include "meldungkontrolle.h"

/*
 * Oberfläche zum Erstellen und Absenden einer Meldung
 * Autor: Lars
 */
namespace Ui {
class frmMeldeZitat;
}

class frmMeldeZitat : public QDialog
{
    Q_OBJECT

public:
    explicit frmMeldeZitat(QWidget *parent = 0);
    ~frmMeldeZitat();
    void setZitat(Zitat* _zit);

private slots:
    void on_btnMelden_clicked();

    void on_btnZurueck_clicked();

private:
    Ui::frmMeldeZitat *ui;
    Zitat* zit;
    MeldungKontrolle* meldKontr;
    void baueUI();
};

#endif // FRMMELDEZITAT_H
