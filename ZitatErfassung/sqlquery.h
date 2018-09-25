#include <QString>
#include <QDebug>
#include "frmmain.h"
#include "ui_frmmain.h"

#ifndef SQLQUERY_H
#define SQLQUERY_H

#include "QDate"
#include "QtSql"
#include "QObject"
#include "QVector"

class SQLQuery
{
private:
    QSqlDatabase db;
    int holeID();
public:
    SQLQuery();

    QVector<QObject*> dbSelect(QString _select, QString _from, QString _where = "");

    bool dbCheckExisting(QString _select, QString _from, QString _where = "");

    bool dbInsertAdmin(QString _nutzername, QString _passwort, QString _vorname, QString _nachname, int _jahrgangID);
    bool dbInsertAdminMeldung(int _adminId, int _meldungID);
    bool dbInsertBenutzer(QString _nutzername, QString _passwort, QString _vorname, QString _nachname,  _jahrgangID);
    bool dbInsertMeldung(int _zitatID, QString _grund, int _senderID);
    bool dbInsertOrg(QString _bezeichnung, int _jahr);
    bool dbInsertVote(bool _upvote, int _benutzerID, int _zitatID);
    bool dbInstertZitat(QString _redner, QString _inhalt, QString _kurs, QDate _datum);
};

#endif // SQLQUERY_H
