/********************************************************************************
** Form generated from reading UI file 'benutzereinstellungen.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BENUTZEREINSTELLUNGEN_H
#define UI_BENUTZEREINSTELLUNGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BenutzerEinstellungen
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pbSpeichern;
    QLineEdit *ldtNachname;
    QLineEdit *ldtVorname;
    QLineEdit *ldtJahrgang;
    QLineEdit *ldtBenutzertyp;
    QLineEdit *ldtBenutzername;
    QLineEdit *ldtPasswort;
    QPushButton *pbBeenden;
    QPushButton *pbMenue;
    QFrame *line;
    QLabel *label_7;
    QFrame *line_2;

    void setupUi(QDialog *BenutzerEinstellungen)
    {
        if (BenutzerEinstellungen->objectName().isEmpty())
            BenutzerEinstellungen->setObjectName(QStringLiteral("BenutzerEinstellungen"));
        BenutzerEinstellungen->resize(400, 284);
        label = new QLabel(BenutzerEinstellungen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 111, 16));
        label_2 = new QLabel(BenutzerEinstellungen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 111, 16));
        label_3 = new QLabel(BenutzerEinstellungen);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 90, 111, 16));
        label_4 = new QLabel(BenutzerEinstellungen);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 120, 111, 16));
        label_5 = new QLabel(BenutzerEinstellungen);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 150, 111, 16));
        label_6 = new QLabel(BenutzerEinstellungen);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 180, 111, 16));
        pbSpeichern = new QPushButton(BenutzerEinstellungen);
        pbSpeichern->setObjectName(QStringLiteral("pbSpeichern"));
        pbSpeichern->setGeometry(QRect(140, 210, 111, 23));
        ldtNachname = new QLineEdit(BenutzerEinstellungen);
        ldtNachname->setObjectName(QStringLiteral("ldtNachname"));
        ldtNachname->setGeometry(QRect(140, 30, 113, 20));
        ldtVorname = new QLineEdit(BenutzerEinstellungen);
        ldtVorname->setObjectName(QStringLiteral("ldtVorname"));
        ldtVorname->setGeometry(QRect(140, 60, 113, 20));
        ldtJahrgang = new QLineEdit(BenutzerEinstellungen);
        ldtJahrgang->setObjectName(QStringLiteral("ldtJahrgang"));
        ldtJahrgang->setGeometry(QRect(140, 90, 113, 20));
        ldtBenutzertyp = new QLineEdit(BenutzerEinstellungen);
        ldtBenutzertyp->setObjectName(QStringLiteral("ldtBenutzertyp"));
        ldtBenutzertyp->setGeometry(QRect(140, 120, 113, 20));
        ldtBenutzername = new QLineEdit(BenutzerEinstellungen);
        ldtBenutzername->setObjectName(QStringLiteral("ldtBenutzername"));
        ldtBenutzername->setGeometry(QRect(140, 150, 113, 20));
        ldtPasswort = new QLineEdit(BenutzerEinstellungen);
        ldtPasswort->setObjectName(QStringLiteral("ldtPasswort"));
        ldtPasswort->setGeometry(QRect(140, 180, 113, 20));
        pbBeenden = new QPushButton(BenutzerEinstellungen);
        pbBeenden->setObjectName(QStringLiteral("pbBeenden"));
        pbBeenden->setGeometry(QRect(270, 254, 131, 31));
        pbMenue = new QPushButton(BenutzerEinstellungen);
        pbMenue->setObjectName(QStringLiteral("pbMenue"));
        pbMenue->setGeometry(QRect(0, 254, 131, 31));
        line = new QFrame(BenutzerEinstellungen);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 236, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(BenutzerEinstellungen);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 0, 191, 16));
        line_2 = new QFrame(BenutzerEinstellungen);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 20, 401, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(BenutzerEinstellungen);

        QMetaObject::connectSlotsByName(BenutzerEinstellungen);
    } // setupUi

    void retranslateUi(QDialog *BenutzerEinstellungen)
    {
        BenutzerEinstellungen->setWindowTitle(QApplication::translate("BenutzerEinstellungen", "Dialog", 0));
        label->setText(QApplication::translate("BenutzerEinstellungen", "Name:", 0));
        label_2->setText(QApplication::translate("BenutzerEinstellungen", "Vorname:", 0));
        label_3->setText(QApplication::translate("BenutzerEinstellungen", "Jahrgang:", 0));
        label_4->setText(QApplication::translate("BenutzerEinstellungen", "Benutzertyp:", 0));
        label_5->setText(QApplication::translate("BenutzerEinstellungen", "Benutzername:", 0));
        label_6->setText(QApplication::translate("BenutzerEinstellungen", "Passwort:", 0));
        pbSpeichern->setText(QApplication::translate("BenutzerEinstellungen", "Speichern", 0));
        pbBeenden->setText(QApplication::translate("BenutzerEinstellungen", "Beenden", 0));
        pbMenue->setText(QApplication::translate("BenutzerEinstellungen", "Hauptmen\303\274", 0));
        label_7->setText(QApplication::translate("BenutzerEinstellungen", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Benutzereinstellungen</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class BenutzerEinstellungen: public Ui_BenutzerEinstellungen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BENUTZEREINSTELLUNGEN_H
