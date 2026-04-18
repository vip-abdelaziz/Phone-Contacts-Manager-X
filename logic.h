#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. [ Mahira ] - Data Architecture
class Contact {
private:
    string name, phone, email, address;
public:
    Contact(string n, string p, string e = "N/A", string a = "N/A") 
        : name(n), phone(p), email(e), address(a) {}

    string getName() const { return name; }
    void display() const {
        cout << "Name: " << name << " | Phone: " << phone << endl;
        cout << "Email: " << email << " | Address: " << address << endl;
        cout << "--------------------------------" << endl;
    }
};

class ContactsManager {
private:
    vector<Contact> contacts;
public:
    // 2. [ Karim Zaid ] - Addition Logic
    void addContact(const Contact& c) {
        contacts.push_back(c);
    }

    // 3. [ Maha ] - Search Logic
    void searchContact(string target) {
        bool found = false;
        for (const auto& c : contacts) {
            if (c.getName() == target) {
                c.display();
                found = true;
            }
        }
        if (!found) cout << "Contact not found!" << endl;
    }

    // 4. [ Karim ] - Update Logic
    void updateContact(string target) {
        // Karim will implement update logic here
    }

    void displayAll() {
        for (const auto& c : contacts) c.display();
    }
};

#endif
