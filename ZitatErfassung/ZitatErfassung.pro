#-------------------------------------------------
#
# Project created by QtCreator 2018-09-11T14:03:59
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZitatErfassung
TEMPLATE = app


SOURCES += main.cpp\
        frmmain.cpp \
    benutzer.cpp \
    zitat.cpp \
    orgeinheit.cpp \
    meldung.cpp \
    frmbenutzerverwaltung.cpp \
    frmanmelden.cpp \
    frmzitatanzeigen.cpp \
    frmzitatverwalten.cpp \
    frmjahrgaengeverwalten.cpp \
    userlogin.cpp \
    checkvalidentry.cpp \
    zitatkontrolle.cpp \
    sessioninfo.cpp \
    sqlquery.cpp \
    orgeinheitkontrolle.cpp \
    frmhauptmenueadmin.cpp \
    frmhauptmenueuser.cpp \
    frmzitateintragen.cpp \
    frmbenutzereinstellungen.cpp \
    benutzerkontrolle.cpp \
    frmmeldezitat.cpp \
    meldungkontrolle.cpp \
    frmzitataendern.cpp \
    frmjahrgangaendern.cpp \
    frmbenutzeraendern.cpp \
    frmmeldunganzeigen.cpp \
    frmbenutzerimport.cpp

HEADERS  += frmmain.h \
    benutzer.h \
    zitat.h \
    orgeinheit.h \
    meldung.h \
    frmbenutzerverwaltung.h \
    frmanmelden.h \
    frmzitatanzeigen.h \
    frmzitatverwalten.h \
    frmjahrgaengeverwalten.h \
    userlogin.h \
    checkvalidentry.h \
    zitatkontrolle.h \
    sessioninfo.h \
    sqlquery.h \
    orgeinheitkontrolle.h \
    frmhauptmenueadmin.h \
    frmhauptmenueuser.h \
    frmzitateintragen.h \
    frmbenutzereinstellungen.h \
    benutzerkontrolle.h \
    frmmeldezitat.h \
    meldungkontrolle.h \
    frmzitataendern.h \
    frmjahrgangaendern.h \
    frmbenutzeraendern.h \
    frmmeldunganzeigen.h \
    frmbenutzerimport.h


FORMS    += frmmain.ui \
    frmanmelden.ui \
    frmzitatanzeigen.ui \
    frmzitatverwalten.ui \
    frmjahrgaengeverwalten.ui \
    frmbenutzerverwaltung.ui \
    frmhauptmenueadmin.ui \
    frmhauptmenueuser.ui \
    frmzitateintragen.ui \
    frmbenutzereinstellungen.ui \
    frmmeldezitat.ui \
    frmzitataendern.ui \
    frmjahrgangaendern.ui \
    frmbenutzeraendern.ui \
    frmmeldunganzeigen.ui \
    frmbenutzerimport.ui
