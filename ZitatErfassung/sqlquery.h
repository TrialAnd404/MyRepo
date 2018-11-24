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
#include "sessioninfo.h"

#include "QDate"
#include "QtSql"
#include "QObject"
#include "QVector"

/*
 * Klasse zur Verbindung der Datenbank - Singleton
 * Autor: Lars
 */
class SQLQuery
{
private:
    QSqlDatabase db;
    int holeID();
    static SQLQuery* singleton;
public:
    SQLQuery();
    ~SQLQuery();

    static SQLQuery* getDBConnector();

    QVector<Admin*> dbSelectAdmin(QString _content = "alle", QString _value = "alle", bool _subselect = false);
    QVector<Benutzer*> dbSelectBenutzer(QString _content = "alle", QString _value = "alle", bool _subselect = false);
    QVector<Zitat*> dbSelectZitat(QString _content = "alle", QString _value = "alle", bool _subselect = false);
    QVector<Meldung*> dbSelectMeldung(QString _content = "alle", QString _value = "alle", bool _subselect = false);
    QVector<OrgEinheit*> dbSelectOrgEinheit(QString _content = "alle", QString _value = "alle", bool _subselect = false);

    bool dbCheckExisting(QString _stringInQuestion, QString _tblInQuestion, QString _tblContentInQuestion, bool _exactMatch);
    bool checkAlreadyVoted(int _benutzerID, int _zitatID);

    int getLastID();

    bool dbUpdateAdmin(Admin* _admin, int _id);
    bool dbUpdateBenutzer(Benutzer* _benutzer, int _id);
    bool dbUpdateMeldung(Meldung* _meldung, int _id);
    bool dbUpdateOrgEinheit(OrgEinheit* _orgEinheit, int _id);
    bool dbUpdateZitat(Zitat* _zitat, int _id);

    bool dbInsertAdmin(Admin* _admin);
    bool dbInsertAdminMeldung(int _adminId, int _meldungID);
    bool dbInsertBenutzer(Benutzer* _benutzer);
    bool dbInsertMeldung(Meldung* _meldung);
    bool dbInsertOrg(OrgEinheit* _orgEinheit);
    bool dbInsertVote(bool _upvote, int _benutzerID, int _zitatID);
    bool dbInsertZitat(Zitat* _zitat);

    bool dbDelete(QString _table, int _id);
};

#endif // SQLQUERY_H
