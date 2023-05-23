// 1. Write a program that will take starting and ending point as input and print
// all the even and odd numbers.

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int start, end, even, odd, i;

    cout << "Enter from where you want to start the counting: ";
    cin >> start;
    cout << "Enter from where you want to end the counting: ";
    cin >> end;
    even = 0;
    odd = 1;
    for (i = start; i <= end; i++)
    {
        even = even + 2;
        odd = odd + 2;
        cout << "\nThe even numbers are: \t\t" << even;
        cout << "\nThe odd numbers are: \t\t" << odd;
    }
    return 0;
}