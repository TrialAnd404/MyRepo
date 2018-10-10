#ifndef FRMZITATVERWALTEN_H
#define FRMZITATVERWALTEN_H

#include <QDialog>

namespace Ui {
class frmZitatVerwalten;
}

class frmZitatVerwalten : public QDialog
{
    Q_OBJECT

public:
    explicit frmZitatVerwalten(QWidget *parent = 0);
    ~frmZitatVerwalten();

private slots:
    void on_pbMenue_clicked();

    void on_pbSpeichern_clicked();

    void on_pbLoeschen_clicked();

    void on_pbSuchen_clicked();

private:
    Ui::frmZitatVerwalten *ui;
};

#endif // FRMZITATVERWALTEN_H
