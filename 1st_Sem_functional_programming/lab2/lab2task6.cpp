#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string name, fatherName, address;
    int phone;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter Father name: ";
    getline(cin, fatherName);
    cout << "Enter your address: ";
    getline(cin, address);
    cout << "Enter your phone: ";
    cin >> phone;

    cout << "\n\n<--------------->\n\n";
    cout << "****************************************\n";
    cout << "*Your name is:       " << name << "\t*\n";
    cout << "*Your fathername is: " << fatherName << "\t*\n";
    cout << "*Your address is:    " << address << "\t*\n";
    cout << "*Your phone no. is:  " << phone << "\t*\n";
    cout << "****************************************";

    return 0;
}