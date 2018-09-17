#ifndef FRMZITATANZEIGEN_H
#define FRMZITATANZEIGEN_H

#include <QDialog>

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

private:
    Ui::frmZitatAnzeigen *ui;
};

#endif // FRMZITATANZEIGEN_H
