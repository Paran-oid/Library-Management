//
// Created by aziz on 9/18/24.
//

#include "database_interaction.h"
#include <mysql_driver.h>
#include <mysql_connection.h>
#include "output.h"
#include <cppconn/resultset.h>
#include <cppconn/prepared_statement.h>

#define HOSTNAME "tcp://127.0.0.1:3306"
#define USERNAME "root"
#define PASSWORD "admin123"
#define DATABASE "mydb"

using database = database_interaction;

sql::mysql::MySQL_Driver *database_interaction::driver = nullptr;
sql::Connection *database_interaction::connection = nullptr;

void database::connect_to_db()
{
    database::driver = sql::mysql::get_mysql_driver_instance();
    database::connection = driver->connect(HOSTNAME, USERNAME, PASSWORD);
    database::connection->setSchema(DATABASE);
    output::print("Connected to MySQL server");
}

std::optional<std::vector<book>> database_interaction::find_books()
{

    std::unique_ptr<sql::Statement> stmt(connection -> createStatement());
    std::string query = "SELECT * FROM books";

    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));
    std::vector<book> books;

    while(res->next())
    {
        book b;
        b.id = res->getInt("id");
        b.title = res->getString("title");
        books.push_back(b);
    }
    return books;
}
