#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(int ac ,char **av)
{
    (void)av ;
    if (ac != 1)
        return 0;
    PhoneBook phonebook;
    std::string line;

    std::cout << "=================== Welcome to your PhoneBook! ===================" << std::endl;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, line))
            break;
        if (line == "ADD" || line == "add")
            phonebook.addContact();
        else if (line == "SEARCH" || line == "search")
            phonebook.searchContact();
        else if (line == "EXIT" || line == "exit")
            break;
        else
            std::cout << "Unknown command: " << line << std::endl;
    }
    

    std::cout << "============================ Goodbye! ============================" << std::endl;
    return 0;

}
