#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QString>
#include "sqlquery.h"
#include "sessioninfo.h"

/*
 * Klasse zum Steuern der Benutzeranmeldung
 * Autor: Tim
 */
class Userlogin
{
public:
    Userlogin();
    ~Userlogin();
    bool checkLoginCredentials(QString user, QString passwrd);
private:
    SQLQuery* dbConnector;
};

#endif // USERLOGIN_H
