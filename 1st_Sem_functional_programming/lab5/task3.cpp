// 3. Write a program to perform multiplication without using multiplication
// sign.

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int num, times, i, sum;

    cout << "Enter the first multiplication number: ";
    cin >> num;
    cout << "Enter the times you want to multiply: ";
    cin >> times;
    sum = 0;
    for (i = 1; i <= times; i++)
    {
        sum = sum + num;
    }
    cout << sum;
    return 0;
}