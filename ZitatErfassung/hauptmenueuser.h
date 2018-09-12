#ifndef HAUPTMENUEUSER_H
#define HAUPTMENUEUSER_H

#include <QDialog>

namespace Ui {
class HauptmenueUser;
}

class HauptmenueUser : public QDialog
{
    Q_OBJECT

public:
    explicit HauptmenueUser(QWidget *parent = 0);
    ~HauptmenueUser();

private slots:
    void on_pbBeenden_clicked();

private:
    Ui::HauptmenueUser *ui;
};

#endif // HAUPTMENUEUSER_H
