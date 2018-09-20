#ifndef ZITATEINTRAGEN_H
#define ZITATEINTRAGEN_H

#include <QDialog>

namespace Ui {
class ZitatEintragen;
}

class ZitatEintragen : public QDialog
{
    Q_OBJECT

public:
    explicit ZitatEintragen(QWidget *parent = 0);
    ~ZitatEintragen();

private slots:
    void on_pbBeenden_clicked();

    void on_pbMenue_clicked();

private:
    Ui::ZitatEintragen *ui;
};

#endif // ZITATEINTRAGEN_H