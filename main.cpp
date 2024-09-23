#include <iostream>

#include "database_interaction/database_interaction.h"
#include "utilities/output.h"
#include "utilities/input.h"

using database = database_interaction;


int main()
{
    database::connect_to_db();
    input::display_menu();
    return 0;
}