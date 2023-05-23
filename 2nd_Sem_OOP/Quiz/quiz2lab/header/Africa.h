#ifndef AFRICA
#define AFRICA
#include "header.h"
#include "Continent.h"
class Africa:public Continent
{
private:
    string address;
public:
    Africa(/* args */);
    ~Africa();
};

Africa::Africa(/* args */)
{
    cout<<"Enter the address: ";
    cin>>address;
}

Africa::~Africa()
{
}


#endif //AFRICA