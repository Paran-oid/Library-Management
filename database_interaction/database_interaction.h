//
// Created by aziz on 9/18/24.
//

#include <mysql_driver.h>
#include <mysql_connection.h>
#include "../Models/book.h"

#ifndef DATABASE_INTERACTION_H
#define DATABASE_INTERACTION_H


class database_interaction {
public:
    static void connect_to_db();
    static std::vector<book> find_books();


    static sql::mysql::MySQL_Driver *driver;
    static sql::Connection *connection;
};



#endif //DATABASE_INTERACTION_H
