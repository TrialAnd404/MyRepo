#ifndef ZITAT_H
#define ZITAT_H

#include <QString>
#include <QVector>
#include <QDate>
#include "benutzer.h"
#include "orgeinheit.h"

/*
 * Modelklasse Zitat
 * Autor: Lars
 */
class Zitat
{
private:
    int id;
    QString redner;
    QString inhalt;
    OrgEinheit* orgEinheit;
    QDate datum;
    Benutzer* eingetragenVon;
    QVector<Benutzer*> upvote;
    QVector<Benutzer*> downvote;
public:
    Zitat();
    Zitat(int p_id, QString p_redner, QString p_inhalt, OrgEinheit* p_kurs_jahrgang, QDate p_datum, Benutzer* eingetragenVon);
    ~Zitat();
    int getID();
    void setID(int p_id);
    QString getRedner();
    void setRedner(QString p_redner);
    QString getInhalt();
    void setInhalt(QString p_inhalt);
    OrgEinheit* getOrgEinheit();
    void setOrgEinheit(OrgEinheit* p_orgEinheit);
    QDate getDatum();
    void setDatum(QDate p_datum);
    Benutzer* getEingetragenVon();
    void setEingetragenVon(Benutzer* p_eingetragenVon);
    QVector<Benutzer*> getUpvote();
    void setUpvote(QVector<Benutzer*> p_upvote);
    QVector<Benutzer*> getDownvote();
    void setDownvote(QVector<Benutzer*> p_downvote);
};

#endif // ZITAT_H
