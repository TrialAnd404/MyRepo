#ifndef BENUTZER_H
#define BENUTZER_H

#include <QString>
#include"orgeinheit.h"
//#include "zitat.h"

class Benutzer
{
private:
    int id;
    QString nutzername;
    QString passwort;
    QString vorname;
    QString nachname;
    OrgEinheit* jahrgang;
//    QVector<Zitat*> eingetrageneZitate;
//    QVector<Zitat*> upvote;
//    QVector<Zitat*> downvote;
public:
    Benutzer(QString p_nutzername, QString p_passwort, QString p_vorname, QString p_nachname, OrgEinheit* p_jahrgang);
    int getID();
    void setID(int p_id);
    QString getNutzername();
    void setNutzername(QString p_nutzername);
    QString getPasswort();
    void setPasswort(QString p_passwort);
    QString getVorname();
    void setVorname(QString p_vorname);
    QString getNachname();
    void setNachname(QString p_nachname);
    OrgEinheit* getJahrgang();
    void setJahrgang(OrgEinheit* p_jahrgang);
/*    QVector<Zitat*> getEingetrageneZitate();
    void setEingetrageneZitate(QVector<Zitat*> p_eingetrageneZitate);
    QVector<Zitat*> getUpvote();
    void setUpvote(QVector<Zitat*> p_upvote);
    QVector<Zitat*> getDownvote();
    void setDownvote(QVector<Zitat*> p_downvote);*/
};

#endif // BENUTZER_H
