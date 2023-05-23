#include <iostream>
using namespace std;

class count
{
private:
    static int counter;

public:
    count()
    {
        cout << counter-- << "\n";
    }
};
int count::counter = 15;

int main()
{
    count c1;
    count c2;
    count c3;
}
