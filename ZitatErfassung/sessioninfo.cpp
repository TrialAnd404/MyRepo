#include "sessioninfo.h"

SessionInfo* SessionInfo::getSessionInfo()
{
    if (SessionInfo::dieses)
    {
        SessionInfo::dieses = new SessionInfo();
    }
    return SessionInfo::dieses;
}

SessionInfo::SessionInfo()
{

}
