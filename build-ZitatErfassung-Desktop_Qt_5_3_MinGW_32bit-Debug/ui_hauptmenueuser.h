/********************************************************************************
** Form generated from reading UI file 'hauptmenueuser.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAUPTMENUEUSER_H
#define UI_HAUPTMENUEUSER_H

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

class Ui_HauptmenueUser
{
public:
    QLabel *label;
    QPushButton *pbBeenden;
    QPushButton *pbZitatEintragen;
    QPushButton *pbZitatAnzeigen;
    QPushButton *pbBenutzerEinstellungen;
    QFrame *line_2;
    QPushButton *pbAbmelden;
    QFrame *line;

    void setupUi(QDialog *HauptmenueUser)
    {
        if (HauptmenueUser->objectName().isEmpty())
            HauptmenueUser->setObjectName(QStringLiteral("HauptmenueUser"));
        HauptmenueUser->resize(400, 214);
        label = new QLabel(HauptmenueUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 0, 111, 16));
        pbBeenden = new QPushButton(HauptmenueUser);
        pbBeenden->setObjectName(QStringLiteral("pbBeenden"));
        pbBeenden->setGeometry(QRect(270, 184, 131, 31));
        pbZitatEintragen = new QPushButton(HauptmenueUser);
        pbZitatEintragen->setObjectName(QStringLiteral("pbZitatEintragen"));
        pbZitatEintragen->setGeometry(QRect(130, 40, 131, 23));
        pbZitatAnzeigen = new QPushButton(HauptmenueUser);
        pbZitatAnzeigen->setObjectName(QStringLiteral("pbZitatAnzeigen"));
        pbZitatAnzeigen->setGeometry(QRect(130, 80, 131, 23));
        pbBenutzerEinstellungen = new QPushButton(HauptmenueUser);
        pbBenutzerEinstellungen->setObjectName(QStringLiteral("pbBenutzerEinstellungen"));
        pbBenutzerEinstellungen->setGeometry(QRect(130, 120, 131, 23));
        line_2 = new QFrame(HauptmenueUser);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 15, 401, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pbAbmelden = new QPushButton(HauptmenueUser);
        pbAbmelden->setObjectName(QStringLiteral("pbAbmelden"));
        pbAbmelden->setGeometry(QRect(0, 184, 131, 31));
        line = new QFrame(HauptmenueUser);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 166, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(HauptmenueUser);

        QMetaObject::connectSlotsByName(HauptmenueUser);
    } // setupUi

    void retranslateUi(QDialog *HauptmenueUser)
    {
        HauptmenueUser->setWindowTitle(QApplication::translate("HauptmenueUser", "Dialog", 0));
        label->setText(QApplication::translate("HauptmenueUser", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Hauptmen\303\274</span></p></body></html>", 0));
        pbBeenden->setText(QApplication::translate("HauptmenueUser", "Beenden", 0));
        pbZitatEintragen->setText(QApplication::translate("HauptmenueUser", "Zitat eintragen", 0));
        pbZitatAnzeigen->setText(QApplication::translate("HauptmenueUser", "Zitat anzeigen", 0));
        pbBenutzerEinstellungen->setText(QApplication::translate("HauptmenueUser", "Benutzereinstellungen", 0));
        pbAbmelden->setText(QApplication::translate("HauptmenueUser", "Abmelden", 0));
    } // retranslateUi

};

namespace Ui {
    class HauptmenueUser: public Ui_HauptmenueUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAUPTMENUEUSER_H
