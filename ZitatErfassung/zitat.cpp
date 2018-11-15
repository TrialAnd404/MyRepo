#include "zitat.h"

/*
 * Standardkonstruktor
 * Autor: Lars
 */
Zitat::Zitat()
{

}

/*
 * Konstruktor
 * Autor: Lars
 */
Zitat::Zitat(int p_id, QString p_redner, QString p_inhalt, OrgEinheit* p_kurs_jahrgang, QDate p_datum, Benutzer* p_eingetragenVon)
{
    this->id = p_id;
    this->redner = p_redner;
    this->inhalt = p_inhalt;
    this->orgEinheit = p_kurs_jahrgang;
    this->datum = p_datum;
    this->eingetragenVon = p_eingetragenVon;
}

/*
 * Destruktor
 * Autor: Lars
 */
Zitat::~Zitat()
{

}

/*
 * Setter und Getter
 * Autor: Lars
 */
int Zitat::getID()
{
    return this->id;
}

void Zitat::setID(int p_id)
{
    this->id = p_id;
}

QString Zitat::getRedner()
{
    return this->redner;
}

void Zitat::setRedner(QString p_redner)
{
    this->redner = p_redner;
}

QString Zitat::getInhalt()
{
    return this->inhalt;
}

void Zitat::setInhalt(QString p_inhalt)
{
    this->inhalt = p_inhalt;
}

OrgEinheit *Zitat::getOrgEinheit()
{
    return this->orgEinheit;
}

void Zitat::setOrgEinheit(OrgEinheit *p_orgEinheit)
{
    this->orgEinheit = p_orgEinheit;
}

QDate Zitat::getDatum()
{
    return this->datum;
}

void Zitat::setDatum(QDate p_datum)
{
    this->datum = p_datum;
}

Benutzer *Zitat::getEingetragenVon()
{
    return this->eingetragenVon;
}

void Zitat::setEingetragenVon(Benutzer *p_eingetragenVon)
{
    this->eingetragenVon = p_eingetragenVon;
}

QVector<Benutzer *> Zitat::getUpvote()
{
    return this->upvote;
}

void Zitat::setUpvote(QVector<Benutzer *> p_upvote)
{
    this->upvote = p_upvote;
}

QVector<Benutzer *> Zitat::getDownvote()
{
    return this->downvote;
}

void Zitat::setDownvote(QVector<Benutzer *> p_downvote)
{
    this->downvote = p_downvote;
}
