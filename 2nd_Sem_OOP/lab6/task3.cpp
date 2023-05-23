#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class person
{
public:
    void displaymethod()
    {
        cout << "Name : Wasay Ahmed" << endl;
        cout << "Adress :Gulistan-e-Johar Block 8" << endl;
        cout << "Age : 19" << endl;
        cout << "CNIC : 548465131 " << endl;
        cout << "Siblings : 2" << endl;
    }
};

class student : public person

{
public:
    void displaymethod()
    {
        cout << "Course_name : BSCS" << endl;
        cout << "University Name : Mohammad Ali Jinnah University" << endl;
        cout << "string : SP22-BSCS-0119" << endl;
        cout << "Credit Hour: 17" << endl;
        cout << "Dues : 43254" << endl;
        cout << "Req Credit Hour : 50" << endl;
        cout << "Earned Credit Hour : 17" << endl;
    }
};

int main()

{
    student s1;
    s1.displaymethod();
}