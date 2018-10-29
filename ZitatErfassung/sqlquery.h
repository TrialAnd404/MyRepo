#ifndef SQLQUERY_H
#define SQLQUERY_H

#include <QString>
#include <QDebug>
#include "frmmain.h"
#include "ui_frmmain.h"
#include "benutzer.h"
#include "admin.h"
#include "zitat.h"
#include "meldung.h"
#include "orgeinheit.h"

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

    QVector<QObject*> dbSelect(QString _from, QString _content, QString _valueString);
    QVector<QObject*> dbSelect(QString _from, QString _content, int _valueInt);

    bool dbCheckExisting(QString _stringInQuestion, QString _tblInQuestion, QString _tblContentInQuestion, bool _exactMatch);
    bool checkAlreadyVoted(int _benutzerID, int _zitatID);

    int getLastID();

    bool dbInsertAdmin(QString _nutzername, QString _passwort, QString _vorname, QString _nachname, int _jahrgangID);
    bool dbInsertAdminMeldung(int _adminId, int _meldungID);
    bool dbInsertBenutzer(QString _nutzername, QString _passwort, QString _vorname, QString _nachname, int _jahrgangID);
    bool dbInsertMeldung(int _zitatID, QString _grund, int _senderID);
    bool dbInsertOrg(QString _bezeichnung, int _jahr);
    bool dbInsertVote(bool _upvote, int _benutzerID, int _zitatID);
    bool dbInsertZitat(QString _redner, QString _inhalt, QString _kurs, QDate _datum);
};

#endif // SQLQUERY_H
