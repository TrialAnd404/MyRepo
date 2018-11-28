#ifndef FRMBENUTZERVERWALTUNG_H
#define FRMBENUTZERVERWALTUNG_H

#include <QDialog>

namespace Ui {
class frmBenutzerVerwaltung;
}

class frmBenutzerVerwaltung : public QDialog
{
    Q_OBJECT

public:
    explicit frmBenutzerVerwaltung(QWidget *parent = 0);
    ~frmBenutzerVerwaltung();

private:
    Ui::frmBenutzerVerwaltung *ui;
};

#endif // FRMBENUTZERVERWALTUNG_H
