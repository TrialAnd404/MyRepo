/********************************************************************************
** Form generated from reading UI file 'hauptmenueadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAUPTMENUEADMIN_H
#define UI_HAUPTMENUEADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HauptmenueAdmin
{
public:
    QPushButton *pbZitatEintragen;
    QPushButton *pbZitatAnzeigen;
    QPushButton *pbBenutzerEinstellungen;
    QPushButton *pbAbmelden;
    QFrame *line;
    QFrame *line_2;
    QLabel *label;
    QPushButton *pbBeenden;
    QPushButton *pbZitatVerwalten;
    QPushButton *pbJahrgaengeVerwalten;
    QPushButton *pbBenutzerVerwaltung;

    void setupUi(QDialog *HauptmenueAdmin)
    {
        if (HauptmenueAdmin->objectName().isEmpty())
            HauptmenueAdmin->setObjectName(QStringLiteral("HauptmenueAdmin"));
        HauptmenueAdmin->resize(400, 224);
        pbZitatEintragen = new QPushButton(HauptmenueAdmin);
        pbZitatEintragen->setObjectName(QStringLiteral("pbZitatEintragen"));
        pbZitatEintragen->setGeometry(QRect(60, 60, 131, 23));
        pbZitatAnzeigen = new QPushButton(HauptmenueAdmin);
        pbZitatAnzeigen->setObjectName(QStringLiteral("pbZitatAnzeigen"));
        pbZitatAnzeigen->setGeometry(QRect(60, 100, 131, 23));
        pbBenutzerEinstellungen = new QPushButton(HauptmenueAdmin);
        pbBenutzerEinstellungen->setObjectName(QStringLiteral("pbBenutzerEinstellungen"));
        pbBenutzerEinstellungen->setGeometry(QRect(60, 140, 131, 23));
        pbAbmelden = new QPushButton(HauptmenueAdmin);
        pbAbmelden->setObjectName(QStringLiteral("pbAbmelden"));
        pbAbmelden->setGeometry(QRect(0, 194, 131, 31));
        line = new QFrame(HauptmenueAdmin);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 176, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(HauptmenueAdmin);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 25, 401, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label = new QLabel(HauptmenueAdmin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 111, 16));
        pbBeenden = new QPushButton(HauptmenueAdmin);
        pbBeenden->setObjectName(QStringLiteral("pbBeenden"));
        pbBeenden->setGeometry(QRect(270, 194, 131, 31));
        pbZitatVerwalten = new QPushButton(HauptmenueAdmin);
        pbZitatVerwalten->setObjectName(QStringLiteral("pbZitatVerwalten"));
        pbZitatVerwalten->setGeometry(QRect(200, 60, 131, 23));
        pbJahrgaengeVerwalten = new QPushButton(HauptmenueAdmin);
        pbJahrgaengeVerwalten->setObjectName(QStringLiteral("pbJahrgaengeVerwalten"));
        pbJahrgaengeVerwalten->setGeometry(QRect(200, 100, 131, 23));
        pbBenutzerVerwaltung = new QPushButton(HauptmenueAdmin);
        pbBenutzerVerwaltung->setObjectName(QStringLiteral("pbBenutzerVerwaltung"));
        pbBenutzerVerwaltung->setGeometry(QRect(200, 140, 131, 23));

        retranslateUi(HauptmenueAdmin);

        QMetaObject::connectSlotsByName(HauptmenueAdmin);
    } // setupUi

    void retranslateUi(QDialog *HauptmenueAdmin)
    {
        HauptmenueAdmin->setWindowTitle(QApplication::translate("HauptmenueAdmin", "Dialog", 0));
        pbZitatEintragen->setText(QApplication::translate("HauptmenueAdmin", "Zitat eintragen", 0));
        pbZitatAnzeigen->setText(QApplication::translate("HauptmenueAdmin", "Zitat anzeigen", 0));
        pbBenutzerEinstellungen->setText(QApplication::translate("HauptmenueAdmin", "Benutzereinstellungen", 0));
        pbAbmelden->setText(QApplication::translate("HauptmenueAdmin", "Abmelden", 0));
        label->setText(QApplication::translate("HauptmenueAdmin", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Hauptmen\303\274</span></p></body></html>", 0));
        pbBeenden->setText(QApplication::translate("HauptmenueAdmin", "Beenden", 0));
        pbZitatVerwalten->setText(QApplication::translate("HauptmenueAdmin", "Zitat verwalten", 0));
        pbJahrgaengeVerwalten->setText(QApplication::translate("HauptmenueAdmin", "Jahrg\303\244nge verwalten", 0));
        pbBenutzerVerwaltung->setText(QApplication::translate("HauptmenueAdmin", "Benutzerverwaltung", 0));
    } // retranslateUi

};

namespace Ui {
    class HauptmenueAdmin: public Ui_HauptmenueAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAUPTMENUEADMIN_H
