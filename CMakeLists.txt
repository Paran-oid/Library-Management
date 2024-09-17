cmake_minimum_required(VERSION 3.29)
project(Library_Management)

set(CMAKE_CXX_STANDARD 26)

set(FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR /home/aziz/Documents/Programming/Learning/C++/Library-Management/mysql-conn-c++)
include_directories(${FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR}/include/jdbc)
link_directories(${FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR}/lib64)
add_executable(Library_Management main.cpp)

link_directories(/usr/lib/x86_64-linux-gnu)


target_link_libraries(Library_Management curl mysqlcppconn)