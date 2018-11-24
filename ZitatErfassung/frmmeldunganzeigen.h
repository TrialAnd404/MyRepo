#ifndef FRMMELDUNGANZEIGEN_H
#define FRMMELDUNGANZEIGEN_H

#include <QDialog>
#include "meldungkontrolle.h"
#include "frmzitataendern.h"

namespace Ui {
class FrmMeldungAnzeigen;
}

class FrmMeldungAnzeigen : public QDialog
{
    Q_OBJECT

public:
    explicit FrmMeldungAnzeigen(QWidget *parent = 0);
    ~FrmMeldungAnzeigen();

private slots:
    void on_btnZurueck_clicked();

    void on_btnBeenden_clicked();

    void on_btnBearbeiten_clicked();

private:
    Ui::FrmMeldungAnzeigen *ui;
    MeldungKontrolle* meldKontr;
    QVector<Meldung*> meldListe;
    void baueUI();
};

#endif // FRMMELDUNGANZEIGEN_H
