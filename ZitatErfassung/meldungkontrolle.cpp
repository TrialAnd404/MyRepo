#include "meldungkontrolle.h"

/*
 * Konstruktor
 * Autor: Lars
 */
MeldungKontrolle::MeldungKontrolle()
{
    this->dbConnector = SQLQuery::getDBConnector();
}

/*
 * Destruktor
 * Autor: Lars
 */
MeldungKontrolle::~MeldungKontrolle()
{

}

/*
 * Erstellen und Senden einer Meldung + Ablegen in der Datenbank
 * Autor: Lars
 */
bool MeldungKontrolle::sendeMeldung(Zitat* _zitat, QString _grund)
{
    Meldung* meld = new Meldung();
    meld->setGrund(_grund);
    meld->setSender(SessionInfo::getSessionInfo()->getAktNutzer());
    meld->setZitat(_zitat);
    return this->dbConnector->dbInsertMeldung(meld);

}

/*
 * Holen aller Meldungen aus der Datenbank
 * Autor: Lars
 */
QVector<Meldung *> MeldungKontrolle::holeMeldung()
{
    return this->dbConnector->dbSelectMeldung();
}

bool MeldungKontrolle::loescheMeldung(Meldung *_meldungID)
{
    return this->dbConnector->dbDelete("tblMeldung", _meldungID->getID());
}
