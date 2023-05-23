#include <iostream>
#include <fstream>
using namespace std;

class Write
{
private:
    /* data */
public:
    Write(/* args */);
    ~Write();
};

Write::Write(/* args */)
{
    string fname, lname;

    cout << "Enter your first name: ";
    cin >> fname;
    fflush(stdin);
    cout << "Enter your last name : ";
    cin >> lname;
    fflush(stdin);

    ofstream write;
    write.open("sample.txt", ios::app);
    write << fname + " " + lname;
    write.close();
}

Write::~Write()
{
}

int main()
{
    string fname, lname;

    cout << "Enter your first name: ";
    cin >> fname;
    fflush(stdin);
    cout << "Enter your last name : ";
    cin >> lname;
    fflush(stdin);

    ofstream write;
    write.open("sample.txt");
    write << fname + " " + lname;
    write.close();
}
