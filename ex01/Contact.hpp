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
    void setFirstName(std::string name);
    void setLastName(std::string lastn);
    void setPhoneNumber(std::string number);
    void setNickname(std::string nickn);
    void setDarkestSecret(std::string secret);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getPhoneNumber() const;
    std::string getNickname() const;
    std::string getDarkestSecret() const;
};

#endif

