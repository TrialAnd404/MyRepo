/********************************************************************************
** Form generated from reading UI file 'frmjahrgaengeverwalten.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMJAHRGAENGEVERWALTEN_H
#define UI_FRMJAHRGAENGEVERWALTEN_H

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

class Ui_frmJahrgaengeVerwalten
{
public:
    QFrame *line_2;
    QLabel *label_5;
    QPushButton *pbBeenden;
    QPushButton *pbMenue;
    QFrame *line;
    QLabel *label;
    QLineEdit *ldtJahrgangHinzu;
    QPushButton *pbJahrgangHinzu;
    QLabel *label_2;
    QComboBox *cmbJahrgang;
    QListWidget *listWidget;
    QPushButton *pbSpeichern;
    QPushButton *pbLoeschen;
    QLabel *label_3;
    QPushButton *pbKursHinzu;
    QLineEdit *ldtKursHinzu;

    void setupUi(QDialog *frmJahrgaengeVerwalten)
    {
        if (frmJahrgaengeVerwalten->objectName().isEmpty())
            frmJahrgaengeVerwalten->setObjectName(QStringLiteral("frmJahrgaengeVerwalten"));
        frmJahrgaengeVerwalten->resize(400, 526);
        line_2 = new QFrame(frmJahrgaengeVerwalten);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 14, 401, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(frmJahrgaengeVerwalten);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 0, 181, 16));
        pbBeenden = new QPushButton(frmJahrgaengeVerwalten);
        pbBeenden->setObjectName(QStringLiteral("pbBeenden"));
        pbBeenden->setGeometry(QRect(270, 499, 131, 31));
        pbMenue = new QPushButton(frmJahrgaengeVerwalten);
        pbMenue->setObjectName(QStringLiteral("pbMenue"));
        pbMenue->setGeometry(QRect(0, 499, 131, 31));
        line = new QFrame(frmJahrgaengeVerwalten);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 480, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(frmJahrgaengeVerwalten);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 111, 16));
        ldtJahrgangHinzu = new QLineEdit(frmJahrgaengeVerwalten);
        ldtJahrgangHinzu->setObjectName(QStringLiteral("ldtJahrgangHinzu"));
        ldtJahrgangHinzu->setGeometry(QRect(150, 50, 161, 20));
        pbJahrgangHinzu = new QPushButton(frmJahrgaengeVerwalten);
        pbJahrgangHinzu->setObjectName(QStringLiteral("pbJahrgangHinzu"));
        pbJahrgangHinzu->setGeometry(QRect(150, 80, 161, 23));
        label_2 = new QLabel(frmJahrgaengeVerwalten);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 111, 16));
        cmbJahrgang = new QComboBox(frmJahrgaengeVerwalten);
        cmbJahrgang->setObjectName(QStringLiteral("cmbJahrgang"));
        cmbJahrgang->setGeometry(QRect(150, 120, 161, 22));
        listWidget = new QListWidget(frmJahrgaengeVerwalten);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 160, 291, 211));
        pbSpeichern = new QPushButton(frmJahrgaengeVerwalten);
        pbSpeichern->setObjectName(QStringLiteral("pbSpeichern"));
        pbSpeichern->setGeometry(QRect(40, 380, 111, 23));
        pbLoeschen = new QPushButton(frmJahrgaengeVerwalten);
        pbLoeschen->setObjectName(QStringLiteral("pbLoeschen"));
        pbLoeschen->setGeometry(QRect(180, 380, 111, 23));
        label_3 = new QLabel(frmJahrgaengeVerwalten);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 422, 111, 16));
        pbKursHinzu = new QPushButton(frmJahrgaengeVerwalten);
        pbKursHinzu->setObjectName(QStringLiteral("pbKursHinzu"));
        pbKursHinzu->setGeometry(QRect(180, 450, 111, 23));
        ldtKursHinzu = new QLineEdit(frmJahrgaengeVerwalten);
        ldtKursHinzu->setObjectName(QStringLiteral("ldtKursHinzu"));
        ldtKursHinzu->setGeometry(QRect(130, 420, 161, 20));

        retranslateUi(frmJahrgaengeVerwalten);

        QMetaObject::connectSlotsByName(frmJahrgaengeVerwalten);
    } // setupUi

    void retranslateUi(QDialog *frmJahrgaengeVerwalten)
    {
        frmJahrgaengeVerwalten->setWindowTitle(QApplication::translate("frmJahrgaengeVerwalten", "Dialog", 0));
        label_5->setText(QApplication::translate("frmJahrgaengeVerwalten", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Jahrg\303\244nge verwalten</span></p></body></html>", 0));
        pbBeenden->setText(QApplication::translate("frmJahrgaengeVerwalten", "Beenden", 0));
        pbMenue->setText(QApplication::translate("frmJahrgaengeVerwalten", "Hauptmen\303\274", 0));
        label->setText(QApplication::translate("frmJahrgaengeVerwalten", "Jahrgang hinzuf\303\274gen:", 0));
        pbJahrgangHinzu->setText(QApplication::translate("frmJahrgaengeVerwalten", "Jahrgang hinzuf\303\274gen", 0));
        label_2->setText(QApplication::translate("frmJahrgaengeVerwalten", "Jahrgang:", 0));
        pbSpeichern->setText(QApplication::translate("frmJahrgaengeVerwalten", "Speichern", 0));
        pbLoeschen->setText(QApplication::translate("frmJahrgaengeVerwalten", "L\303\266schen", 0));
        label_3->setText(QApplication::translate("frmJahrgaengeVerwalten", "Kurs hinzuf\303\274gen:", 0));
        pbKursHinzu->setText(QApplication::translate("frmJahrgaengeVerwalten", "Kurs hinzuf\303\274gen", 0));
    } // retranslateUi

};

namespace Ui {
    class frmJahrgaengeVerwalten: public Ui_frmJahrgaengeVerwalten {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMJAHRGAENGEVERWALTEN_H
