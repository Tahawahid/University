#include <iostream>
#include <fstream>
using namespace std;

class Create
{
private:
    /* data */
public:
    Create(/* args */)
    {
        ofstream create;
        create.open("sample.txt");
    }
    ~Create();
};

Create::~Create()
{
}

int main()
{
    Create c;
}