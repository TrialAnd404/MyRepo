#ifndef ADMIN_H
#define ADMIN_H

#include <QVector>
#include "meldung.h"
#include "benutzer.h"

class Admin : public Benutzer
{
private:
    bool super;
    QVector<Meldung*> meldung;
public:
    Admin(QString p_nutzername, QString p_passwort, QString p_vorname, QString p_nachname, OrgEinheit* p_jahrgang, bool p_super);
    bool getSuper();
    void setSuper(bool p_super);
    QVector<Meldung*> getMeldung();
    void setMeldung(QVector<Meldung*> p_meldung);
    bool addMeldung(Meldung* p_meldung);
};

#endif // ADMIN_H
