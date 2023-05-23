#include <iostream>
using namespace std;

class emplyee
{
private:
    string empid, name;
    int salary;

public:
    void setEmpid()
    {
        cout << "Enter Emplyee ID: ";
        getline(cin, empid);
        fflush(stdin);
    }
    void setName()
    {
        cout << "Enter Emplyee Name: ";
        getline(cin, name);
        fflush(stdin);
    }
    void setSalary()
    {
        cout << "Enter the Salary: ";
        cin >> salary;
        fflush(stdin);
    }
    string getEmpid() const { return empid; }
    string getName() const { return name; }
    int getSalary() const { return salary; }
};

int main()
{
    emplyee e[5];
    for (int i = 0; i < 5; i++)
    {
        e[i].setEmpid();
        e[i].setName();
        e[i].setSalary();
        cout << "\n*****************\n";
        fflush(stdin);
    }

    cout << "\n==========================\n";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ")Emplyee ID    : " << e[i].getEmpid() << "\n";
        cout << i + 1 << ")Emplyee Name  : " << e[i].getName() << "\n";
        cout << i + 1 << ")Emplyee Salary:" << e[i].getSalary() << "\n";
    }
}