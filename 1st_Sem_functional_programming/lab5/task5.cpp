// 5. Write a program that will take input and calculate its factorial using while
// loop.

#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int factorial, i, num;

    cout << "Enter the factorial number: ";
    cin >> num;
    i = 1;
    factorial = 1;
    while (i <= num)
    {
        factorial = factorial * i;
        i++;
    }
    cout << factorial;
    return 0;
}