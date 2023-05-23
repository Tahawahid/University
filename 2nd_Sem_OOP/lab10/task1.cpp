#include <iostream>
using namespace std;

class B; // forward declaration

class A
{
private:
    int a;

public:
    A(int a)
    {
        this->a = a;
    }
    friend int add(A a, B b);
};

class B
{
    int b;

public:
    B(int b)
    {
        this->b = b;
    }
    friend int add(A a, B b);
};

int add(A obj1, B obj2)
{
    return (obj1.a + obj2.b);
}
int main()
{
    A a(5);
    B b(6);

    cout << add(a, b);
}