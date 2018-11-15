#ifndef MELDUNGKONTROLLE_H
#define MELDUNGKONTROLLE_H

#include "sqlquery.h"
#include "meldung.h"

/*
 * Klasse zur Kontrolle der Meldungen
 * Autor: Lars
 */
class MeldungKontrolle
{
public:
    MeldungKontrolle();
    ~MeldungKontrolle();
    bool sendeMeldung(Zitat* _zitatID, QString _grund);
private:
    SQLQuery* dbConnector;
};

#endif // MELDUNGKONTROLLE_H
