#include "orgeinheit.h"

/*
 * Standardkonstruktor
 * Autor: Lars
 */
OrgEinheit::OrgEinheit()
{

}

/*
 * Konstruktor
 * Autor: Lars
 */
OrgEinheit::OrgEinheit(int p_id, QString p_bezeichnung, QString p_jahr)
{
    this->id = p_id;
    this->bezeichnung = p_bezeichnung;
    this->jahr = p_jahr;
}

/*
 * Destruktor
 * Autor: Lars
 */
OrgEinheit::~OrgEinheit()
{

}

/*
 * Setter und Getter
 * Autor: Lars
 */
int OrgEinheit::getID()
{
    return this->id;
}

void OrgEinheit::setID(int p_id)
{
    this->id = p_id;
}

QString OrgEinheit::getBezeichnung()
{
    return this->bezeichnung;
}

void OrgEinheit::setBezeichnung(QString p_bezeichnung)
{
    this->bezeichnung = p_bezeichnung;
}

QString OrgEinheit::getJahr()
{
    return this->jahr;
}

void OrgEinheit::setJahr(QString p_jahr)
{
    this->jahr = p_jahr;
}

/*QVector<Zitat *> OrgEinheit::getZitate()
{
    return this->zitate;
}

void OrgEinheit::setZitate(QVector<Zitat *> p_zitate)
{
    this->zitate = p_zitate;
}
*/
