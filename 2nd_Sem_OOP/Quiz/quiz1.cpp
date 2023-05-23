#include <iostream>
#include <string>
using namespace std;

class shallowCopy
{
private:
    string s1, s2, s3;

public:
    shallowCopy()
    {
        s1 = "";
        s2 = "";
        s3 = "";
    }
    shallowCopy(string s1, string s2, string s3)
    {
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }
    shallowCopy(shallowCopy &obj)
    {
        s1 = obj.s1;
        s2 = obj.s2;
        s3 = obj.s3;
    }
    void getText()
    {
        cout << "\nStudent Name  : " << s1;
        cout << "\nStudent ID    : " << s2;
        cout << "\nStudent Course: " << s3;
    }
};

int main()
{
    shallowCopy t2;
    shallowCopy t1("Muhammad Taha", "SP22-BSCS-0119", "BSCS");
    t2 = t1;
    cout << "\n******** Main Text **********\n";
    t1.getText();
    cout << "\n\n******** Shallow Copy **********\n";
    t2.getText();
}