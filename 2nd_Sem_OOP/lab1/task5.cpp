#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class pattern
{

private:
    int rows;

public:
    void setPattern()
    {

        cout << "enter the number of rows: ";
        cin >> rows;
    }
    void getPattern()
    {

        for (int i = 1; i <= rows; ++i)
        {
            for (int j = 1; j <= i; ++j)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main()
{
    pattern A1;
    A1.setPattern();
    A1.getPattern();
}