//
// Created by aziz on 9/18/24.
//

#include "database_interaction.h"
#include <mysql_driver.h>
#include <mysql_connection.h>
#include "../utilities/output.h"

#define HOSTNAME "tcp://127.0.0.1:3306"
#define USERNAME "root"
#define PASSWORD "admin123"

using database = database_interaction;

sql::mysql::MySQL_Driver *database_interaction::driver = nullptr;
sql::Connection *database_interaction::connection = nullptr;

void database::connect_to_db()
{
    database::driver = sql::mysql::get_mysql_driver_instance();
    database::connection = driver->connect(HOSTNAME, USERNAME, PASSWORD);
    output::print("Connected to MySQL server");
}
