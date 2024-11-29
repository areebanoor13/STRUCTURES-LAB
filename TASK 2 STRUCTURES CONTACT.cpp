//Declare a structure Contact that has a name, address, mobile number. Now create and (hardcoded) initialize an array of 10 contact instances. Prompt the user to enter the 
//starting letters of the name to be searched. Your program must now print the details of only those contacts whose name start with the letter specified by the user. 
//E.g. if the user enters S (independent of case) then your program will print all that contacts whose name start with sa i.e. saima, sara, saad, sarmad etc. but if user
//entered sar then only sara and sarmad would be printed
#include <iostream>
using namespace std;

struct Contact {
    string name;
    string address;
    string mobile;
};

int main() {
    Contact contacts[10] = {
        {"Saima", "123 Street A", "03001234567"},
        {"Sara", "456 Street B", "03007654321"},
        {"Saad", "789 Street C", "03111234567"},
        {"Sarmad", "101 Street D", "03211234567"},
        {"Ali", "111 Street E", "03331234567"},
        {"Zara", "121 Street F", "03451234567"},
        {"Ahmed", "131 Street G", "03561234567"},
        {"Sana", "141 Street H", "03671234567"},
        {"Bilal", "151 Street I", "03781234567"},
        {"Sameer", "161 Street J", "03891234567"}
    };

    string query;
    cout << "Enter the starting letters of the name to search: ";
    cin >> query;

    for (char &ch : query) {
        ch = tolower(ch);
    }

    bool found = false;
    for (const auto &contact : contacts) {
        string nameLower = contact.name;
        for (char &ch : nameLower) {
            ch = tolower(ch);
        }
        if (nameLower.find(query) == 0) {
            found = true;
            cout << "Name: " << contact.name << ", Address: " << contact.address << ", Mobile: " << contact.mobile << endl;
        }
    }

    if (!found) {
        cout << "No contacts found starting with \"" << query << "\"." << endl;
    }

    return 0;
}
