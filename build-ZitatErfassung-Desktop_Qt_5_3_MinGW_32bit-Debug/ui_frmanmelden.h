/********************************************************************************
** Form generated from reading UI file 'frmanmelden.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMANMELDEN_H
#define UI_FRMANMELDEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_frmAnmelden
{
public:
    QLabel *label_2;
    QLineEdit *ldtBenutzername;
    QLabel *label;
    QLineEdit *ldtPasswort;
    QPushButton *pbLogin;

    void setupUi(QDialog *frmAnmelden)
    {
        if (frmAnmelden->objectName().isEmpty())
            frmAnmelden->setObjectName(QStringLiteral("frmAnmelden"));
        frmAnmelden->resize(400, 300);
        label_2 = new QLabel(frmAnmelden);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 120, 81, 16));
        ldtBenutzername = new QLineEdit(frmAnmelden);
        ldtBenutzername->setObjectName(QStringLiteral("ldtBenutzername"));
        ldtBenutzername->setGeometry(QRect(190, 80, 113, 20));
        label = new QLabel(frmAnmelden);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 80, 81, 16));
        ldtPasswort = new QLineEdit(frmAnmelden);
        ldtPasswort->setObjectName(QStringLiteral("ldtPasswort"));
        ldtPasswort->setGeometry(QRect(190, 120, 113, 20));
        pbLogin = new QPushButton(frmAnmelden);
        pbLogin->setObjectName(QStringLiteral("pbLogin"));
        pbLogin->setGeometry(QRect(210, 160, 75, 23));

        retranslateUi(frmAnmelden);

        QMetaObject::connectSlotsByName(frmAnmelden);
    } // setupUi

    void retranslateUi(QDialog *frmAnmelden)
    {
        frmAnmelden->setWindowTitle(QApplication::translate("frmAnmelden", "Dialog", 0));
        label_2->setText(QApplication::translate("frmAnmelden", "Passwort:", 0));
        label->setText(QApplication::translate("frmAnmelden", "Benutzername:", 0));
        pbLogin->setText(QApplication::translate("frmAnmelden", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class frmAnmelden: public Ui_frmAnmelden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMANMELDEN_H
