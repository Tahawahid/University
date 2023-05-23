#include <iostream>
using std::cin;
using std::cout;
using std::string;

class person
{
protected:
    string name, id;

public:
    void setName()
    {
        cout << "Enter your Name: ";
        getline(cin, name);
        fflush(stdin);
    }
    void setID()
    {
        cout << "Enter your ID: ";
        getline(cin, id);
        fflush(stdin);
    }
};

class student : public person
{
private:
    string course;
    int fee;

public:
    student()
    {
        setName();
        setID();
        setCourse();
        setFee();
        displayInfo();
    }
    void setFee()
    {
        cout << "Enter course fee: ";
        cin >> fee;
    }
    void setCourse()
    {
        cout << "Enter course name: ";
        getline(cin, course);
        fflush(stdin);
    }
    void displayInfo()
    {
        cout << "\n-----------------------\n";
        cout << "Name      : " << name << "\n";
        cout << "Student ID: " << id << "\n";
        cout << "Course    : " << course << "\n";
        cout << "Fees      : " << fee << "\n";
    }
};

int main()
{
    student s1;
}