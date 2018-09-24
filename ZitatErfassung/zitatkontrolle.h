#ifndef ZITATKONTROLLE_H
#define ZITATKONTROLLE_H

#include <QString>
#include "orgeinheit.h"
#include "sessioninfo.h"

class ZitatKontrolle
{
public:
    ZitatKontrolle();
    bool legeZitatAn(QString p_zitat, QString p_redner, QDate p_datum, QString p_org);
};

#endif // ZITATKONTROLLE_H
