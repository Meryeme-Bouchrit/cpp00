#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
    std::string nickname;
    std::string darkestSecret;

public:
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setPhoneNumber(std::string phoneNumber);
    void setNickname(std::string nickname);
    void setDarkestSecret(std::string darkestSecret);

    std::string getFirstName();
    std::string getLastName();
    std::string getPhoneNumber();
    std::string getNickname();
    std::string getDarkestSecret();
};

#endif
