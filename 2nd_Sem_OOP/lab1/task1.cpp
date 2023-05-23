#include <iostream>
using std::cout;
using std::string;

class convertName
{

private:
    string name = "Taha";

public:
    int nameConvert()
    {
        for (int i = 0; i < name.length(); i++)
            cout << int(name.at(i));
    }
};

int main()
{
    convertName n1;
    cout << n1.nameConvert();
    return 0;
}