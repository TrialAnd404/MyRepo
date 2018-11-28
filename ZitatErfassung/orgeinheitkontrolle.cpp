#include "orgeinheitkontrolle.h"

/*
 * Konstruktor
 * Autor: Lars
 */
OrgEinheitKontrolle::OrgEinheitKontrolle()
{
    this->dbConnector = SQLQuery::getDBConnector();
}

/*
 * Destruktor
 * Autor: Lars
 */
OrgEinheitKontrolle::~OrgEinheitKontrolle()
{

}

/*
 * Holen aller OrgEinheiten aus der Datenbank
 * Autor: Lars
 */
QVector<OrgEinheit *> OrgEinheitKontrolle::holeOeEinheit()
{
    QVector<OrgEinheit*> liste = this->dbConnector->dbSelectOrgEinheit();
    return liste;
}

/*
 * Erstellen und Senden einer OrgEinheit an die Datenbank
 * Autor: Lars
 */
bool OrgEinheitKontrolle::addOE(QString _bezeichnung, QString _jahr)
{
    OrgEinheit* neuOE = new OrgEinheit();
    neuOE->setBezeichnung(_bezeichnung);
    neuOE->setJahr(_jahr);
    return this->dbConnector->dbInsertOrg(neuOE);
}

/*
 * Loeschen einer OrgEinheit
 * Autor: Lars
 */
bool OrgEinheitKontrolle::loescheOE(OrgEinheit *_oe)
{
    return this->dbConnector->dbDelete("tblOrgEinheit", _oe->getID());
}

/*
 * Aendern einer OrgEinheit
 * Autor: Lars
 */
bool OrgEinheitKontrolle::aendereOE(OrgEinheit *_oe)
{
    return this->dbConnector->dbUpdateOrgEinheit(_oe, _oe->getID());
}
