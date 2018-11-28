#ifndef BENUTZEREINSTELLUNGEN_H
#define BENUTZEREINSTELLUNGEN_H

#include <QDialog>

#include "checkvalidentry.h"

//TODO: include datenbankverbindung -> für speichern

namespace Ui {
class BenutzerEinstellungen;
}

class BenutzerEinstellungen : public QDialog
{
    Q_OBJECT

public:
    explicit BenutzerEinstellungen(QWidget *parent = 0);
    ~BenutzerEinstellungen();

private slots:
    void on_pbBeenden_clicked();

    void on_pbMenue_clicked();

    void on_pbSpeichern_clicked();
private:
    Ui::BenutzerEinstellungen *ui;
};

#endif // BENUTZEREINSTELLUNGEN_H
