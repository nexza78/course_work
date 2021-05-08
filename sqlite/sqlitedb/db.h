#ifndef DB_H
#define DB_H

#include<QtSql>

class Db
{
public:
    Db() = default;
    ~Db() = default;

    QSqlDatabase mydb;
    bool db_connected();
    void open_db();
    void close_db();

};
#endif // DB_H
