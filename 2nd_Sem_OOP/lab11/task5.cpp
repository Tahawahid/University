#include <iostream>
using namespace std;

class Exception
{
private:
    float num1, num2, result;
    char op;

public:
    Exception();
    ~Exception();
    void setData();
    void cacl();
    bool check(float);
    bool check(char);
};

Exception::Exception()
{
    setData();
    cacl();
}

Exception::~Exception()
{
}

void Exception::cacl()
{
    char choice;
    if (check(num2) && check(op))
    {
        if (op == '+')
        {
            cout << "\nSum is: " << num1 + num2;
        }
        if (op == '-')
        {
            cout << "\nDiff is: " << num1 - num2;
        }
        if (op == '*')
        {
            cout << "\nMulti is: " << num1 * num2;
        }
        if (op == '/')
        {
            cout << "\nDivision is: " << num1 / num2;
        }
    }
    else
    {
        cout << "\nWould you like to perforn any other calculation(y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'n')
        {
            setData();
            cacl();
        }
    }
}
void Exception::setData()
{
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter the operation(+,-,*,/): ";
    cin >> op;
}

bool Exception::check(float n2)
{
    try
    {
        if (n2 <= 0)
        {
            throw(1);
        }
        else
        {
            return true;
        }
    }
    catch (int n1)
    {
        cout << "\nA number cannot be a 0 when dividing";
        return false;
    }
}

bool Exception::check(char operand)
{
    try
    {
        if (operand == '/' || operand == '+' || operand == '-' || operand == '*')
        {
            return true;
        }
        else
        {
            throw(1);
        }
    }
    catch (int a)
    {
        cout << "\nYou have entered wrong operator you should enter b/w (+,-,*,/)";
        return false;
    }
}
int main()
{
    Exception e;
}