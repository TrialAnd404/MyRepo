#include "sqlquery.h"
#include <benutzereinstellungen.h>

SQLQuery::SQLQuery()
{
    //Datenbank anbindung
    QString dbPfad = QApplication::applicationDirPath() + "/DBZitat.sqlite";


    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPfad);
    //Datenbank anbindung END
}

QString SQLQuery::datenbankOperation(QString p_Query)
{
    //QString ausgabe;



    db.open();

    QString sqlBefehl ="INSERT INTO tblBenutzerAdmin (Nutzername, Passwort, Vorname, Nachname, Jahrgang) VALUES ('MPS', '1234', 'Pascal', 'Schmotz', '2018');";
    QSqlQuery qry;
    qry.exec(sqlBefehl);
    qDebug() << qry.lastError().text();


    db.close();
/*
    while(qry.next())
    {
        ausgabe = qry.value(0).toString();
    }
*/



}
