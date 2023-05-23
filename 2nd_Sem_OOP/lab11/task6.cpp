#include <iostream>
using namespace std;

class Exception
{
private:
    string name;
    double oop, dbms, dsa;

public:
    Exception(/* args */);
    ~Exception();
    void setName();
    void setOOPMarks();
    void setDBMS();
    void setDSA();
    bool check(double);
};

Exception::Exception(/* args */)
{
    setName();
    setOOPMarks();
    setDBMS();
    setDSA();
    cout << "Student Name: " << name << endl;
    cout << "OOP MARKS   : " << oop << endl;
    cout << "DBMS MARKS  : " << dbms << endl;
    cout << "DSA MARKS   : " << dsa << endl;
}

Exception::~Exception()
{
}

void Exception::setName()
{
    cout << "Enter the student Name: ";
    cin >> name;
    fflush(stdin);
}
void Exception::setOOPMarks()
{
    cout << "Enter OOPS Marks: ";
    cin >> oop;
    if (!check(oop))
    {
        setOOPMarks();
    }
}

void Exception::setDBMS()
{
    cout << "Enter DBMS Marks: ";
    cin >> dbms;
    if (!check(dbms))
    {
        setDBMS();
    }
}
void Exception::setDSA()
{
    cout << "Enter DSA Marks: ";
    cin >> dsa;
    if (!check(dsa))
    {
        setDSA();
    }
}

bool Exception::check(double n)
{
    try
    {
        if (n > 0 && n < 100)
        {
            return true;
        }
        else
        {
            throw(1);
        }
    }
    catch (int a)
    {
        cout << "\nMarks Must be b/w 0 to 100\n";
        return false;
    }
}
int main()
{
    Exception e;
}