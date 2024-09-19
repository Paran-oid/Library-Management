//
// Created by aziz on 9/19/24.
//

#include <iostream>
#include "input.h"
#include "output.h"

void input::display_menu()
{
    output::print("Hello user, what would you like to do?");
    output::print("1. Search for a book");
    output::print("2. Sell a book");
    output::print("3. Exit");

    int choice;
    std::cin >> choice;
}
