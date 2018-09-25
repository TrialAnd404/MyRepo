#include "sessioninfo.h"

SessionInfo* SessionInfo::dieses;

SessionInfo::SessionInfo()
{

}

SessionInfo* SessionInfo::getSessionInfo()
{
    if (!SessionInfo::dieses)
    {
        SessionInfo::dieses = new SessionInfo();
    }
    return SessionInfo::dieses;
}

Benutzer *SessionInfo::getAktNutzer()
{
    return this->aktNutzer;
}

void SessionInfo::setAktNutzer(Benutzer *p_nutzer)
{
    this->aktNutzer = p_nutzer;
}
