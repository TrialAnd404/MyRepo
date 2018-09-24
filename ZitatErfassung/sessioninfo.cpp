#include "sessioninfo.h"

SessionInfo SessionInfo::getSessionInfo()
{
    if (!this->dieses)
    {
        this->dieses = new SessionInfo();
    }
    return dieses;
}

SessionInfo::SessionInfo()
{

}
