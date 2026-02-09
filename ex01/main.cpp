#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(int ac ,char **av)
{
    (void)av;
    if (ac != 1)
    {
       std::cout << "Error: This program does not accept arguments." << std::endl;
       return 1;
    }
    PhoneBook phonebook;
    std::string line;
    std::cout << "=================== Welcome to your PhoneBook! ===================" << std::endl;
    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, line))
            break;
        if (line == "ADD")
            phonebook.addContact();
        else if (line == "SEARCH")
            phonebook.searchContact();
        else if (line == "EXIT")
            break;
        else
            std::cout << "Unknown command." << std::endl;
    }
    std::cout << "============================ Goodbye! ============================" << std::endl;
    return 0;

}
