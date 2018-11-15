#ifndef FRMJAHRGANGAENDERN_H
#define FRMJAHRGANGAENDERN_H

#include <QDialog>
#include "orgeinheitkontrolle.h"

/*
 * Oberfläche zum Aendern einer OrgEinheit
 * Autor: Lars
 */
namespace Ui {
class frmJahrgangAendern;
}

class frmJahrgangAendern : public QDialog
{
    Q_OBJECT

public:
    explicit frmJahrgangAendern(QWidget *parent = 0);
    ~frmJahrgangAendern();
    void setOE(OrgEinheit* _oe);

private slots:
    void on_btnZurueck_clicked();

    void on_btnAendern_clicked();

private:
    Ui::frmJahrgangAendern *ui;
    OrgEinheit* oe;
    void baueUI();
    OrgEinheitKontrolle* oeKontr;
};

#endif // FRMJAHRGANGAENDERN_H
