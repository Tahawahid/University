// Q2) Write a program that will take 2 numbers input and print sum.

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n1;
    int n2;

    cout << "Enter First Number: ";
    cin >> n1; // taking number 1 as input
    cout << "Enter Second Number: ";
    cin >> n2; // taking number 2 as input
    cout << "Total is: " << n1 + n2 << "\n";

    return 0;
}