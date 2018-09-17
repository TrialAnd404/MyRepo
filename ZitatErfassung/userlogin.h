#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QString>

class Userlogin
{
public:
    Userlogin();
    bool checkLoginCredentials(QString user, QString passwrd);
};

#endif // USERLOGIN_H
