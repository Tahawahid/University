#include <iostream>
using namespace std;

class A;
class B;

class A
{
private:
    string a;

public:
    A(string a)
    {
        this->a = a;
    }
    friend string concatinate(A a, B b);
};

class B
{
    string b;

public:
    B(string b)
    {
        this->b = b;
    }
    friend string concatinate(A a, B b);
};

string concatinate(A obj1, B obj2)
{
    return (obj1.a + obj2.b);
}
int main()
{
    A a("Muhammad ");
    B b("Taha");

    cout << concatinate(a, b);
}