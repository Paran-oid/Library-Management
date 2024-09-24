cmake_minimum_required(VERSION 3.29)
project(Library_Management)

set(CMAKE_CXX_STANDARD 26)

link_directories(
        ${CMAKE_SOURCE_DIR}/mysql-conn-c++/lib64

)

include_directories(
        ${CMAKE_SOURCE_DIR}/mysql-conn-c++/include/jdbc
        ${CMAKE_SOURCE_DIR}/database_interaction
        ${CMAKE_SOURCE_DIR}/utilities
        ${CMAKE_SOURCE_DIR}/Models
)

add_library(database_interaction
        database_interaction/database_interaction.cpp
        database_interaction/database_interaction.h
)

add_library(utilities
        utilities/input.cpp
        utilities/input.h
        utilities/output.h
)

add_library(models
        Models/book.cpp
        Models/book.h
)


add_executable(Library_Management main.cpp)



target_link_libraries(
        Library_Management
        mysqlcppconn
        database_interaction
        utilities
        models
        curl
)