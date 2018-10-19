#include "sqlquery.h"
#include "ui_frmmain.h"
#include "frmmain.h"
#include "benutzereinstellungen.h"


SQLQuery::SQLQuery()
{
    //Datenbank anbindung
    QString dbPfad = QApplication::applicationDirPath() + "/DBZitat.sqlite";


    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPfad);
    //Datenbank anbindung END
}

/*QString SQLQuery::datenbankOperation(QString p_Query)
{
    QString ausgabe;

    bool ok;

    ok = db.open();

    QString sqlBefehl = "select Nutzername from tblBenutzerAdmin";
    QSqlQuery qry;
    ok = qry.exec(sqlBefehl);
    qDebug() << qry.lastError().text();

    ok = qry.first();
    while (ok)
    {
        ausgabe += qry.value(0).toString() + " ";
        ok = qry.next();
    }
    db.close();

    return QString(ausgabe);

}
*/
bool SQLQuery::dbCheckExisting(QString _stringInQuestion, QString _tblInQuestion, QString _tblContentInQuestion, bool _exactMatch)
{
    QSqlQuery qry;
    bool entryCheck;
    if (_exactMatch)
    {
        entryCheck = db.open();
        QString _sqlQuery = "SELECT * FROM "+_tblInQuestion+" WHERE "+_tblContentInQuestion+" LIKE "+_stringInQuestion;

        entryCheck = qry.exec(_sqlQuery);
        db.close();
    }
    else
    {
        bool qryResult;
        entryCheck = db.open();
        QString _sqlQuery = "SELECT * FROM "+_tblInQuestion;
        entryCheck = qry.exec(_sqlQuery);
        qryResult = qry.first();
        while (qryResult)
        {
            //TODO iterieren durch qryResult und _tblContentInQuestion auf ungefähre Gleichheit prüfen
            db.close();
        }
    }
    return entryCheck;

}

bool SQLQuery::dbInsertAdmin(QString _nutzername, QString _passwort, QString _vorname, QString _nachname, int _jahrgangID)
{
    QSqlQuery qry;
    bool insertCheck = db.open();
    QString sqlQuery;
    int id = getLastID();

    if(dbCheckExisting(_nutzername, "tblBenutzerAdmin", "Nutzername", true))
    {
        insertCheck = false;
    }
    else
    {
        sqlQuery = "INSERT INTO tblBenuterAdmin VALUES (" + QString::number(id) + ", "+ _nutzername +", "+_passwort+", "+_vorname+", "+_nachname+", "+_jahrgangID;

        insertCheck = qry.exec(sqlQuery);
        if (insertCheck)
            qry.exec("INSERT INTO tblIdGenerator(ID) VALUES("+QString::number(id++)+")");
        db.close();
    }
    return insertCheck;
}

bool SQLQuery::dbInsertAdminMeldung(int _adminId, int _meldungID)
{
    QSqlQuery qry;
    QString sqlQuery;
    bool insertCheck = db.open();
    sqlQuery = "INSERT INTO tblAdminMeldung(AdminID, MeldungID) VALUES("+QString::number(_adminId)+", "+QString::number(_meldungID)+")";
    insertCheck = qry.exec(sqlQuery);

    db.close();
    return insertCheck;
}

bool SQLQuery::dbInsertBenutzer(QString _nutzername, QString _passwort, QString _vorname, QString _nachname, int _jahrgangID)
{
    QSqlQuery qry;
    bool insertCheck= db.open();
    QString sqlQuery;
    int id = getLastID();

    if(dbCheckExisting(_nutzername, "tblBenutzerStandart", "Nutzername", true))
    {
        insertCheck = false;
    }
    else
    {
        sqlQuery = "INSERT INTO tblBenuterStandart VALUES (" + QString::number(id) + ", "+ _nutzername +", "+_passwort+", "+_vorname+", "+_nachname+", "+_jahrgangID;

        insertCheck = qry.exec(sqlQuery);
        if (insertCheck)
            qry.exec("INSERT INTO tblIdGenerator(ID) VALUES("+QString::number(id++)+")");
        db.close();
    }
    return insertCheck;
}

bool SQLQuery::dbInsertMeldung(int _zitatID, QString _grund, int _senderID)
{
    QSqlQuery qry;
    int id= getLastID();
    QString sqlQuery;
    bool insertCheck = db.open();

    sqlQuery = "INSERT INTO tblMeldung(ID, Zitat, Grund, Sender) VALUES("+QString::number(id)+", "+QString::number(_zitatID)+", "+_grund+", "+QString::number(_senderID)+")";
    insertCheck = qry.exec(sqlQuery);
    if (insertCheck)
        qry.exec("INSERT INTO tblIdGenerator(ID) VALUES("+QString::number(id++)+")");
    db.close();
    return insertCheck;
}

bool SQLQuery::dbInsertOrg(QString _bezeichnung, int _jahr)
{
    QSqlQuery qry;
    int id=getLastID();
    QString sqlQuery;
    bool insertCheck= db.open();

    if(dbCheckExisting(_bezeichnung, "tblOrgEinheit", "Bezeichnung", true))
    {
        insertCheck = false;
    }
    else
    {
        sqlQuery= "INSERT INTO tblOrgEinheit(ID, Bezeichnung, Jahr) VALUES("+QString::number(id)+", "+_bezeichnung+", "+QString::number(_jahr)+")";
        insertCheck = qry.exec(sqlQuery);
        if (insertCheck)
            qry.exec("INSERT INTO tblIdGenerator(ID) VALUES("+QString::number(id++)+")");
        db.close();
    }
    return insertCheck;
}

bool SQLQuery::dbInsertVote(bool _upvote, int _benutzerID, int _zitatID)
{
    QSqlQuery qry;
    QString sqlQuery;
    bool alreadyVoted;
    bool insertCheck = db.open();

    alreadyVoted = checkAlreadyVoted(_benutzerID, _zitatID);
    if(!alreadyVoted)
    {
        if (_upvote)
        {
            sqlQuery= "SELECT * FROM tblUpvotes,tblDown";
            db.close();
        }
        else
        {
            sqlQuery= "";
            db.close();
        }
    }
    else{
        insertCheck = false;
    }
    return insertCheck;
}

bool SQLQuery::dbInsertZitat(QString _redner, QString _inhalt, QString _kurs, QDate _datum)
{
    QSqlQuery qry;
    int id;
    QString sqlQuery;
    bool insertCheck;

    if(dbCheckExisting(_inhalt, "tblZitat", "Inhalt", false))
    {
        //nüx TODO muss hier was gemacht werden?
    }
    else
    {
        insertCheck = db.open();

        int id = getLastID();
        sqlQuery = "INSERT INTO tblZitat VALUES ("+QString::number(id)+", "+_redner +", "+_inhalt+", "+_kurs+", "+_datum.toString("yyyy.mm.dd");
        insertCheck = qry.exec(sqlQuery);
        if (insertCheck)
            insertCheck = qry.exec("INSERT INTO tblIdGenerator(ID) VALUES("+QString::number(id++)+")");
        db.close();
    }
    return insertCheck;
}

QVector<QObject*> SQLQuery::dbSelect(QString _fromTable, QString _content, QString _value)
{
    QVector<QObject*> selectResult;
    QSqlQuery qry;
    QString sqlQuery;
    bool selectCheck = db.open();

    sqlQuery = "SELECT * FROM "+_fromTable+" WHERE "+_content+" LIKE "+_value;
    selectCheck = qry.exec(sqlQuery);
    selectCheck = qry.first();
    switch (_fromTable)
    {
    case 'tblBenutzerAdmin':

        while(selectCheck)
        {
            Admin* admin = new Admin(qry.value(0), qry.value(1), qry.value(2), qry.value(3), qry.value(4), qry.value(5));

            selectResult.append(admin);
            selectCheck = qry.next();
        }
        break;

    case 'tblBenutzerStandart':

        while(selectCheck)
        {
            Benutzer* benutzer = new Benutzer(qry.value(0), qry.value(1), qry.value(2), qry.value(3), qry.value(4));

            selectResult.append(benutzer);
            selectCheck = qry.next();
        }
        break;

    case 'tblZitat':

        while(selectCheck)
        {
            Zitat* zitat = new Zitat(qry.value(0), qry.value(1), qry.value(2), qry.value(3), qry.value(4), qry.value(5));

            selectResult.append(zitat);
            selectCheck = qry.next();
        }
        break;

    case 'tblMeldung':

        while(selectCheck)
        {
            Meldung* meldung = new Meldung(qry.value(0), qry.value(1), qry.value(2), qry.value(3));

            selectResult.append(meldung);
            selectCheck = qry.next();
        }
        break;

    case 'tblOrgeinheit':

        while(selectCheck)
        {
            OrgEinheit* orgeinheit = new OrgEinheit(qry.value(0), qry.value(1), qry.value(2));

            selectResult.append(orgeinheit);
            selectCheck = qry.next();
        }
        break;

    default:

        break;
    }

    db.close();
    db.close();

    return selectResult;

}
QVector<QObject*> SQLQuery::dbSelect(QString _fromTable, QString _content, int _value)
{
    QVector<QObject*> selectResult;
    QSqlQuery qry;
    QString sqlQuery;
    bool selectCheck = db.open();

    sqlQuery = "SELECT * FROM "+_fromTable+" WHERE "+_content+" LIKE "+_value;
    selectCheck = qry.exec(sqlQuery);
    selectCheck = qry.first();
    switch (_fromTable)
    {
    case 'tblBenutzerAdmin':

        while(selectCheck)
        {
            Admin* admin = new Admin(qry.value(0).toInt(), qry.value(1).toString(), qry.value(2).toString(), qry.value(3)., qry.value(4), qry.value(5).toBool());

            selectResult.append(admin);
            selectCheck = qry.next();
        }
        break;

    case 'tblBenutzerStandart':

        while(selectCheck)
        {
            Benutzer* benutzer = new Benutzer(qry.value(0).toInt(), qry.value(1).toString(), qry.value(2).toString(), qry.value(3).toString(), qry.value(4));

            selectResult.append(benutzer);
            selectCheck = qry.next();
        }
        break;

    case 'tblZitat':

        while(selectCheck)
        {
            Zitat* zitat = new Zitat(qry.value(0), qry.value(1), qry.value(2), qry.value(3), qry.value(4), qry.value(5));

            selectResult.append(zitat);
            selectCheck = qry.next();
        }
        break;

    case 'tblMeldung':

        while(selectCheck)
        {
            Meldung* meldung = new Meldung(qry.value(0), qry.value(1), qry.value(2), qry.value(3));

            selectResult.append(meldung);
            selectCheck = qry.next();
        }
        break;

    case 'tblOrgeinheit':

        while(selectCheck)
        {
            OrgEinheit* orgeinheit = new OrgEinheit(qry.value(0), qry.value(1), qry.value(2));

            selectResult.append(orgeinheit);
            selectCheck = qry.next();
        }
        break;

    default:

        break;
    }

    db.close();
    db.close();

    return selectResult;
}

int SQLQuery::getLastID()
{
    QSqlQuery qry;
    QString sqlQuery;
    bool qryResult;
    int lastID =0;

    sqlQuery = "SELECT MAX(ID) FROM tblIdGenerator";
    qryResult = qry.exec(sqlQuery);
    if (qryResult)
    {
        while(qryResult)
        {
            lastID = qry.value(0).toInt();
            qryResult = qry.next();
        }
    }
    db.close();

    return lastID;
}

bool SQLQuery::checkAlreadyVoted(int _benutzerID, int _zitatID)
{
    bool didVote=false;
    QSqlQuery qry;
    QString sqlQuery;
    bool qryResult = db.open();

    sqlQuery = "SELECT * FROM tblDownvotes WHERE BenutzerID="+QString::number(_benutzerID)+" AND ZitatID="+QString::number(_zitatID);
    qryResult = qry.exec(sqlQuery);
    if (qryResult)
    {
        didVote=true;
    }

    sqlQuery = "SELECT * FROM tblDUpvotes WHERE BenutzerID="+QString::number(_benutzerID)+" AND ZitatID="+QString::number(_zitatID);
    qryResult = qry.exec(sqlQuery);
    if (qryResult)
    {
        didVote=true;
    }
    db.close();

    return didVote;
}
