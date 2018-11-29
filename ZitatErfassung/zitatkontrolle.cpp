#include "zitatkontrolle.h"

/*
 * Konstruktor
 * Autor: Lars
 */
ZitatKontrolle::ZitatKontrolle()
{
    this->dbConnector = SQLQuery::getDBConnector();
}

/*
 * Destruktor
 * Autor: Lars
 */
ZitatKontrolle::~ZitatKontrolle()
{

}

/*
 * Erstellen und Senden eines Zitates an die Datenbank
 * Autor: Lars
 */
bool ZitatKontrolle::legeZitatAn(QString p_zitat, QString p_redner, QDate p_datum)
{
    Benutzer* nutzer = SessionInfo::getSessionInfo()->getAktNutzer(); // aktueller Benutzer
    OrgEinheit* orgE = nutzer->getJahrgang();
    Zitat* zit = new Zitat();
    zit->setInhalt(p_zitat);
    zit->setRedner(p_redner);
    zit->setDatum(p_datum);
    zit->setOrgEinheit(orgE);
    zit->setEingetragenVon(nutzer);
    return this->dbConnector->dbInsertZitat(zit);
}

/*
 * Holen der Zitate aus der Datenbank
 * Autor: Lars
 */
QVector<Zitat*> ZitatKontrolle::holeZitate(OrgEinheit *p_jahrgang)
{
    int orgID = p_jahrgang->getID();
    return dbConnector->dbSelectZitat("OrgEinheit", QString::number(orgID));
}

/*
 * Loeschen eines Zitates
 * Autor: Lars
 */
bool ZitatKontrolle::loescheZitat(Zitat *_zit)
{
    return this->dbConnector->dbDelete("tblZitat", _zit->getID());
}

/*
 * Holen der OrgEinheiten aus der Datenbank
 * Autor: Lars
 */
QVector<OrgEinheit *> ZitatKontrolle::holeOE()
{
    return dbConnector->dbSelectOrgEinheit();
}

/*
 * Aendern eines Zitates
 * Autor: Lars
 */
bool ZitatKontrolle::aendereZitat(Zitat *_zit)
{
    return this->dbConnector->dbUpdateZitat(_zit, _zit->getID());
}

/*
 * Download/Export von Zitaten
 * Autor: Tim
 */
bool ZitatKontrolle::zitateDownload()
{
    QVector<OrgEinheit *> orgeinheitListe = this->holeOE();
    //Alle Orgeinheiten holen und durch das array iterieren. Das ist ein KOMPLETTER download von Daten
    //Für einzelne Orgeinheiten müsste man diese Methode umschreiben und ggf überladen dass nur von einer OrgEineheit
    //gesaugt wird.
    for (int j=0; j<orgeinheitListe.size(); j++)
    {
        QVector<Zitat*> zitatListe = this->holeZitate(orgeinheitListe[j]);
        //Filename erstellen
        QDate date = QDate::currentDate();
        QString filename = "";
        QString oeName = orgeinheitListe[j]->getBezeichnung();
        filename += oeName+"ZitateSammlung_" +QString::number(date.day())+"_"+QString::number(date.month())+"_"+QString::number(date.year())+".csv";
        // OE1ZitateSammlung_Tag_Monat_Jahr.csv für -relativ- eindeutige Filenamen und leichte archivierung

        //Textstream zum file erstellen
        QFile file(filename);
        if (file.exists())
            file.remove();
        //Löschen falls File schon mit dem Namen existiert -> überschreiben des files
        file.open(QIODevice::WriteOnly);
        QTextStream stream(&file);

        //iterieren durch zitatListe und streamen von CSV-Daten zum File
        for (int i=0; i<zitatListe.size(); i++)
        {
            QString currentRecord = zitatListe[i]->toCSV();
            stream << currentRecord << endl;
        }

        file.close();
        /*
         * Wenn man dieses file.close woanders setzt, bleibt das file geöffnet.
         * Dann kann man theoretisch mehrere ZitatListen aus mehreren OrgEinheiten
         * Zusammengefasst in ein File streamen.
        */
    }
}
