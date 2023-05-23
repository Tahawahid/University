// A shop will give discount of 10% if the cost of purchased Quantity is more than 1000
// ask user fro quantity
// suppose one unit will cost 100
// judge and print total cost for user

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    float qty, price = 100, per = 0.90, total;

    cout << "Enter the Quantity: ";
    cin >> qty;
    if (qty > 10)
    {
        cout << "Conratulations! You just avail the 10% discount\n";
        total = qty * price * per;
        cout << "Your total after 10% discount is: " << total;
    }
    else
    {
        cout << "We are very sorry, you cannot avail the 10% discount :(\n";
        total = qty * price;
        cout << "Your total is: ";
    }
    return 0;
}