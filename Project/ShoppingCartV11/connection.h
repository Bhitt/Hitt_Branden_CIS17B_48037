#ifndef CONNECTION_H
#define CONNECTION_H

#include <QApplication>
#include <QSql>
#include <QSqlQuery>
#include <QSqlDatabase>

struct connection
{
public:
    QSqlDatabase db;
    bool connected;
};

#endif // CONNECTION_H
