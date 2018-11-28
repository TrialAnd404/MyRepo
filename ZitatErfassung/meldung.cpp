#include "meldung.h"

/*
 * Standardkonstruktor
 * Autor: Lars
 */
Meldung::Meldung()
{

}

/*
 * Konstruktor
 * Autor: Lars
 */
Meldung::Meldung(int p_id, Zitat* p_zitat, QString p_grund, Benutzer* p_sender)
{
    this->id = p_id;
    this->zitat = p_zitat;
    this->grund = p_grund;
    this->sender = p_sender;
}

/*
 * Destruktor
 * Autor: Lars
 */
Meldung::~Meldung()
{

}

/*
 * Setter und Getter
 * Autor: Lars
 */
int Meldung::getID()
{
    return this->id;
}

void Meldung::setID(int p_id)
{
    this->id = p_id;
}

Zitat *Meldung::getZitat()
{
    return this->zitat;
}

void Meldung::setZitat(Zitat *p_zitat)
{
    this->zitat = p_zitat;
}

QString Meldung::getGrund()
{
    return this->grund;
}

void Meldung::setGrund(QString p_grund)
{
    this->grund = p_grund;
}

Benutzer *Meldung::getSender()
{
    return this->sender;
}

void Meldung::setSender(Benutzer *p_sender)
{
    this->sender = p_sender;
}
