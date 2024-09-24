//
// Created by aziz on 9/19/24.
//

#include <iostream>
#include "input.h"
#include "output.h"
#include "database_interaction.h"

void input::display_menu()
{
    bool isRunning = true;
    while(isRunning)
    {
        output::print("Hello user, what would you like to do?");
        output::print("1. Search for a book");
        output::print("2. Sell a book");
        output::print("3. Exit");

        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            {
                std::optional<std::vector<book>> books = database_interaction::find_books();
                if (books)
                {
                    for (const book& b : *books)
                    {
                        std::cout << "id: " << b.id << " " << std::endl;;
                        std::cout << b.title << std::endl;
                    }
                }
                else
                {
                    output::print("No books found.");
                }
                break;
            }
        case 2:
                output::print("Selling book feature is under construction.");
                break;
        case 3:
            isRunning = false;
            break;
        default:
            output::print("Invalid choice! Please enter a valid option.");
            break;
        }
        if(!isRunning)
        {
            break;
        }
        char decision {};
        std::cout << "leave program?(y/n)" << std::endl;
        std::cin >> decision;
        if(std::toupper(decision) == 'Y')
        {
            isRunning = false;
        }
    }
    std::cout << "thank you for trying my program!" << std::endl;
}
