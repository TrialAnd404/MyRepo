#ifndef BENUTZER_H
#define BENUTZER_H

#include <QString>
#include "orgeinheit.h"
#include "QObject"

/*
 * Modelklasse Benutzer
 * Autor: Lars
 */
class Benutzer
{
private:
    int id;
    QString nutzername;
    QString passwort;
    QString vorname;
    QString nachname;
    OrgEinheit* jahrgang;
    bool admin;
    bool deaktiviert;
public:
    Benutzer();
    Benutzer(QString p_nutzername, QString p_passwort, QString p_vorname, QString p_nachname, OrgEinheit* p_jahrgang);
    ~Benutzer();
    int getID();
    void setID(int p_id);
    QString getNutzername();
    void setNutzername(QString p_nutzername);
    QString getPasswort();
    void setPasswort(QString p_passwort);
    QString getVorname();
    void setVorname(QString p_vorname);
    QString getNachname();
    void setNachname(QString p_nachname);
    OrgEinheit* getJahrgang();
    void setJahrgang(OrgEinheit* p_jahrgang);
    bool getAdmin();
    void setAdmin(bool p_admin);
    bool getDeaktiviert();
    void setDeaktiviert(bool p_deaktiviert);
};

#endif // BENUTZER_H
