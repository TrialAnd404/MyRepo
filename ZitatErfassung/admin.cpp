#include "admin.h"

Admin::Admin()
    : Benutzer::Benutzer()
{

}

Admin::Admin(QString p_nutzername, QString p_passwort, QString p_vorname, QString p_nachname, OrgEinheit* p_jahrgang, bool p_super)
    : Benutzer::Benutzer(p_nutzername, p_passwort, p_vorname, p_nachname, p_jahrgang)
{
    this->super = p_super;
}

bool Admin::getSuper()
{
    return this->super;
}

void Admin::setSuper(bool p_super)
{
    this->super = p_super;
}

QVector<Meldung*> Admin::getMeldung()
{
    return this->meldung;
}

void Admin::setMeldung(QVector<Meldung*> p_meldung)
{
    this->meldung = p_meldung;
}

bool Admin::addMeldung(Meldung* p_meldung)
{
    bool einzutragen = true;
    for (int i = 0; i < this->meldung.size(); i++)
    {

        if (this->meldung.value(i)->getID() == p_meldung->getID())
        {
            einzutragen = false;
        }
    }
    if (einzutragen)
    {
        this->meldung.append(p_meldung);
    }
    return einzutragen;
}

