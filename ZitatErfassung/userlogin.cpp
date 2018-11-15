#include "userlogin.h"

/*
 * Konstruktor
 * Autor: Lars
 */
Userlogin::Userlogin()
{
    this->dbConnector = SQLQuery::getDBConnector();
}

/*
 * Destruktor
 * Autor: Lars
 */
Userlogin::~Userlogin()
{

}

/*
 * Abfrage auf Korrektheit der Anmeldedaten
 * Autor: Lars
 */
bool Userlogin::checkLoginCredentials(QString p_user, QString p_passwrd)
{
    bool angemeldet = false;
    QVector<Benutzer*> dbErg = dbConnector->dbSelectBenutzer("Nutzername",p_user);
    if (dbErg.size() > 0)
    {
        Benutzer* nutzer = dbErg[0];
        if (nutzer)
        {
            if (nutzer->getPasswort() == p_passwrd)
            {
                SessionInfo::getSessionInfo()->setAktNutzer(nutzer);
                angemeldet = true;
            }
        }
    }
    return angemeldet; //TODO: qry Abfragen in Datenbank
}
