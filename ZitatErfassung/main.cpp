#include "frmanmelden.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    frmAnmelden w;
    w.show();

    return a.exec();
}
