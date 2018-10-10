#ifndef FRMZITATANZEIGEN_H
#define FRMZITATANZEIGEN_H

#include <QDialog>
#include "zitatkontrolle.h"

namespace Ui {
class frmZitatAnzeigen;
}

class frmZitatAnzeigen : public QDialog
{
    Q_OBJECT

public:
    explicit frmZitatAnzeigen(QWidget *parent = 0);
    ~frmZitatAnzeigen();

private slots:
    void on_pbBeenden_clicked();

    void on_pbMenue_clicked();

    void on_btnNext_clicked();

    void on_btnPrev_clicked();

    void on_pbSuchen_clicked();

private:
    Ui::frmZitatAnzeigen *ui;
    ZitatKontrolle* zitKontr;
    QVector<Zitat*> zitListe;
    QVector<Zitat*> suchListe;
    int seitenNr;
    void baueUI();
};

#endif // FRMZITATANZEIGEN_H
