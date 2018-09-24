/********************************************************************************
** Form generated from reading UI file 'frmmain.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QWidget *centralWidget;
    QPushButton *pbStarten;
    QLabel *label;
    QLineEdit *ldtBenutzername;
    QPushButton *pbLogin;
    QLineEdit *ldtPasswort;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuZitat_Erfassung;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QStringLiteral("frmMain"));
        frmMain->setWindowModality(Qt::NonModal);
        frmMain->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frmMain->sizePolicy().hasHeightForWidth());
        frmMain->setSizePolicy(sizePolicy);
        frmMain->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(frmMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pbStarten = new QPushButton(centralWidget);
        pbStarten->setObjectName(QStringLiteral("pbStarten"));
        pbStarten->setGeometry(QRect(1020, 30, 101, 111));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, 200, 81, 16));
        ldtBenutzername = new QLineEdit(centralWidget);
        ldtBenutzername->setObjectName(QStringLiteral("ldtBenutzername"));
        ldtBenutzername->setGeometry(QRect(490, 200, 113, 20));
        pbLogin = new QPushButton(centralWidget);
        pbLogin->setObjectName(QStringLiteral("pbLogin"));
        pbLogin->setGeometry(QRect(510, 280, 75, 23));
        ldtPasswort = new QLineEdit(centralWidget);
        ldtPasswort->setObjectName(QStringLiteral("ldtPasswort"));
        ldtPasswort->setGeometry(QRect(490, 240, 113, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 240, 81, 16));
        frmMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(frmMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 21));
        menuZitat_Erfassung = new QMenu(menuBar);
        menuZitat_Erfassung->setObjectName(QStringLiteral("menuZitat_Erfassung"));
        frmMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(frmMain);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        frmMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(frmMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        frmMain->setStatusBar(statusBar);

        menuBar->addAction(menuZitat_Erfassung->menuAction());

        retranslateUi(frmMain);

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QMainWindow *frmMain)
    {
        frmMain->setWindowTitle(QApplication::translate("frmMain", "frmMain", 0));
        pbStarten->setText(QApplication::translate("frmMain", "Starten", 0));
        label->setText(QApplication::translate("frmMain", "Benutzername:", 0));
        pbLogin->setText(QApplication::translate("frmMain", "Login", 0));
        label_2->setText(QApplication::translate("frmMain", "Passwort:", 0));
        menuZitat_Erfassung->setTitle(QApplication::translate("frmMain", "Zitat Erfassung", 0));
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
