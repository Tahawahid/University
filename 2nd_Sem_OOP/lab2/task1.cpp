#include <iostream>
using std::cin;
using std::cout;

class Calculation
{
public:
    int factorial(int n)
    {
        int fact = 1; // initializing the fact to 1
        for (int i = 1; i <= n; i++)
        {
            fact *= i; // calculationg the factorial by multiplying with i
        }
        return fact;
    }
};

int main()
{
    int n;
    Calculation c1; // declearing the object of class here
    cout << "Enter the number to find its factorial: ";
    cin >> n; // asking user to enter the number for factorial
    cout << "\nThe factorial of " << n << " is: ";
    cout << c1.factorial(n); // calling the class and passing the user given value into the method
}