#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i, j;
    for (i = 2; i <= 100; i++)
    {
        int temp = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                temp++;
                break;
            }
        }
        if (temp == 0)
        {
            cout << j << " is prime\n";
        }
    }
    return 0;
}