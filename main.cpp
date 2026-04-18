#include "Contact.h"

// 5. [ Malak ] - UI & Menu Flow
int main() {
    ContactsManager myManager;
    int choice;

    while (true) {
        cout << "\n=== CONTACTS MANAGEMENT SYSTEM ===" << endl;
        cout << "1. Add Contact\n2. Show All\n3. Search\n4. Update\n0. Exit" << endl;
        cout << "Selection: ";
        cin >> choice;

        if (choice == 1) {
            string n, p;
            cout << "Enter Name: "; cin >> n;
            cout << "Enter Phone: "; cin >> p;
            myManager.addContact(Contact(n, p));
        } else if (choice == 2) {
            myManager.displayAll();
        } else if (choice == 0) {
            break;
        }
    }
    return 0;
}
