#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;    
public:
  
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickname(std::string nickname);
    void setPhoneNumber(std::string phoneNumber);
    void setDarkestSecret(std::string darkestSecret);
    
    
    // Getters - what return type? should they be const?
};

#endif