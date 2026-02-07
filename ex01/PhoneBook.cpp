#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
    nextIndex = 0;
}

void PhoneBook::addContact(const Contact& contact)
{
    contacts[nextIndex] = contact;
    nextIndex = (nextIndex + 1) % 8;
    if (count < 8)
        count++;
}

