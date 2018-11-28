#ifndef ZITATKONTROLLE_H
#define ZITATKONTROLLE_H

#include <QString>
#include <QDate>
#include "orgeinheit.h"
#include "sessioninfo.h"
#include "zitat.h"
#include "sqlquery.h"

/*
 * Klasse zur Steuerung von Zitaten und Datenbankverbindung
 * Autor: Lars
 */
class ZitatKontrolle
{
public:
    ZitatKontrolle();
    ~ZitatKontrolle();
    bool legeZitatAn(QString p_zitat, QString p_redner, QDate p_datum);
    QVector<Zitat*> holeZitate(OrgEinheit* p_jahrgang);
    bool loescheZitat(Zitat* _zit);
    QVector<OrgEinheit*> holeOE();
    bool aendereZitat(Zitat* _zit);
private:
    SQLQuery* dbConnector;
};

#endif // ZITATKONTROLLE_H
