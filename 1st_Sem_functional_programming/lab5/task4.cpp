// 4. Write a program that will take input until the user enters negative number
// and then print average.

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int num, sum, avg, i;
    i = 1;
    sum = 0;
    do
    {
        cout << "To stop enter a negative number\n";
        cout << "enter the " << i << " number: ";
        cin >> num;
        if (num > 0)
        {
            sum = sum + num;
            i++;
        }
    } while (num > 0);
    i--;
    avg = sum / i;
    cout << "The average is: " << avg;
    return 0;
}