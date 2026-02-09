#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
    this->totalContacts=0;
}

void PhoneBook::addContact()
{
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
    
    std::cout << "Enter First Name: ";
    if (!std::getline(std::cin, firstName))
        return;
    std::cout << "Enter Last Name: ";
    if (!std::getline(std::cin, lastName))
        return;
    std::cout << "Enter Nickname: ";
    if (!std::getline(std::cin, nickname))
        return;
    std::cout << "Enter Phone Number: ";
    if (!std::getline(std::cin, phoneNumber))
        return;
    std::cout << "Enter Darkest Secret: ";
    if (!std::getline(std::cin, darkestSecret))
        return;

    if (firstName.empty() || lastName.empty() || nickname.empty()
        || phoneNumber.empty() || darkestSecret.empty())
    {
        std::cout << "Error: fields cannot be empty." << std::endl;
        return;
    }
    contacts[index].setFirstName(firstName);
    contacts[index].setLastName(lastName);
    contacts[index].setNickname(nickname);
    contacts[index].setPhoneNumber(phoneNumber);
    contacts[index].setDarkestSecret(darkestSecret);

    index = (index + 1) % 8;
    if (totalContacts < 8)
        totalContacts++;
}

std::string PhoneBook::formatField(std::string str)
{
    std::string result;
    
    if (str.length() > 10)
        result = str.substr(0, 9) + ".";
    else
        result = str;
    while (result.length() < 10)
        result = result + " ";
    return result;
}

void PhoneBook::displayContact(int i)
{
    std::string indexStr;
    indexStr = i + '0';
    
    std::cout << formatField(indexStr) << "|";
    std::cout << formatField(contacts[i].getFirstName()) << "|";
    std::cout << formatField(contacts[i].getLastName()) << "|";
    std::cout << formatField(contacts[i].getNickname()) << std::endl;
}

void PhoneBook::searchContact()
{
    int         i;
    int         choice;
    std::string input;   
    
    if(totalContacts == 0)
    {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }
    std::cout << formatField("Index") << "|";
    std::cout << formatField("First Name") << "|";
    std::cout << formatField("Last Name") << "|";
    std::cout << formatField("Nickname") << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    i = 0;
    while(i < totalContacts)
    {
        displayContact(i);
        i++;    
    }

    std::cout << "Enter the index of the contact you want to view: ";
    std::getline(std::cin, input);

    if(input.length() != 1 || !isdigit(input[0]))
    {
        std::cout << "Invalid input!" << std::endl;
        return;
    }

    choice = input[0] - '0';

    if(choice < 0 || choice >= totalContacts)
    {
        std::cout << "Invalid out of range!" << std::endl;
        return;
    }
    std::cout << "----------------- Contact Details -----------------" << std::endl;
    std::cout << "First Name: " << contacts[choice].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[choice].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[choice].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[choice].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[choice].getDarkestSecret() << std::endl;
}

