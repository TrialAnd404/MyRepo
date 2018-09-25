#include <QString>
#include <QDebug>
#include "frmmain.h"
#include "ui_frmmain.h"

#ifndef SQLQUERY_H
#define SQLQUERY_H

#include <QtSql>

class SQLQuery
{
private:
    QSqlDatabase db;
public:
    SQLQuery();
    QString datenbankOperation(QString p_Query);
};

#endif // SQLQUERY_H
