#ifndef EUROPE
#define EUROPE
#include "header.h"
#include "Continent.h"

class Europe:public Continent
{
private:
    string address;
public:
    Europe(/* args */);
    ~Europe();
};

Europe::Europe(/* args */)
{
    cout<<"ENTER THE ADDRESS: ";
    cin>>address;
}

Europe::~Europe()
{
}

#endif //EUROPE