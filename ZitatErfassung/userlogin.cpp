#include "userlogin.h"

Userlogin::Userlogin()
{

}

bool Userlogin::checkLoginCredentials(QString p_user, QString p_passwrd)
{
    QString qry = "SELECT * FROM tblUser WHERE user LIKE '"+p_user+"' AND passwrd LIKE '"+p_passwrd+"'";
    //Datenbankabfrage auf user && passwrd returnt true für erfolgreichen Select
    return (true); //TODO: qry Abfragen in Datenbank
}
