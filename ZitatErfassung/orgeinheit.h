#ifndef ORGEINHEIT_H
#define ORGEINHEIT_H

#include <QString>
#include "QObject"

/*
 * Modelklasse OrgEinheit
 * Autor: Lars
 */
class OrgEinheit
{
private:
    int id;
    QString bezeichnung;
    QString jahr;
    //QVector<Zitat*> zitate;
public:
    OrgEinheit();
    OrgEinheit(int p_id, QString p_bezeichnung, QString p_jahr);
    ~OrgEinheit();
    int getID();
    void setID(int p_id);
    QString getBezeichnung();
    void setBezeichnung(QString p_bezeichnung);
    QString getJahr();
    void setJahr(QString p_jahr);
    //QVector<Zitat*> getZitate();
    //void setZitate(QVector<Zitat*> p_zitate);
};

#endif // ORGEINHEIT_H
