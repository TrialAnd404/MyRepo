#ifndef FRMZITATAENDERN_H
#define FRMZITATAENDERN_H

#include <QDialog>
#include "zitatkontrolle.h"

/*
 * Oberfläche zum Aendern eines Zitats
 * Autor: Lars
 */
namespace Ui {
class frmZitatAendern;
}

class frmZitatAendern : public QDialog
{
    Q_OBJECT

public:
    explicit frmZitatAendern(QWidget *parent = 0);
    ~frmZitatAendern();
    void setZitat(Zitat* _zit);

private slots:
    void on_btnAendern_clicked();

    void on_btnZurueck_clicked();

private:
    Ui::frmZitatAendern *ui;
    Zitat* zit;
    ZitatKontrolle* zitKontr;
    void baueUI();
};

#endif // FRMZITATAENDERN_H
