#include "sessioninfo.h"

/*
 * Singleton
 * Autor: Lars
 */
SessionInfo* SessionInfo::dieses;

/*
 * Konstruktor
 * Autor: Lars
 */
SessionInfo::SessionInfo()
{

}

/*
 * Rueckgabe der Singelton-Instanz
 * Autor: Lars
 */
SessionInfo* SessionInfo::getSessionInfo()
{
    if (!SessionInfo::dieses)
    {
        SessionInfo::dieses = new SessionInfo();
    }
    return SessionInfo::dieses;
}

/*
 * Setter und Getter
 * Autor: Lars
 */
Benutzer *SessionInfo::getAktNutzer()
{
    return this->aktNutzer;
}

void SessionInfo::setAktNutzer(Benutzer *p_nutzer)
{
    this->aktNutzer = p_nutzer;
}
