cmake_minimum_required(VERSION 3.29)
project(Library_Management)

set(CMAKE_CXX_STANDARD 26)

set(FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR /home/aziz/Documents/Programming/Learning/C++/Library-Management/mysql-conn-c++)
include_directories(${FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR}/include/jdbc)
link_directories(${FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR}/lib64)
add_executable(Library_Management main.cpp
        database_interaction/database_interaction.cpp
        database_interaction/database_interaction.h
        utilities/output.h
        utilities/input.cpp
        utilities/input.h
        Models/book.cpp
        Models/book.h
        Data/stored_data.cpp
        Data/stored_data.h)

link_directories(/usr/lib/x86_64-linux-gnu)


target_link_libraries(Library_Management curl mysqlcppconn)