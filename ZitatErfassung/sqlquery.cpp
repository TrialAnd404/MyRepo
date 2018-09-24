#include "sqlquery.h"
#include <benutzereinstellungen.h>
#include <ui_frmmain.h>
#include <frmmain.h>

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
