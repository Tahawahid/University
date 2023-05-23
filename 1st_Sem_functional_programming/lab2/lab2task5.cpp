#include <iostream>
using std::cin;
using std::cout;

int main()
{
    char a;
    int ASCII;

    cout << "Enter any character from A-z: ";
    cin >> a;
    ASCII = int(a);
    cout << "Your ASCII code for the character is: " << ASCII;
    return 0;
}