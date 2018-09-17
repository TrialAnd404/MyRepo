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
    benutzer.cpp \
    zitat.cpp \
    orgeinheit.cpp \
    meldung.cpp \
    admin.cpp

HEADERS  += frmmain.h \
    hauptmenueuser.h \
    hauptmenueadmin.h \
    benutzereinstellungen.h \
    benutzer.h \
    zitat.h \
    orgeinheit.h \
    meldung.h \
    admin.h

FORMS    += frmmain.ui \
    hauptmenueuser.ui \
    hauptmenueadmin.ui \
    benutzereinstellungen.ui