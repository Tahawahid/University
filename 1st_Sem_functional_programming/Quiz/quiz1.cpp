#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    float unit, total, charge, temp;
    int ID;
    string name;
    cout << "Enter your ID: ";
    cin >> ID;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Ente the electricity Unit: ";
    cin >> unit;

    if (unit <= 199)
    {
        charge = 1.20;
        total = unit * charge;
    }
    else if (unit >= 200 && unit < 400)
    {
        charge = 1.50;
        total = unit * charge;
    }
    else if (unit >= 400 && unit < 600)
    {
        charge = 1.80;
        total = unit * charge;
    }
    else if (unit >= 600)
    {
        charge = 2.0;
        total = unit * charge;
    }
    cout << "Customer ID: " << ID << "\n";
    cout << "Customer Name: " << name << "\n";
    cout << "Unit Consumed: " << unit << "\n";
    cout << "Amount Charges @ " << charge << " per unit: " << total << "\n";
    if (total >= 400)
    {
        temp = total * 0.15;
        total = total + temp;
    }
    cout << "Surchage Amount: " << temp << "\n";
    cout << "Net amount paid by the customer: " << total;
    return 0;
}