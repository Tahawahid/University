#include <iostream>
using namespace std;

class Person
{
protected:
    string name, id;

public:
    void info()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        fflush(stdin);
        cout << "Enter ID  :";
        cin >> id;
    }
    void infoShow()
    {
        cout << "\nName: " << name;
        cout << "\nID  : " << id;
    }
};

class Student : public Person
{
private:
    string courseName;
    int courseFees;

public:
    void course()
    {
        cout << "Enter Course Name: ";
        cin >> courseName;
        cout << "Enter Course Fees: ";
        cin >> courseFees;
    }
    void courseShow()
    {
        cout << "\nCourse Name: " << courseName;
        cout << "\nCourse Fees: " << courseFees;
    }
};

int main()
{
    Student s1;
    s1.info();
    s1.course();
    cout << "\n\n***************************************\n";
    s1.infoShow();
    s1.courseShow();
}