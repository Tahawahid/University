#include <iostream>
using std::cin;
using std::cout;
using std::string;

struct Student
{
    string name;
    int rollNo, age;
    float marks;
} s1;

int main()
{
    Student s[5];

    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        cout << "Enter the name: ";
        getline(cin, s[i].name);
        fflush(stdin);
        cout << "Enter the Roll No.: ";
        cin >> s[i].rollNo;
        cout << "Enter the age: ";
        cin >> s[i].age;
        cout << "Enter the marks: ";
        cin >> s[i].marks;
    }
    cout << "\n\n************************\n\n";
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            cout << "Student Name     : " << s[i].name;
            cout << "\nStudent Roll No. : " << s[i].rollNo;
            cout << "\nStudent Age      : " << s[i].age;
            cout << "\nStudent Marks    : " << s[i].marks;
        }
    }
}