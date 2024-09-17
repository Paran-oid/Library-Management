#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>

int main()
{
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *connection;

    driver = sql::mysql::get_mysql_driver_instance();
    connection = driver->connect("tcp://127.0.0.1:3306", "root", "admin123");

    std::cout << "Connected to MySQL server" << std::endl;
    delete connection;
    return 0;
}
