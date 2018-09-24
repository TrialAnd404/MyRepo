#include "benutzer.h"

Benutzer::Benutzer(QString p_nutzername, QString p_passwort, QString p_vorname, QString p_nachname)
{
    this->nutzername = p_nutzername;
    this->passwort = p_passwort;
    this->vorname = p_vorname;
    this->nachname = p_nachname;
}

int Benutzer::getID()
{
    return this->id;
}

void Benutzer::setID(int p_id)
{
    this->id = p_id;
}

QString Benutzer::getNutzername()
{
    return this->nutzername;
}

void Benutzer::setNutzername(QString p_nutzername)
{
    this->nutzername = p_nutzername;
}

QString Benutzer::getPasswort()
{
    return this->getPasswort();
}

void Benutzer::setPasswort(QString p_passwort)
{
    this->passwort = p_passwort;
}

QString Benutzer::getVorname()
{
    return this->vorname;
}

void Benutzer::setVorname(QString p_vorname)
{
    this->vorname = p_vorname;
}

QString Benutzer::getNachname()
{
    return this->nachname;
}

void Benutzer::setNachname(QString p_nachname)
{
    this->nachname = p_nachname;
}

OrgEinheit Benutzer::getJahrgang()
{
    return this->jahrgang;
}

void Benutzer::setJahrgang(OrgEinheit p_jahrgang)
{
    this->jahrgang = p_jahrgang;
}

/*
QVector<Zitat*> Benutzer::getEingetrageneZitate()
{
    return this->eingetrageneZitate;
}

void Benutzer::setEingetrageneZitate(QVector<Zitat*> p_eingetrageneZitate)
{
    this->eingetrageneZitate = p_eingetrageneZitate;
}

QVector<Zitat*> Benutzer::getUpvote()
{
    return this->upvote;
}

void Benutzer::setUpvote(QVector<Zitat*> p_upvote)
{
    this->upvote = p_upvote;
}

QVector<Zitat*> Benutzer::getDownvote()
{
    return this->downvote;
}

void Benutzer::setDownvote(QVector<Zitat*> p_downvote)
{
    this->downvote = p_downvote;
}

*/
