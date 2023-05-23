#include <iostream>
using std::cin;
using std::cout;
using std::string;

class employee
{
private:
    int empid, salary;
    string name;

public:
    // default constructor to store value directly after declearing objects
    employee()
    {
        setName();
        setEmpid();
        setSalary();
    }
    // set Emplyee ID
    void setEmpid()
    {
        cout << "Enter Emplyee ID: ";
        cin >> empid;
        cin.clear();
    }
    // Set Emplyee Salary
    void setSalary()
    {
        cout << "Enter Emplyee Salary: ";
        cin >> salary;
        cin.clear();
    }
    // Set Emplyee Name
    void setName()
    {
        cout << "Enter Emplyee Name: ";
        fflush(stdin);
        getline(cin, name);
        cin.clear();
    }
    // Return the Emplyee ID when Called
    int getEmpid()
    {
        return empid;
    }
    // Return the Salary When called
    int getSalary()
    {
        return salary;
    }
    // Return the Name when Called
    string getName()
    {
        return name;
    }
    // Show all the emplyee details when called
    void getDetails()
    {
        cout << "\nEmployee Name  : " << getName();
        cout << "\nEmployee ID    : " << getEmpid();
        cout << "\nEmployee Salary: " << getSalary();
    }
};

int main()
{
    // calling objects and default constructor will store the values in their respective objects
    employee e1, e2, e3, e4, e5;
    cout << "\n-------------------------\n";
    // Print the emplyee details
    e1.getDetails();
    e2.getDetails();
    e3.getDetails();
    e4.getDetails();
    e5.getDetails();
}