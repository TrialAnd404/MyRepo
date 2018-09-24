/********************************************************************************
** Form generated from reading UI file 'zitateintragen.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZITATEINTRAGEN_H
#define UI_ZITATEINTRAGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ZitatEintragen
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QDateEdit *dateEdit;
    QComboBox *comboBox;
    QFrame *line_2;
    QLabel *label_5;
    QPushButton *pbMenue;
    QFrame *line;
    QPushButton *pbBeenden;
    QPushButton *pbSpeichern;

    void setupUi(QDialog *ZitatEintragen)
    {
        if (ZitatEintragen->objectName().isEmpty())
            ZitatEintragen->setObjectName(QStringLiteral("ZitatEintragen"));
        ZitatEintragen->resize(398, 367);
        ZitatEintragen->setMinimumSize(QSize(398, 367));
        ZitatEintragen->setMaximumSize(QSize(398, 367));
        label = new QLabel(ZitatEintragen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 60, 46, 13));
        label_2 = new QLabel(ZitatEintragen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 46, 13));
        label_3 = new QLabel(ZitatEintragen);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 123, 46, 13));
        label_4 = new QLabel(ZitatEintragen);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 153, 46, 13));
        lineEdit = new QLineEdit(ZitatEintragen);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 60, 113, 20));
        lineEdit_2 = new QLineEdit(ZitatEintragen);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 90, 113, 20));
        dateEdit = new QDateEdit(ZitatEintragen);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(160, 120, 110, 22));
        comboBox = new QComboBox(ZitatEintragen);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 150, 111, 22));
        line_2 = new QFrame(ZitatEintragen);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 15, 401, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(ZitatEintragen);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 0, 141, 16));
        pbMenue = new QPushButton(ZitatEintragen);
        pbMenue->setObjectName(QStringLiteral("pbMenue"));
        pbMenue->setGeometry(QRect(0, 340, 131, 31));
        line = new QFrame(ZitatEintragen);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 321, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pbBeenden = new QPushButton(ZitatEintragen);
        pbBeenden->setObjectName(QStringLiteral("pbBeenden"));
        pbBeenden->setGeometry(QRect(270, 340, 131, 31));
        pbSpeichern = new QPushButton(ZitatEintragen);
        pbSpeichern->setObjectName(QStringLiteral("pbSpeichern"));
        pbSpeichern->setGeometry(QRect(160, 180, 111, 23));
        QIcon icon;
        icon.addFile(QStringLiteral("Bilder/Download.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSpeichern->setIcon(icon);

        retranslateUi(ZitatEintragen);

        QMetaObject::connectSlotsByName(ZitatEintragen);
    } // setupUi

    void retranslateUi(QDialog *ZitatEintragen)
    {
        ZitatEintragen->setWindowTitle(QApplication::translate("ZitatEintragen", "Dialog", 0));
        label->setText(QApplication::translate("ZitatEintragen", "Zitat:", 0));
        label_2->setText(QApplication::translate("ZitatEintragen", "Redner:", 0));
        label_3->setText(QApplication::translate("ZitatEintragen", "Datum:", 0));
        label_4->setText(QApplication::translate("ZitatEintragen", "Kurs:", 0));
        label_5->setText(QApplication::translate("ZitatEintragen", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Zitat eintragen</span></p></body></html>", 0));
        pbMenue->setText(QApplication::translate("ZitatEintragen", "Hauptmen\303\274", 0));
        pbBeenden->setText(QApplication::translate("ZitatEintragen", "Beenden", 0));
        pbSpeichern->setText(QApplication::translate("ZitatEintragen", "Speichern", 0));
    } // retranslateUi

};

namespace Ui {
    class ZitatEintragen: public Ui_ZitatEintragen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZITATEINTRAGEN_H
