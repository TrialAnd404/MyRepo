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
    hauptmenueuser.cpp \
    hauptmenueadmin.cpp \
    benutzereinstellungen.cpp \
    benutzer.cpp \
    zitat.cpp \
    orgeinheit.cpp \
    meldung.cpp \
    admin.cpp \
    frmbenutzerverwaltung.cpp \
    zitateintragen.cpp \
    frmanmelden.cpp \
    frmzitatanzeigen.cpp \
    frmzitatverwalten.cpp \
    frmjahrgaengeverwalten.cpp \
    userlogin.cpp \
    checkvalidentry.cpp \
    zitatkontrolle.cpp \
    sessioninfo.cpp \
    sqlquery.cpp

HEADERS  += frmmain.h \
    hauptmenueuser.h \
    hauptmenueadmin.h \
    benutzereinstellungen.h \
    benutzer.h \
    zitat.h \
    orgeinheit.h \
    meldung.h \
    admin.h \
    frmbenutzerverwaltung.h \
    zitateintragen.h \
    frmanmelden.h \
    frmzitatanzeigen.h \
    frmzitatverwalten.h \
    frmjahrgaengeverwalten.h \
    userlogin.h \
    checkvalidentry.h \
    zitatkontrolle.h \
    sessioninfo.h


FORMS    += frmmain.ui \
    hauptmenueuser.ui \
    hauptmenueadmin.ui \
    benutzereinstellungen.ui \
    zitateintragen.ui \
    frmanmelden.ui \
    frmzitatanzeigen.ui \
    frmzitatverwalten.ui \
    frmjahrgaengeverwalten.ui \
    frmbenutzerverwaltung.ui
