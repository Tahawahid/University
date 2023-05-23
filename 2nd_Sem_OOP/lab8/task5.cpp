#include <iostream>
using std::cin;
using std::cout;

struct calculator
{
    int n1, n2, r;
};
void add(calculator obj)
{
    obj.r = obj.n1 + obj.n2;
    cout << "Sum is: " << obj.r;
}
void diff(calculator obj)
{

    if (obj.n1 >= obj.n2)
        obj.r = obj.n1 - obj.n2;
    else
        obj.r = obj.n2 - obj.n1;
    cout << "Difference is: " << obj.r;
}
void multi(calculator obj)
{
    obj.r = obj.n1 * obj.n2;
    cout << "Product: " << obj.r;
}
int main()
{

    calculator n;
    int choice;

    cout << "Enter The Number 1: ";
    cin >> n.n1;
    cout << "Enter The Number 2: ";
    cin >> n.n2;

    cout << "\n=======================\n";
    cout << "1) ADD\n";
    cout << "2) Difference\n";
    cout << "3) Product\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        add(n);
        break;
    case 2:
        diff(n);
        break;
    case 3:
        multi(n);
        break;
    }
}