#ifndef FRMSQLAUSGABE_H
#define FRMSQLAUSGABE_H

#include <QDialog>

namespace Ui {
class frmSqlAusgabe;
}

class frmSqlAusgabe : public QDialog
{
    Q_OBJECT

public:
    explicit frmSqlAusgabe(QWidget *parent = 0);
    ~frmSqlAusgabe();

private:
    Ui::frmSqlAusgabe *ui;
};

#endif // FRMSQLAUSGABE_H
