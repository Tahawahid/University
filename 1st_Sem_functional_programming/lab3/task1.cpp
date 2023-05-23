// Q) take two int values from user and print greatest among them

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n1, n2;

    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;

    if (n1 > n2)
        cout << "Number 1 is greatest: " << n1;
    else
        cout << "Number 2 is greatest: " << n2;

    return 0;
}