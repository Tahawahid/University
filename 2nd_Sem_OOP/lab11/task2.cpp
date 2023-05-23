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

    ofstream write;
    write.open("sample.txt", ios::out);
    write << "This is a sample text\n";
    write.close();
}

Write::~Write()
{
}

int main()
{
    Write w;
}
