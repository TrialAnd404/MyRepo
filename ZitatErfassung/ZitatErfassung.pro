#-------------------------------------------------
#
# Project created by QtCreator 2018-09-11T14:03:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZitatErfassung
TEMPLATE = app


SOURCES += main.cpp\
        frmmain.cpp \
    hauptmenueuser.cpp \
    hauptmenueadmin.cpp \
    benutzereinstellungen.cpp \
    zitateintragen.cpp \
    frmanmelden.cpp \
    frmzitatanzeigen.cpp \
    frmzitatverwalten.cpp \
    frmjahrgaengeverwalten.cpp \
    frmbenutzerverwaltung.cpp \
    userlogin.cpp

HEADERS  += frmmain.h \
    hauptmenueuser.h \
    hauptmenueadmin.h \
    benutzereinstellungen.h \
    zitateintragen.h \
    frmanmelden.h \
    frmzitatanzeigen.h \
    frmzitatverwalten.h \
    frmjahrgaengeverwalten.h \
    frmbenutzerverwaltung.h \
    userlogin.h

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
