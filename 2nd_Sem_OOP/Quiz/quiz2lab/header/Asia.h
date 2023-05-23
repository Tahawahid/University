#ifndef ASIA
#define ASIA
#include "header.h"
#include "Continent.h"

class Asia:public Continent
{
private:
    string address;
public:
    Asia();
    ~Asia();
};

Asia::Asia(/* args */)
{
    cout<<"Enter the address: ";
    cin>>address;
}

Asia::~Asia()
{
}
#endif //ASAI