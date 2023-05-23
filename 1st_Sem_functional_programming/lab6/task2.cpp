#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i, j, row;
    cout << "Enter the number of rows: ";
    cin >> row;
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}