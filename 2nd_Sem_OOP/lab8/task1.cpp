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

    cout << "Enter the name: ";
    getline(cin, s1.name);
    fflush(stdin);
    cout << "Enter the Roll No.: ";
    cin >> s1.rollNo;
    cout << "Enter the age: ";
    cin >> s1.age;
    cout << "Enter the marks: ";
    cin >> s1.marks;
    cout << "\n\n************************\n\n";

    cout << "Student Name     : " << s1.name;
    cout << "\nStudent Roll No. : " << s1.rollNo;
    cout << "\nStudent Age      : " << s1.age;
    cout << "\nStudent Marks    : " << s1.marks;
}