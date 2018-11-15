#include "sqlquery.h"
#include "ui_frmmain.h"
#include "frmmain.h"
#include "frmbenutzereinstellungen.h"

/*
 * Singleton
 * Autor: Lars
 */
SQLQuery* SQLQuery::singleton;

/*
 * Konstruktor
 * Autor: Lars
 */
SQLQuery::SQLQuery()
{
    //Datenbank anbindung
    QString dbPfad = QApplication::applicationDirPath() + "/DBZitat.sqlite";


    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPfad);
    //Datenbank anbindung END
}

/*
 * Destruktor
 * Autor: Lars
 */
SQLQuery::~SQLQuery()
{
    SQLQuery::singleton = NULL;
}

/*
 * Rueckgabe der Singleton-Instanz
 * Autor: Lars
 */
SQLQuery *SQLQuery::getDBConnector()
{
    if (!SQLQuery::singleton)
    {
        SQLQuery::singleton = new SQLQuery();
    }
    return SQLQuery::singleton;
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

/*
 * Datenbankabfrage auf bereits bestehenden Eintrag
 * Autor: Lars
 */
bool SQLQuery::dbCheckExisting(QString _stringInQuestion, QString _tblInQuestion, QString _tblContentInQuestion, bool _exactMatch)
{

    bool entryCheck = db.open();
    QSqlQuery qry;
    if (_exactMatch)
    {
        QString _sqlQuery = "SELECT * FROM "+_tblInQuestion+" WHERE "+_tblContentInQuestion+" LIKE "+_stringInQuestion;

        entryCheck = qry.exec(_sqlQuery);
        db.close();
    }
    else
    {
        bool qryResult;
        QString _sqlQuery = "SELECT * FROM "+_tblInQuestion;
        entryCheck = qry.exec(_sqlQuery);
        qryResult = qry.first();
        while (qryResult)
        {
            //TODO iterieren durch qryResult und _tblContentInQuestion auf ungefähre Gleichheit prüfen

        }
        db.close();
    }
    return entryCheck;

}

/*
bool SQLQuery::dbInsertAdmin(Admin* _admin)
{
    bool insertCheck;
    int id = getLastID();

    int super = 0;
    if (_admin->getSuper())
    {
        super = 1;
    }

    if(dbCheckExisting(_admin->getNutzername(), "tblBenutzerAdmin", "Nutzername", true))
    {
        insertCheck = false;
    }
    else
    {
        insertCheck = db.open();
        QSqlQuery qry;
        QString sqlQuery;
        sqlQuery = "INSERT INTO tblBenutzerAdmin VALUES (" + QString::number(id) + ", '"+ _admin->getNutzername() +"', '"+_admin->getPasswort()+"', '"+_admin->getVorname()+"', '"+_admin->getNachname()+"', "+ QString::number(super) +", "+QString::number(_admin->getJahrgang()->getID()) + ");";

        insertCheck = qry.exec(sqlQuery);
        if (insertCheck)
            qry.exec("UPDATE tblIdGenerator SET ID = "+QString::number(++id));
        db.close();
    }
    return insertCheck;
}
*/

/*
bool SQLQuery::dbInsertAdminMeldung(int _adminId, int _meldungID)
{

    QString sqlQuery;
    bool insertCheck = db.open();
    QSqlQuery qry;
    sqlQuery = "INSERT INTO tblAdminMeldung(AdminID, MeldungID) VALUES("+QString::number(_adminId)+", "+QString::number(_meldungID)+")";
    insertCheck = qry.exec(sqlQuery);

    db.close();
    return insertCheck;
}
*/

/*
 * Eintragen eines Benutzerobjekts in die Datenbank
 * Autor: Lars
 */
bool SQLQuery::dbInsertBenutzer(Benutzer* _benutzer)
{
    bool insertCheck;
    int id = getLastID();

    if(dbCheckExisting(_benutzer->getNutzername(), "tblBenutzerStandard", "Nutzername", true))
    {
        insertCheck = false;
    }
    else
    {
        int admin = 0;
        if (_benutzer->getAdmin())
        {
            admin = 1;
        }
        insertCheck= db.open();
        QSqlQuery qry;
        QString sqlQuery;
        sqlQuery = "INSERT INTO tblBenutzerStandard VALUES (" + QString::number(id) + ", '"+ _benutzer->getNutzername() +"', '"+_benutzer->getPasswort()+"', '"+_benutzer->getVorname()+"', '"+_benutzer->getNachname()+"', "+QString::number(_benutzer->getJahrgang()->getID()) + ", " + QString::number(admin) + ");";

        insertCheck = qry.exec(sqlQuery);
        if (insertCheck)
            qry.exec("UPDATE tblIdGenerator SET ID = "+QString::number(++id));
        db.close();
    }
    return insertCheck;
}

/*
 * Eintragen einer Meldung in die Datenbank
 * Autor: Lars
 */
bool SQLQuery::dbInsertMeldung(Meldung* _meldung)
{

    int id = getLastID();
    QString sqlQuery;
    bool insertCheck = db.open();
    QSqlQuery qry;

    sqlQuery = "INSERT INTO tblMeldung VALUES("+QString::number(id)+", "+QString::number(_meldung->getZitat()->getID())+", '"+_meldung->getGrund()+"', "+QString::number(_meldung->getSender()->getID())+")";
    insertCheck = qry.exec(sqlQuery);
    if (insertCheck)
        qry.exec("UPDATE tblIdGenerator SET ID = "+QString::number(++id));
    db.close();
    return insertCheck;
}

/*
 * Eintragen einer OrgEinheit in die Datenbank
 * Autor: Lars
 */
bool SQLQuery::dbInsertOrg(OrgEinheit* _orgEinheit)
{

    int id = getLastID();
    QString sqlQuery;
    bool insertCheck;

    if(dbCheckExisting(_orgEinheit->getBezeichnung(), "tblOrgEinheit", "Bezeichnung", true))
    {
        insertCheck = false;
    }
    else
    {
        insertCheck = db.open();
        QSqlQuery qry;
        sqlQuery= "INSERT INTO tblOrgEinheit(ID, Bezeichnung, Jahr) VALUES("+QString::number(id)+", '"+_orgEinheit->getBezeichnung()+"', '"+_orgEinheit->getJahr()+"')";
        insertCheck = qry.exec(sqlQuery);
        if (insertCheck)
            qry.exec("UPDATE tblIdGenerator SET ID = "+QString::number(++id));
        db.close();
    }
    return insertCheck;
}

bool SQLQuery::dbInsertVote(bool _upvote, int _benutzerID, int _zitatID)
{

    QString sqlQuery;
    bool alreadyVoted;
    bool insertCheck = db.open();
    QSqlQuery qry;

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

/*
 * Eintragen eines Zitats in die Datenbank
 * Autor: Lars
 */
bool SQLQuery::dbInsertZitat(Zitat* _zitat)
{
    int id = getLastID();
    QString sqlQuery;
    bool insertCheck;

    if(dbCheckExisting(_zitat->getInhalt(), "tblZitat", "Inhalt", true))
    {
        //nüx TODO muss hier was gemacht werden?
    }
    else
    {
        insertCheck = db.open();
        QSqlQuery qry;
        sqlQuery = "INSERT INTO tblZitat VALUES ("+QString::number(id)+", '"+_zitat->getRedner() +"', '"+_zitat->getInhalt()+"', "+QString::number(_zitat->getOrgEinheit()->getID())+", '"+_zitat->getDatum().toString("yyyy-MM-dd") + "'," + QString::number(_zitat->getEingetragenVon()->getID()) + ");";
        insertCheck = qry.exec(sqlQuery);
        if (insertCheck)
            insertCheck = qry.exec("UPDATE tblIdGenerator SET ID = "+QString::number(++id));
        db.close();
    }
    return insertCheck;
}

/*
 * Loeschen eines Objekts aus der Datenbank
 * Autor: Lars
 */
bool SQLQuery::dbDelete(QString _table, int _id)
{
    bool deleteCheck = db.open();
    QSqlQuery qry;
    QString sqlQuery = "DELETE FROM " + _table + " WHERE ID LIKE " + QString::number(_id) + ";";
    deleteCheck = qry.exec(sqlQuery);
    db.close();
    return deleteCheck;
}

/*
QVector<Admin *> SQLQuery::dbSelectAdmin(QString _content, QString _value)
{
    QVector<Admin*> selectResult;
    bool selectCheck = db.open();
    QSqlQuery qry;
    qry.clear();
    QString sqlQuery;

    sqlQuery = "SELECT * FROM tblBenutzerAdmin WHERE "+_content+" LIKE '"+_value + "';";
    if (_content == "alle")
    {
        sqlQuery = "SELECT * FROM tblBenutzerAdmin";
    }
    selectCheck = qry.exec(sqlQuery);
    selectCheck = qry.first();

    while(selectCheck)
    {
        Admin* admin = new Admin();
        admin->setID(qry.value(0).toInt());
        admin->setNutzername(qry.value(1).toString());
        admin->setPasswort(qry.value(2).toString());
        admin->setVorname(qry.value(3).toString());
        admin->setNachname(qry.value(4).toString());
        admin->setSuper(qry.value(5).toInt() == 1);
        admin->setJahrgang(this->dbSelectOrgEinheit("ID",qry.value(6).toString())[0]);

        selectResult.append(admin);
        selectCheck = qry.next();
    }
    db.close();
    return selectResult;
}
*/

/*
 * Datenbankabfrage auf Benutzer
 * Autor: Lars
 */
QVector<Benutzer *> SQLQuery::dbSelectBenutzer(QString _content, QString _value)
{
    QVector<Benutzer*> selectResult;
    bool selectCheck = db.open();
    QSqlQuery qry;
    QString sqlQuery;

    sqlQuery = "SELECT * FROM tblBenutzerStandard WHERE "+_content+" LIKE '"+_value + "';";
    if (_content == "alle")
    {
        sqlQuery = "SELECT * FROM tblBenutzerStandard";
    }
    selectCheck = qry.exec(sqlQuery);
    selectCheck = qry.first();

    while(selectCheck)
    {
        Benutzer* benutzer = new Benutzer();
        benutzer->setID(qry.value(0).toInt());
        benutzer->setNutzername(qry.value(1).toString());
        benutzer->setPasswort(qry.value(2).toString());
        benutzer->setVorname(qry.value(3).toString());
        benutzer->setNachname(qry.value(4).toString());
        benutzer->setJahrgang(this->dbSelectOrgEinheit("ID",qry.value(5).toString())[0]);
        benutzer->setAdmin(qry.value(6).toInt() == 1);

        selectResult.append(benutzer);
        selectCheck = qry.next();
    }
    db.close();
    return selectResult;
}

/*
 * Datenbankabfrage auf Zitate
 * Autor: Lars
 */
QVector<Zitat *> SQLQuery::dbSelectZitat(QString _content, QString _value)
{
    QVector<Zitat*> selectResult;
    bool selectCheck = db.open();
    QSqlQuery qry;
    QString sqlQuery;

    sqlQuery = "SELECT * FROM tblZitat WHERE "+_content+" LIKE "+_value;
    if (_content == "alle")
    {
        sqlQuery = "SELECT * FROM tblZitat";
    }
    selectCheck = qry.exec(sqlQuery);
    selectCheck = qry.first();

    while(selectCheck)
    {
        Zitat* zitat = new Zitat();
        zitat->setID(qry.value(0).toInt());
        zitat->setRedner(qry.value(1).toString());
        zitat->setInhalt(qry.value(2).toString());
        //zitat->setOrgEinheit(this->dbSelectOrgEinheit("ID" , qry.value(3).toString())[0]);
        zitat->setDatum(qry.value(4).toDate());
        //zitat->setEingetragenVon(qry.value(5));       Abfrage nach Admin und Benutzer!!!

        selectResult.append(zitat);
        selectCheck = qry.next(); // Fehler weil zwischendurch neue Abfrage und db.close() oder weil kein QString::number() ich Idiot???
    }
    db.close();
    return selectResult;
}

/*
 * Datenbankabfrage auf Meldungen
 * Autor: Lars
 */
QVector<Meldung *> SQLQuery::dbSelectMeldung(QString _content, QString _value)
{
    QVector<Meldung*> selectResult;
    bool selectCheck = db.open();
    QSqlQuery qry;
    QString sqlQuery;

    sqlQuery = "SELECT * FROM tblMeldung WHERE "+_content+" LIKE "+_value;
    if (_content == "alle")
    {
        sqlQuery = "SELECT * FROM tblMeldung";
    }
    selectCheck = qry.exec(sqlQuery);
    selectCheck = qry.first();

    while(selectCheck)
    {
        Meldung* meldung = new Meldung();
        meldung->setID(qry.value(0).toInt());
        //meldung->setZitat(qry.value(1).toInt());
        meldung->setGrund(qry.value(2).toString());
        //meldung->setSender(qry.value(3).toInt());

        selectResult.append(meldung);
        selectCheck = qry.next();
    }
    db.close();
    return selectResult;
}

/*
 * Datenbankabfrage auf OrgEinheiten
 * Autor: Lars
 */
QVector<OrgEinheit *> SQLQuery::dbSelectOrgEinheit(QString _content, QString _value)
{
    QVector<OrgEinheit*> selectResult;
    bool selectCheck = db.open();
    QSqlQuery qry;
    QString sqlQuery;

    sqlQuery = "SELECT * FROM tblOrgEinheit WHERE "+_content+" LIKE "+_value;
    if (_content == "alle")
    {
        sqlQuery = "SELECT * FROM tblOrgEinheit";
    }
    selectCheck = qry.exec(sqlQuery);
    selectCheck = qry.first();

    while(selectCheck)
    {
        OrgEinheit* orgeinheit = new OrgEinheit();
        orgeinheit->setID(qry.value(0).toInt());
        orgeinheit->setBezeichnung(qry.value(1).toString());
        orgeinheit->setJahr(qry.value(2).toString());

        selectResult.append(orgeinheit);
        selectCheck = qry.next();
    }
    db.close();
    return selectResult;
}

/*
 * Datenbankanfragen der letzten ID
 * Autor: Lars
 */
int SQLQuery::getLastID()
{
    QString sqlQuery;
    bool qryResult = db.open();
    QSqlQuery qry;
    int lastID =0;

    sqlQuery = "SELECT * FROM tblIdGenerator";
    qryResult = qry.exec(sqlQuery);
    qry.first();
    while(qryResult)
    {
        lastID = qry.value(0).toInt();
        qryResult = qry.next();
    }
    qry.finish();
    db.close();

    return lastID;
}

/*
bool SQLQuery::dbUpdateAdmin(Admin *_admin, int _id)
{
    int superAlternativ = 0;
    if (_admin->getSuper())
    {
        superAlternativ = 1;
    }
    QString sqlQuery = "UPDATE tblBenutzerAdmin SET Nutzername = '" + _admin->getNutzername() + "', Passwort = '" + _admin->getPasswort() + "', Vorname = '" + _admin->getVorname() + "', Nachname = '" + _admin->getNachname() + "', Super = " + QString::number(superAlternativ) + ", Jahrgang = " + QString::number(_admin->getJahrgang()->getID()) + " WHERE ID = " + QString::number(_id) + ";";
    bool qryResult = db.open();
    QSqlQuery qry;

    qryResult = qry.exec(sqlQuery);
    db.close();
    return qryResult;
}
*/

/*
 * Datenbankbefehl zum Aendern eines Benutzers
 * Autor: Lars
 */
bool SQLQuery::dbUpdateBenutzer(Benutzer *_benutzer, int _id)
{
    QString sqlQuery = "UPDATE tblBenutzerStandard SET Nutzername = '" + _benutzer->getNutzername() + "', Passwort = '" + _benutzer->getPasswort() + "', Vorname = '" + _benutzer->getVorname() + "', Nachname = '" + _benutzer->getNachname() + "', Jahrgang = " + QString::number(_benutzer->getJahrgang()->getID()) + " WHERE ID = " + QString::number(_id) + ";";
    bool qryResult = db.open();
    QSqlQuery qry;

    qryResult = qry.exec(sqlQuery);
    db.close();
    return qryResult;
}

/*
 * Datenbankbefehl zum Aendern einer Meldung
 * Autor: Lars
 */
bool SQLQuery::dbUpdateMeldung(Meldung *_meldung, int _id)
{
    QString sqlQuery = "UPDATE tblMeldung SET Zitat = " + QString::number(_meldung->getZitat()->getID()) + ", Grund = '" + _meldung->getGrund() + "', Sender = " + QString::number(_meldung->getSender()->getID()) + " WHERE ID = " + QString::number(_id) + ";";
    bool qryResult = db.open();
    QSqlQuery qry;

    qryResult = qry.exec(sqlQuery);
    db.close();
    return qryResult;
}

/*
 * Datenbankbefehl zum Aendern einer OrgEinheit
 * Autor: Lars
 */
bool SQLQuery::dbUpdateOrgEinheit(OrgEinheit *_orgEinheit, int _id)
{
    QString sqlQuery = "UPDATE tblOrgEinheit SET Bezeichnung = '" + _orgEinheit->getBezeichnung() + "', Jahr = '" + _orgEinheit->getJahr() + "'  WHERE ID = " + QString::number(_id) + ";";
    bool qryResult = db.open();
    QSqlQuery qry;

    qryResult = qry.exec(sqlQuery);
    db.close();
    return qryResult;
}

/*
 * Datenbankbefehl zum Aendern eines Zitats
 * Autor: Lars
 */
bool SQLQuery::dbUpdateZitat(Zitat *_zitat, int _id)
{
    QString sqlQuery = "UPDATE tblZitat SET Redner ='" + _zitat->getRedner() + "', Inhalt = '" + _zitat->getInhalt() + "', OrgEinheit = " + QString::number(_zitat->getOrgEinheit()->getID()) + ", Datum = '" + _zitat->getDatum().toString("yyyy-MM-dd") + "', EingetragenVon = " + QString::number(_zitat->getEingetragenVon()->getID()) + " WHERE ID = " + QString::number(_id) + ";";
    bool qryResult = db.open();
    QSqlQuery qry;

    qryResult = qry.exec(sqlQuery);
    db.close();
    return qryResult;
}

bool SQLQuery::checkAlreadyVoted(int _benutzerID, int _zitatID)
{
    bool didVote=false;

    QString sqlQuery;
    bool qryResult = db.open();
    QSqlQuery qry;

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
