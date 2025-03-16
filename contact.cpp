#include <iostream>
#include "Contact.h"


Contact::Contact() : Contact("N/A", "N/A", "N/A") {}


Contact::Contact(const std::string& phone) : Contact(phone, "N/A", "N/A") {}


Contact::Contact(const std::string& phone, const std::string& city) : Contact(phone, city, "N/A") {}


Contact::Contact(const std::string& phone, const std::string& city, const std::string& country)
    : phone(phone), city(city), country(country) {}


void Contact::Show() const {
    std::cout << "Телефон: " << phone << "\\n";
    std::cout << "Місто: " << city << "\\n";
    std::cout << "Країна: " << country << "\\n";
}
