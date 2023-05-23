#include <iostream>
using std::cin;
using std::cout;

int main()
{
    float a, b, c, d, e, x, y, z, eq1, eq2;

    cout << "To slve the Eq: a+b-c/d*e. provide the respected values\n";
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    cout << "Enter the value of d: ";
    cin >> d;
    cout << "Enter the value of e: ";
    cin >> e;

    eq1 = a + (b - ((c / d) * e));
    cout << "Your solution is: " << eq1 << "\n";
    cout << "<------------------>\n";

    cout << "To slve the Eq: x*y-z+x/y. provide the respected values\n";
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of z: ";
    cin >> z;

    eq2 = ((x * y) + ((x / y) - z));
    cout << "Your solution is: " << eq2 << "\n";
    return 0;
}