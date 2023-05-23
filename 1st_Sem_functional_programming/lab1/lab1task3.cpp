// Q3. Write a program that will take 5 numbers input and print Average.

#include <iostream>
using std::cin;
using std::cout;
int main()
{

    int num1, num2, num3, num4, num5, sum;
    float avg;

    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Enter Third Number: ";
    cin >> num3;
    cout << "Enter Fourth Number: ";
    cin >> num4;
    cout << "Enter Fifth Number: ";
    cin >> num5;
    sum = num1 + num2 + num3 + num4 + num5;
    avg = sum / 5;
    cout << "Average is: " << avg;
    return 0;
}