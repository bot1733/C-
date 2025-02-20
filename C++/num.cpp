#include <iostream>

class Contact {
private:
    std::string* name;
    std::string homePhone;
    std::string workPhone;
    std::string mobilePhone;
    std::string additionalInfo;

public:
    Contact(const std::string& name, const std::string& homePhone, const std::string& workPhone, 
            const std::string& mobilePhone, const std::string& additionalInfo)
    {
        this->name = new std::string(name);
        this->homePhone = homePhone;
        this->workPhone = workPhone;
        this->mobilePhone = mobilePhone;
        this->additionalInfo = additionalInfo;
    }
    
    ~Contact() {
        delete name;
    }
    
    void display() const {
        std::cout << "Name: " << *name << "\nHome Phone: " << homePhone
                  << "\nWork Phone: " << workPhone << "\nMobile Phone: " << mobilePhone
                  << "\nAdditional Info: " << additionalInfo << "\n" << std::endl;
    }
    
    std::string getName() const { return *name; }
};

class PhoneBook {
private:
    Contact* contacts[100];
    int count;

public:
    PhoneBook() : count(0) {}
    
    void addContact(Contact* contact) {
        if (count < 100) {
            contacts[count++] = contact;
        }
    }
    
    void deleteContact(const std::string& name) {
        for (int i = 0; i < count; i++) {
            if (contacts[i]->getName() == name) {
                delete contacts[i];
                for (int j = i; j < count - 1; j++) {
                    contacts[j] = contacts[j + 1];
                }
                count--;
                return;
            }
        }
    }
    
    void searchContact(const std::string& name) const {
        for (int i = 0; i < count; i++) {
            if (contacts[i]->getName() == name) {
                contacts[i]->display();
                return;
            }
        }
        std::cout << "Contact not found." << std::endl;
    }
    
    void displayAll() const {
        for (int i = 0; i < count; i++) {
            contacts[i]->display();
        }
    }
    
    ~PhoneBook() {
        for (int i = 0; i < count; i++) {
            delete contacts[i];
        }
    }
};

int main() {
    PhoneBook phoneBook;
    phoneBook.addContact(new Contact("John Doe", "123-456", "987-654", "555-555", "Friend"));
    phoneBook.displayAll();
    return 0;
}
