#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Student
{
private:
    string stdName, stdID;
    int age, creditHrs, totalCreditHrs;
    float gpa, cgpa;
    double pkrDues;

public:
    Student()
    {
        stdName = "";
        stdID = "";
        age = 0;
        creditHrs = 0;
        totalCreditHrs = 0;
        gpa = 0;
        cgpa = 0;
        pkrDues = 0;
    }
    void setName()
    {
        cout << "Enter Student Name: ";
        getline(cin, stdName);
        fflush(stdin);
    }
    void setID()
    {
        cout << "Enter Student ID: ";
        cin >> stdID;
    }
    void setAge()
    {
        cout << "Enter Age: ";
        cin >> age;
    }
    void setTotalCreditHours()
    {
        cout << "Enter Total Credit Hours of your Cource/Program: ";
        cin >> totalCreditHrs;
    }
    void setCreditHours()
    {
        cout << "Enter Credit Hours of your Cource/Program: ";
        cin >> creditHrs;
    }
    void setGpa()
    {
        cout << "Enter your GPA: ";
        cin >> gpa;
    }
    void setCgpa()
    {
        cout << "Enter your CGPA: ";
        cin >> cgpa;
    }
    void setPkrDues()
    {
        cout << "Enter your Dues in PKR: ";
        cin >> pkrDues;
    }
    void display()
    {
        cout << "\nStudent Name               : " << stdName;
        cout << "\nStudent ID                 : " << stdID;
        cout << "\nStudent Age                : " << age;
        cout << "\nStudent GPA                : " << gpa;
        cout << "\nStudent CGPA               : " << cgpa;
        cout << "\nTotal Cources Credit Hours : " << totalCreditHrs;
        cout << "\nCource Credit Hour         : " << creditHrs;
        cout << "\nDues in PKR                : " << pkrDues;
    }
    string getName() const { return stdName; }
    string getStdID() const { return stdID; }
    int getAge() const { return age; }
    int getCredtitHour() const { return creditHrs; }
    int getTotalCreditHours() const { return totalCreditHrs; }
    float getGpa() const { return gpa; }
    float getCgpa() const { return cgpa; }
    double duesPkr() const { return pkrDues; }

    Student operator+(const Student obj)
    {
        Student temp;
        temp.stdName = stdName + obj.stdName;
        temp.stdID = stdID + obj.stdID;
        temp.age = age + obj.age;
        temp.creditHrs = creditHrs + obj.creditHrs;
        temp.totalCreditHrs = totalCreditHrs + obj.totalCreditHrs;
        temp.gpa = obj.gpa;
        temp.cgpa = obj.cgpa;
        temp.pkrDues = obj.pkrDues;
        return (temp);
    }
};

int main()
{
    Student obj1, obj2, obj3, obj4, obj;

    obj1.setName();
    obj1.setAge();
    obj1.setID();
    obj2.setCreditHours();
    obj3.setPkrDues();
    obj3.setGpa();
    obj3.setCgpa();
    obj4.setTotalCreditHours();

    obj = obj1 + obj2;
    obj = obj + obj3;
    obj = obj + obj3;
    obj.display();
}