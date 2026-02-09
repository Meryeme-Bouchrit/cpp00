#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip> 
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int     index;
        int     totalContacts;
    
    public:
        PhoneBook();
        void        addContact();
        void        displayContact(int i);
        
        std::string formatField(std::string str);
        void        searchContact();

};

#endif

