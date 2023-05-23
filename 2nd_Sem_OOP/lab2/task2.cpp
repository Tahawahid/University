#include <iostream>
using std::cin;
using std::cout;

class Calculation
{
private:
    float num1, num2; // to store value
public:
    // to display menu
    int display_menu()
    {
        int choice;
        cout << "Select which operation you want to perform\n";
        cout << "1] Addition: \n";
        cout << "2] Subtraction: \n";
        cout << "3] Multiplication: \n";
        cout << "4] Division: \n";
        cout << "5] Modulus: \n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        return choice;
    }
    // get the num1 value
    int setNum1()
    {
        cout << "Enter 1st Number: ";
        cin >> num1;
        return num1;
    }
    // get the num 2 value
    int setNum2()
    {
        cout << "Enter 2nd Number: ";
        cin >> num2;
        return num2;
    }
    // performing addition
    void addition()
    {
        cout << "Addition: " << num1 + num2;
    }
    // performing subtraction
    void subtraction()
    {
        cout << "Subtraction: " << num1 - num2;
    }
    // performing multiplication
    void multiplication()
    {
        cout << "Multiplication: " << num1 * num2;
    }
    // performing division
    void division()
    {
        cout << "Division: " << num1 / num2;
    }
    // finding remainder
    void modulus()
    {
        cout << "Modulus: " << int(num1) % int(num2);
    }
};

int main()
{
    int choice;
    Calculation c1;             // decalring objects
    c1.setNum1();               // calling method to set the num1 value
    c1.setNum2();               // calling method to set the num2 value
    choice = c1.display_menu(); // getting user choice of operation
    switch (choice)
    {
    case 1: // Addition
        c1.addition();
        break;
    case 2: // Subtration
        c1.subtraction();
        break;
    case 3: // Multiplication
        c1.multiplication();
        break;
    case 4: // Division
        c1.division();
        break;
    case 5: // Modulus
        c1.modulus();
        break;
    default: // display menu if does not match the criteria
        c1.display_menu();
    }
}