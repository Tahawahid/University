#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i, j, row;
    cout << "Enter thr number of rows: ";
    cin >> row;

    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}