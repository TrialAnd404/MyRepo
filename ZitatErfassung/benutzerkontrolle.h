#ifndef BENUTZERKONTROLLE_H
#define BENUTZERKONTROLLE_H

#include "sqlquery.h"

/*
 * Klasse BenutzerKontrolle
 * Steuert die Benutzerverwaltung, kommuniziert mit Datenbankanbindung und Oberfläche
 * Autor: Lars
 */
class BenutzerKontrolle
{
public:
    BenutzerKontrolle();
    ~BenutzerKontrolle();
    bool updateBenutzer(Benutzer* _benutzer);
    bool addBenutzer(QString _vorname, QString _nachname, OrgEinheit* _oe, QString _nutzername, QString _passwort, bool _admin = false, bool _deaktiviert = false);
    QVector<Benutzer*> holeBenutzer(OrgEinheit* _oe);
    QVector<Benutzer*> holeAdmin();
    QVector<OrgEinheit*> holeOE();
    bool loescheBenutzer(Benutzer* _ben);
private:
    SQLQuery* dbConnector;
};

#endif // BENUTZERKONTROLLE_H
