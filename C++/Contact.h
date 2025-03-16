#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {
private:
    std::string phone;
    std::string city;
    std::string country;

public:
    
    Contact();

    
    Contact(const std::string& phone);
    Contact(const std::string& phone, const std::string& city);
    Contact(const std::string& phone, const std::string& city, const std::string& country);

   
    void Show() const;
};

#endif
