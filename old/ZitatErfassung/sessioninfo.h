#ifndef SESSIONINFO_H
#define SESSIONINFO_H

#include "benutzer.h"

class SessionInfo
{
public:
    static SessionInfo* getSessionInfo();
    Benutzer* getAktNutzer();
    void setAktNutzer(Benutzer* p_nutzer);
private:
    SessionInfo();
    static SessionInfo* dieses;
    Benutzer* aktNutzer;
};

#endif // SESSIONINFO_H
