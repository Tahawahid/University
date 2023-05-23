#include <iostream>
using namespace std;

template <typename T>
class Calculator
{
    T n1, n2;

public:
    void setNum1()
    {
        cout << "Enter number 1:";
        cin >> n1;
    }
    void setNum2()
    {
        cout << "Enter number 2:";
        cin >> n2;
    }
    T add()
    {
        T result;
        result = n1 + n2;
        return result;
    }
    T minus()
    {
        T result;
        if (n1 > n2)
        {
            result = n1 - n2;
        }
        else
        {
            result = n2 - n1;
        }
        return result;
    }
    T multi()
    {
        T result;
        result = n1 * n2;
        return result;
    }
    T div()
    {
        T result;
        if ((n1 > n2) && n2 != 0)
        {
            result = n1 / n2;
        }
        else if ((n2 > n1) && n1 != 0)
        {
            result = n2 / n1;
        }
        else
        {
            cout << "\nWrong input...\n";
            system("cls");
            manu();
        }
        return result;
    }
    void manu()
    {
        int choice;

        setNum1();
        setNum2();
        do
        {
            cout << "[1] ADDITION\n";
            cout << "[2] SUBTRACTION\n";
            cout << "[3] MULTIPLICATION\n";
            cout << "[4] DIVISION\n";
            cout << "Enter your choice: ";
            cin >> choice;
        } while (choice > 4);
        switch (choice)
        {
        case 1:
            cout << "Addition is      : " << add();
            break;
        case 2:
            cout << "Subtraction is   : " << minus();
            break;
        case 3:
            cout << "Multiplication is: " << multi();
            break;
        case 4:
            cout << "Division is      : " << div();
            break;
        }
    }
};

int main()
{
    Calculator<int> c;
    c.manu();
}
