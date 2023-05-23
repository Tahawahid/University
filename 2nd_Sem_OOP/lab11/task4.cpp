#include <iostream>
#include <fstream>
#include <string>
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

    string str;
    ofstream copy;
    ifstream read;
    read.open("sample.txt", ios::in);
    copy.open("copy.txt", ios::app);
    while (getline(read, str))
    {
        copy << str << endl;
    }
    copy.close();
    read.close();
}

Write::~Write()
{
}

int main()
{
    Write w;
}
