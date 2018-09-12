#ifndef BENUTZEREINSTELLUNGEN_H
#define BENUTZEREINSTELLUNGEN_H

#include <QDialog>

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

private:
    Ui::BenutzerEinstellungen *ui;
};

#endif // BENUTZEREINSTELLUNGEN_H
