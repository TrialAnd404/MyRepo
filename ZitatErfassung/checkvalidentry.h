#ifndef CHECKVALIDENTRY_H
#define CHECKVALIDENTRY_H

#include "qstring.h"

class CheckValidEntry
{
public:
    CheckValidEntry();
    bool CheckValidPasswrd(QString p_entry);
    bool CheckValidName(QString p_entry);
    bool CheckValidZitat(QString p_entry);
private:
    bool isValid = true;
};

#endif // CHECKVALIDENTRY_H
