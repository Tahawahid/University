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

void student(Student obj)
{
    cout << "Student Name     : " << obj.name;
    cout << "\nStudent Roll No. : " << obj.rollNo;
    cout << "\nStudent Age      : " << obj.age;
    cout << "\nStudent Marks    : " << obj.marks;
}

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
    student(s1);
}
