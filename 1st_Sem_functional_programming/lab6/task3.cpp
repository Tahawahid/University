#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    char i, j, end;
    cout << "Enter the alphabat at which you want to stop: ";
    cin >> end;

    for (i = 97; i <= int(end); i++)
    {
        for (j = 97; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}