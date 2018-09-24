/********************************************************************************
** Form generated from reading UI file 'frmzitatverwalten.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMZITATVERWALTEN_H
#define UI_FRMZITATVERWALTEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_frmZitatVerwalten
{
public:
    QFrame *line_2;
    QLabel *label_5;
    QPushButton *pbBeenden;
    QPushButton *pbMenue;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *ldtSuchwort;
    QComboBox *cmbJahrgang;
    QComboBox *cmbKurs;
    QListWidget *lwAnzeigen;
    QPushButton *pbSuchen;
    QPushButton *pbSpeichern;
    QPushButton *pbLoeschen;

    void setupUi(QDialog *frmZitatVerwalten)
    {
        if (frmZitatVerwalten->objectName().isEmpty())
            frmZitatVerwalten->setObjectName(QStringLiteral("frmZitatVerwalten"));
        frmZitatVerwalten->resize(520, 415);
        line_2 = new QFrame(frmZitatVerwalten);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 14, 521, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(frmZitatVerwalten);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 0, 141, 16));
        pbBeenden = new QPushButton(frmZitatVerwalten);
        pbBeenden->setObjectName(QStringLiteral("pbBeenden"));
        pbBeenden->setGeometry(QRect(390, 389, 131, 31));
        pbMenue = new QPushButton(frmZitatVerwalten);
        pbMenue->setObjectName(QStringLiteral("pbMenue"));
        pbMenue->setGeometry(QRect(0, 389, 131, 31));
        line = new QFrame(frmZitatVerwalten);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 370, 521, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(frmZitatVerwalten);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 51, 16));
        label_2 = new QLabel(frmZitatVerwalten);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 91, 61, 16));
        label_3 = new QLabel(frmZitatVerwalten);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 124, 46, 13));
        ldtSuchwort = new QLineEdit(frmZitatVerwalten);
        ldtSuchwort->setObjectName(QStringLiteral("ldtSuchwort"));
        ldtSuchwort->setGeometry(QRect(110, 60, 201, 20));
        cmbJahrgang = new QComboBox(frmZitatVerwalten);
        cmbJahrgang->setObjectName(QStringLiteral("cmbJahrgang"));
        cmbJahrgang->setGeometry(QRect(110, 90, 111, 22));
        cmbKurs = new QComboBox(frmZitatVerwalten);
        cmbKurs->setObjectName(QStringLiteral("cmbKurs"));
        cmbKurs->setGeometry(QRect(110, 120, 111, 22));
        lwAnzeigen = new QListWidget(frmZitatVerwalten);
        lwAnzeigen->setObjectName(QStringLiteral("lwAnzeigen"));
        lwAnzeigen->setGeometry(QRect(40, 160, 341, 192));
        pbSuchen = new QPushButton(frmZitatVerwalten);
        pbSuchen->setObjectName(QStringLiteral("pbSuchen"));
        pbSuchen->setGeometry(QRect(400, 200, 101, 23));
        pbSpeichern = new QPushButton(frmZitatVerwalten);
        pbSpeichern->setObjectName(QStringLiteral("pbSpeichern"));
        pbSpeichern->setGeometry(QRect(400, 240, 101, 23));
        pbLoeschen = new QPushButton(frmZitatVerwalten);
        pbLoeschen->setObjectName(QStringLiteral("pbLoeschen"));
        pbLoeschen->setGeometry(QRect(400, 280, 101, 23));

        retranslateUi(frmZitatVerwalten);

        QMetaObject::connectSlotsByName(frmZitatVerwalten);
    } // setupUi

    void retranslateUi(QDialog *frmZitatVerwalten)
    {
        frmZitatVerwalten->setWindowTitle(QApplication::translate("frmZitatVerwalten", "Dialog", 0));
        label_5->setText(QApplication::translate("frmZitatVerwalten", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Zitat anzeigen</span></p></body></html>", 0));
        pbBeenden->setText(QApplication::translate("frmZitatVerwalten", "Beenden", 0));
        pbMenue->setText(QApplication::translate("frmZitatVerwalten", "Hauptmen\303\274", 0));
        label->setText(QApplication::translate("frmZitatVerwalten", "Suchwort:", 0));
        label_2->setText(QApplication::translate("frmZitatVerwalten", "Jahrgang:", 0));
        label_3->setText(QApplication::translate("frmZitatVerwalten", "Kurs:", 0));
        pbSuchen->setText(QApplication::translate("frmZitatVerwalten", "Suchen", 0));
        pbSpeichern->setText(QApplication::translate("frmZitatVerwalten", "Speichern", 0));
        pbLoeschen->setText(QApplication::translate("frmZitatVerwalten", "L\303\266schen", 0));
    } // retranslateUi

};

namespace Ui {
    class frmZitatVerwalten: public Ui_frmZitatVerwalten {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMZITATVERWALTEN_H
