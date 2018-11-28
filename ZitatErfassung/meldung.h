#ifndef MELDUNG_H
#define MELDUNG_H

#include <QString>
#include "zitat.h"
#include "benutzer.h"

/*
 * Modelklasse Meldung
 * Autor: Lars
 */
class Meldung
{
private:
    int id;
    Zitat* zitat;
    QString grund;
    Benutzer* sender;
public:
    Meldung();
    Meldung(int p_id, Zitat* p_zitat, QString p_grund, Benutzer* p_sender);
    ~Meldung();
    int getID();
    void setID(int _id);
    Zitat* getZitat();
    void setZitat(Zitat* p_zitat);
    QString getGrund();
    void setGrund(QString p_grund);
    Benutzer* getSender();
    void setSender(Benutzer* p_sender);
};

#endif // MELDUNG_H
