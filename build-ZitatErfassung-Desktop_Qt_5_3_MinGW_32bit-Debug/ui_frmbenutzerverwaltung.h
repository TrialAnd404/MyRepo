/********************************************************************************
** Form generated from reading UI file 'frmbenutzerverwaltung.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMBENUTZERVERWALTUNG_H
#define UI_FRMBENUTZERVERWALTUNG_H

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

class Ui_frmBenutzerVerwaltung
{
public:
    QPushButton *pbMenue;
    QLabel *label_5;
    QFrame *line_2;
    QPushButton *pbBeenden;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QComboBox *cmbJahrgang;
    QLineEdit *ldtName;
    QPushButton *pbSuchen;
    QListWidget *lwAnzeigen;
    QPushButton *pbBearbeiten;
    QPushButton *pbLoeschen;
    QPushButton *pbBenutzerAnlegen;

    void setupUi(QDialog *frmBenutzerVerwaltung)
    {
        if (frmBenutzerVerwaltung->objectName().isEmpty())
            frmBenutzerVerwaltung->setObjectName(QStringLiteral("frmBenutzerVerwaltung"));
        frmBenutzerVerwaltung->resize(580, 517);
        pbMenue = new QPushButton(frmBenutzerVerwaltung);
        pbMenue->setObjectName(QStringLiteral("pbMenue"));
        pbMenue->setGeometry(QRect(0, 490, 131, 31));
        label_5 = new QLabel(frmBenutzerVerwaltung);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 0, 181, 16));
        line_2 = new QFrame(frmBenutzerVerwaltung);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 14, 581, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pbBeenden = new QPushButton(frmBenutzerVerwaltung);
        pbBeenden->setObjectName(QStringLiteral("pbBeenden"));
        pbBeenden->setGeometry(QRect(450, 490, 131, 31));
        line = new QFrame(frmBenutzerVerwaltung);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 471, 581, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(frmBenutzerVerwaltung);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 61, 16));
        label_2 = new QLabel(frmBenutzerVerwaltung);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 61, 16));
        cmbJahrgang = new QComboBox(frmBenutzerVerwaltung);
        cmbJahrgang->setObjectName(QStringLiteral("cmbJahrgang"));
        cmbJahrgang->setGeometry(QRect(120, 60, 151, 22));
        ldtName = new QLineEdit(frmBenutzerVerwaltung);
        ldtName->setObjectName(QStringLiteral("ldtName"));
        ldtName->setGeometry(QRect(120, 100, 151, 20));
        pbSuchen = new QPushButton(frmBenutzerVerwaltung);
        pbSuchen->setObjectName(QStringLiteral("pbSuchen"));
        pbSuchen->setGeometry(QRect(120, 140, 151, 23));
        lwAnzeigen = new QListWidget(frmBenutzerVerwaltung);
        lwAnzeigen->setObjectName(QStringLiteral("lwAnzeigen"));
        lwAnzeigen->setGeometry(QRect(60, 180, 451, 211));
        pbBearbeiten = new QPushButton(frmBenutzerVerwaltung);
        pbBearbeiten->setObjectName(QStringLiteral("pbBearbeiten"));
        pbBearbeiten->setGeometry(QRect(100, 400, 75, 23));
        pbLoeschen = new QPushButton(frmBenutzerVerwaltung);
        pbLoeschen->setObjectName(QStringLiteral("pbLoeschen"));
        pbLoeschen->setGeometry(QRect(207, 400, 75, 23));
        pbBenutzerAnlegen = new QPushButton(frmBenutzerVerwaltung);
        pbBenutzerAnlegen->setObjectName(QStringLiteral("pbBenutzerAnlegen"));
        pbBenutzerAnlegen->setGeometry(QRect(100, 430, 181, 31));

        retranslateUi(frmBenutzerVerwaltung);

        QMetaObject::connectSlotsByName(frmBenutzerVerwaltung);
    } // setupUi

    void retranslateUi(QDialog *frmBenutzerVerwaltung)
    {
        frmBenutzerVerwaltung->setWindowTitle(QApplication::translate("frmBenutzerVerwaltung", "Dialog", 0));
        pbMenue->setText(QApplication::translate("frmBenutzerVerwaltung", "Hauptmen\303\274", 0));
        label_5->setText(QApplication::translate("frmBenutzerVerwaltung", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Benutzer Verwaltung</span></p></body></html>", 0));
        pbBeenden->setText(QApplication::translate("frmBenutzerVerwaltung", "Beenden", 0));
        label->setText(QApplication::translate("frmBenutzerVerwaltung", "Jahrgang:", 0));
        label_2->setText(QApplication::translate("frmBenutzerVerwaltung", "Name:", 0));
        pbSuchen->setText(QApplication::translate("frmBenutzerVerwaltung", "Suchen", 0));
        pbBearbeiten->setText(QApplication::translate("frmBenutzerVerwaltung", "bearbeiten", 0));
        pbLoeschen->setText(QApplication::translate("frmBenutzerVerwaltung", "l\303\266schen", 0));
        pbBenutzerAnlegen->setText(QApplication::translate("frmBenutzerVerwaltung", "bearbeiten", 0));
    } // retranslateUi

};

namespace Ui {
    class frmBenutzerVerwaltung: public Ui_frmBenutzerVerwaltung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMBENUTZERVERWALTUNG_H
