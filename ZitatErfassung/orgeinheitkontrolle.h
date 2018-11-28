#ifndef ORGEINHEITKONTROLLE_H
#define ORGEINHEITKONTROLLE_H

#include <QVector>
#include "orgeinheit.h"
#include "sqlquery.h"

/*
 * Klasse zur Kontrolle der OrgEinheiten und Verbindung zur Datenbank
 * Autor: Lars
 */
class OrgEinheitKontrolle
{
public:
    OrgEinheitKontrolle();
    ~OrgEinheitKontrolle();
    QVector<OrgEinheit*> holeOeEinheit();
    bool addOE(QString _bezeichnung, QString _jahr);
    bool loescheOE(OrgEinheit* _oe);
    bool aendereOE(OrgEinheit* _oe);
private:
    SQLQuery* dbConnector;

};

#endif // ORGEINHEITKONTROLLE_H
