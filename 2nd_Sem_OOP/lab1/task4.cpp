#include <iostream>
using std::cin;
using std::cout;
class fabunachi
{
    int num;

public:
    void setLength()
    {
        cout << "Enter the lenght of fabunachi series: ";
        cin >> num;
    }

    void fabSeries()
    {
        int c, n, p;
        n = c + p;

        while (n <= num)
        {
            cout << n << ", ";
            c = p;
            p = n;
            n = c + p;
        }
    }
};

int main()
{
    fabunachi F1;
    F1.setLength();
    F1.fabSeries();
}
