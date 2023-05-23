#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Student
{
private:
    string mydetails;
    int age, credithr;
    double pkr;

public:
    Student()
    {
        mydetails = "";
        age = 0;
        credithr = 0;
        pkr = 0;
    }
    string MyDetails(string id, string name, string course)
    {
        mydetails = "Student Id: " + id + "\nStudent Name: " + name + "\nCources: " + course + "\n";
        return mydetails;
    }
    void MyDetails(int age, int credithr)
    {
        this->age = age;
        this->credithr = credithr;
        cout << "Student Age: " << age << "\nCredit Hour: " << credithr << endl;
    }
    double MyDetails(double pkr1, double pkr2)
    {
        pkr = pkr1 + pkr2;
        return pkr;
    }
    string getData() const { return mydetails; }
    double getPkr() const { return pkr; }
};

int main()
{
    string mydetails;
    Student s1, s2, s3;

    mydetails = s1.MyDetails("SP22-BSCS-0119", "Muhammad Taha", "BSCS");
    cout << mydetails;
    s2.MyDetails(21, 17);
    s3.MyDetails(5432.432, 4321.543);
    cout << "Total Rs: " << s3.getPkr();
}