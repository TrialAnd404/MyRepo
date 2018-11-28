#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QMainWindow>

namespace Ui {
class frmMain;
}

class frmMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit frmMain(QWidget *parent = 0);
    ~frmMain();

private slots:
    void on_pbLogin_clicked();

    void on_pbStarten_clicked();

private:
    Ui::frmMain *ui;
};

#endif // FRMMAIN_H
