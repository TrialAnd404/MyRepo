#ifndef FRMBENUTZERIMPORT_H
#define FRMBENUTZERIMPORT_H

#include <QDialog>
#include "benutzerkontrolle.h"

/*
 * Oberfläche zum Importieren von Benutzern aus einem Text
 * Autor: Lars
 */
namespace Ui {
class FrmBenutzerImport;
}

class FrmBenutzerImport : public QDialog
{
    Q_OBJECT

public:
    explicit FrmBenutzerImport(QWidget *parent = 0);
    ~FrmBenutzerImport();

private slots:
    void on_btnZurueck_clicked();

    void on_btnImport_clicked();

private:
    Ui::FrmBenutzerImport *ui;
    BenutzerKontrolle* benKontr;
};

#endif // FRMBENUTZERIMPORT_H
