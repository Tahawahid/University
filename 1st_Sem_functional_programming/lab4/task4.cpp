#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int num, choice;
    cout << "What do you want to know?\n";
    cout << "1. Positive: \n";
    cout << "2. Negaive: \n";
    cout << "3. Even: \n";
    cout << "4. Odd: \n";
    cin >> choice;
    cout << "Enter the number: ";
    cin >> num;
    switch (choice)
    {
    case 1:
        if (num >= 0)
            cout << num << " is positive number";
        else
            cout << num << " is not a positive number";
        break;
    case 2:
        if (num < 0)
            cout << num << " is negative number";
        else
            cout << num << " is not a negative number";
        break;
    case 3:
        if (num % 2 == 0)
            cout << num << " is even";
        else
            cout << num << " is not even";
        break;
    case 4:
        if (num % 2 == 1)
            cout << num << " is odd";
        else
            cout << num << " is not an odd";
        break;
    }
}