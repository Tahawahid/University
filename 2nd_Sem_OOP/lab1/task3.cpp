#include <iostream>
using std::cin;
using std::cout;

class numIdentification
{
private:
    int num;

public:
    void getNum()
    {
        cout << "Enter Number: ";
        cin >> num;
    }

    void evenOdd()
    {
        if (num % 2 == 0)
        {
            cout << "The number is even & ";
        }
        else
        {
            cout << "The number is odd & ";
        }
    }
    void posNeg()
    {
        if (num == 0)
        {
            cout << "the Number is neighter negative nor positive: ";
        }
        else if (num < 0)
        {
            cout << "the Number is negative: ";
        }
        else
        {
            cout << "the number is positive: ";
        }
    }
};

int main()
{
    numIdentification n1, n2, n3;
    n1.getNum();
    n2.getNum();
    n3.getNum();

    n1.evenOdd();
    n1.posNeg();
    cout << "\n\n\n";
    n2.evenOdd();
    n2.posNeg();
    cout << "\n\n\n";
    n3.evenOdd();
    n3.posNeg();
}
