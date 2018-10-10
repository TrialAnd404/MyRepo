#include "zitatkontrolle.h"

ZitatKontrolle::ZitatKontrolle()
{

}

ZitatKontrolle::~ZitatKontrolle()
{

}

bool ZitatKontrolle::legeZitatAn(QString p_zitat, QString p_redner, QDate p_datum, QString p_org)
{
    int id = 100; //aus DB
    Benutzer* nutzer = SessionInfo::getSessionInfo()->getAktNutzer(); // aktueller Benutzer
    OrgEinheit* orgE = nutzer->getJahrgang();
    Zitat* zit = new Zitat(id,p_redner,p_zitat,orgE,p_datum,nutzer);
    return true;
}

QVector<Zitat*> ZitatKontrolle::holeZitate(OrgEinheit *p_jahrgang)
{
    int orgID = p_jahrgang->getID();
    //SQL Query
    // return;
}
