/********************************************************************************
** Form generated from reading UI file 'frmzitatanzeigen.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMZITATANZEIGEN_H
#define UI_FRMZITATANZEIGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_frmZitatAnzeigen
{
public:
    QPushButton *pbBeenden;
    QLabel *label_5;
    QFrame *line_2;
    QPushButton *pbMenue;
    QFrame *line;
    QLabel *label;
    QLineEdit *ldtSuchwort;
    QPushButton *pbSuchen;
    QListView *lwZitate;
    QPushButton *pbExport;

    void setupUi(QDialog *frmZitatAnzeigen)
    {
        if (frmZitatAnzeigen->objectName().isEmpty())
            frmZitatAnzeigen->setObjectName(QStringLiteral("frmZitatAnzeigen"));
        frmZitatAnzeigen->resize(400, 369);
        pbBeenden = new QPushButton(frmZitatAnzeigen);
        pbBeenden->setObjectName(QStringLiteral("pbBeenden"));
        pbBeenden->setGeometry(QRect(270, 339, 131, 31));
        label_5 = new QLabel(frmZitatAnzeigen);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, -1, 141, 16));
        line_2 = new QFrame(frmZitatAnzeigen);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 14, 401, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pbMenue = new QPushButton(frmZitatAnzeigen);
        pbMenue->setObjectName(QStringLiteral("pbMenue"));
        pbMenue->setGeometry(QRect(0, 339, 131, 31));
        line = new QFrame(frmZitatAnzeigen);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 320, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(frmZitatAnzeigen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 50, 61, 16));
        ldtSuchwort = new QLineEdit(frmZitatAnzeigen);
        ldtSuchwort->setObjectName(QStringLiteral("ldtSuchwort"));
        ldtSuchwort->setGeometry(QRect(100, 50, 191, 20));
        pbSuchen = new QPushButton(frmZitatAnzeigen);
        pbSuchen->setObjectName(QStringLiteral("pbSuchen"));
        pbSuchen->setGeometry(QRect(300, 48, 75, 23));
        lwZitate = new QListView(frmZitatAnzeigen);
        lwZitate->setObjectName(QStringLiteral("lwZitate"));
        lwZitate->setGeometry(QRect(20, 90, 361, 201));
        pbExport = new QPushButton(frmZitatAnzeigen);
        pbExport->setObjectName(QStringLiteral("pbExport"));
        pbExport->setGeometry(QRect(305, 295, 75, 23));

        retranslateUi(frmZitatAnzeigen);

        QMetaObject::connectSlotsByName(frmZitatAnzeigen);
    } // setupUi

    void retranslateUi(QDialog *frmZitatAnzeigen)
    {
        frmZitatAnzeigen->setWindowTitle(QApplication::translate("frmZitatAnzeigen", "Dialog", 0));
        pbBeenden->setText(QApplication::translate("frmZitatAnzeigen", "Beenden", 0));
        label_5->setText(QApplication::translate("frmZitatAnzeigen", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Zitat anzeigen</span></p></body></html>", 0));
        pbMenue->setText(QApplication::translate("frmZitatAnzeigen", "Hauptmen\303\274", 0));
        label->setText(QApplication::translate("frmZitatAnzeigen", "Suchwort:", 0));
        pbSuchen->setText(QApplication::translate("frmZitatAnzeigen", "Suchen", 0));
        pbExport->setText(QApplication::translate("frmZitatAnzeigen", "Export", 0));
    } // retranslateUi

};

namespace Ui {
    class frmZitatAnzeigen: public Ui_frmZitatAnzeigen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMZITATANZEIGEN_H
