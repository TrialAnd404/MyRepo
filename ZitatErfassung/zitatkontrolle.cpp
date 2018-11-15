#include "zitatkontrolle.h"

/*
 * Konstruktor
 * Autor: Lars
 */
ZitatKontrolle::ZitatKontrolle()
{
    this->dbConnector = SQLQuery::getDBConnector();
}

/*
 * Destruktor
 * Autor: Lars
 */
ZitatKontrolle::~ZitatKontrolle()
{

}

/*
 * Erstellen und Senden eines Zitates an die Datenbank
 * Autor: Lars
 */
bool ZitatKontrolle::legeZitatAn(QString p_zitat, QString p_redner, QDate p_datum)
{
    Benutzer* nutzer = SessionInfo::getSessionInfo()->getAktNutzer(); // aktueller Benutzer
    OrgEinheit* orgE = nutzer->getJahrgang();
    Zitat* zit = new Zitat();
    zit->setInhalt(p_zitat);
    zit->setRedner(p_redner);
    zit->setDatum(p_datum);
    zit->setOrgEinheit(orgE);
    zit->setEingetragenVon(nutzer);
    return this->dbConnector->dbInsertZitat(zit);
}

/*
 * Holen der Zitate aus der Datenbank
 * Autor: Lars
 */
QVector<Zitat*> ZitatKontrolle::holeZitate(OrgEinheit *p_jahrgang)
{
    int orgID = p_jahrgang->getID();
    return dbConnector->dbSelectZitat("OrgEinheit", QString::number(orgID));
}

/*
 * Loeschen eines Zitates
 * Autor: Lars
 */
bool ZitatKontrolle::loescheZitat(Zitat *_zit)
{
    return this->dbConnector->dbDelete("tblZitat", _zit->getID());
}

/*
 * Holen der OrgEinheiten aus der Datenbank
 * Autor: Lars
 */
QVector<OrgEinheit *> ZitatKontrolle::holeOE()
{
    return dbConnector->dbSelectOrgEinheit();
}

/*
 * Aendern eines Zitates
 * Autor: Lars
 */
bool ZitatKontrolle::aendereZitat(Zitat *_zit)
{
    return this->dbConnector->dbUpdateZitat(_zit, _zit->getID());
}
