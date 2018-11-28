#include "benutzer.h"

/*
 * Standardkonstruktor Benutzer
 * Autor: Lars
 */
Benutzer::Benutzer()
{

}

/*
 * Konstruktor Benutzer
 * Autor: Lars
 */
Benutzer::Benutzer(QString p_nutzername, QString p_passwort, QString p_vorname, QString p_nachname, OrgEinheit* p_jahrgang)
{
    this->nutzername = p_nutzername;
    this->passwort = p_passwort;
    this->vorname = p_vorname;
    this->nachname = p_nachname;
    this->jahrgang = p_jahrgang;
}

/*
 * Destruktor BenutzerKontrolle
 * Autor: Lars
 */
Benutzer::~Benutzer()
{

}

/*
 * Setter und Getter Benutzer
 * Autor: Lars
 */
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
    return this->passwort;
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

OrgEinheit* Benutzer::getJahrgang()
{
    return this->jahrgang;
}

void Benutzer::setJahrgang(OrgEinheit* p_jahrgang)
{
    this->jahrgang = p_jahrgang;
}

bool Benutzer::getAdmin()
{
    return this->admin;
}

void Benutzer::setAdmin(bool p_admin)
{
    this->admin = p_admin;
}

bool Benutzer::getDeaktiviert()
{
    return this->deaktiviert;
}

void Benutzer::setDeaktiviert(bool p_deaktiviert)
{
    this->deaktiviert = p_deaktiviert;
}
