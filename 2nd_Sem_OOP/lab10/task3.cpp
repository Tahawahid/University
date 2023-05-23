#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    A(int a)
    {
        this->a = a;
    }
    friend int increament(A a);
};
int increament(A obj1)
{
    return (++obj1.a);
}
int main()
{
    A a(10);

    cout << increament(a);
}