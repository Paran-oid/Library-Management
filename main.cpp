#include <iostream>

#include "database_interaction.h"
#include "input.h"

using database = database_interaction;


int main()
{
    database::connect_to_db();
    input::display_menu();
    return 0;
}