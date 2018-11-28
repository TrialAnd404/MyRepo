#include "benutzerkontrolle.h"

/*
 * Standardkonstruktor BenutzerKontrolle
 * Autor: Lars
 */
BenutzerKontrolle::BenutzerKontrolle()
{
    this->dbConnector = SQLQuery::getDBConnector();
}

/*
 * Destruktor BenutzerKontrolle
 * Autor: Lars
 */
BenutzerKontrolle::~BenutzerKontrolle()
{

}

/*
 * Update der Daten eines Benutzers in der Datenbank
 * Autor: Lars
 */
bool BenutzerKontrolle::updateBenutzer(Benutzer *_benutzer)
{
    this->dbConnector->dbUpdateBenutzer(_benutzer, _benutzer->getID());
}

/*
 * Erstellen eines Benutzerobjektes und Hinzufügen in die Datenbank
 * Autor: Lars
 */
bool BenutzerKontrolle::addBenutzer(QString _vorname, QString _nachname, OrgEinheit *_oe, QString _nutzername, QString _passwort, bool _admin, bool _deaktiviert)
{
    Benutzer* neu = new Benutzer();
    bool erfolg;
    neu->setVorname(_vorname);
    neu->setNachname(_nachname);
    neu->setNutzername(_nutzername);
    neu->setPasswort(_passwort);
    neu->setJahrgang(_oe);
    neu->setAdmin(_admin);
    neu->setDeaktiviert(_deaktiviert);
    erfolg = this->dbConnector->dbInsertBenutzer(neu);
    return erfolg;
}

/*
 * Holen der Benutzer einer OrgEinheit aus der Datenbank
 * Autor: Lars
 */
QVector<Benutzer *> BenutzerKontrolle::holeBenutzer(OrgEinheit* _oe)
{
    return this->dbConnector->dbSelectBenutzer("OrgEinheit", QString::number(_oe->getID()));
}

/*
 * Holen aller Admins aus der Datenbank
 * Autor: Lars
 */
QVector<Benutzer *> BenutzerKontrolle::holeAdmin()
{
    return this->dbConnector->dbSelectBenutzer("Admin", QString::number(1));
}

/*
 * Holen aller OrgEinheiten aus der Datenbank
 * Autor: Lars
 */
QVector<OrgEinheit *> BenutzerKontrolle::holeOE()
{
    return this->dbConnector->dbSelectOrgEinheit();
}

/*
 * Loeschen eines Benutzers in der Datenbank
 * Autor: Lars
 */
bool BenutzerKontrolle::loescheBenutzer(Benutzer *_ben)
{
    return this->dbConnector->dbDelete("tblBenutzerStandard", _ben->getID());
}


