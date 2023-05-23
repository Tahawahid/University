#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int angle1, angle2, angle3, sum;

    cout << "Enter Angle 1: ";
    cin >> angle1;
    cout << "Enter Angle 2: ";
    cin >> angle2;
    cout << "Enter Angle 3: ";
    cin >> angle3;
    sum = angle1 + angle2 + angle3;
    if (sum == 180)
        cout << "Valid Triangle";
    else
        cout << "Not a Valid Triangle";
    return 0;
}