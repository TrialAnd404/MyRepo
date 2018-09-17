#ifndef FRMANMELDENSQL_H
#define FRMANMELDENSQL_H

#include <QDialog>

namespace Ui {
class frmAnmeldenSQL;
}

class frmAnmeldenSQL : public QDialog
{
    Q_OBJECT

public:
    explicit frmAnmeldenSQL(QWidget *parent = 0);
    ~frmAnmeldenSQL();

private:
    Ui::frmAnmeldenSQL *ui;
};

#endif // FRMANMELDENSQL_H
