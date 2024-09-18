//
// Created by aziz on 9/18/24.
//

#include <mysql_driver.h>
#include <mysql_connection.h>

#ifndef DATABASE_INTERACTION_H
#define DATABASE_INTERACTION_H


class database_interaction {
public:
    static void connect_to_db();
    static sql::mysql::MySQL_Driver *driver;
    static sql::Connection *connection;
};



#endif //DATABASE_INTERACTION_H