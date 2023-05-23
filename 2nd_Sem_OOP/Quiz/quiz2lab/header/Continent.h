#ifndef CONTIENT
#define CONTIENT
#include "Company.h"
#include "seaTransport.h"
#include "airTransport.h"
#include "landTransport.h"

class Continent : public Company, public seaTransport, public landTransport, public airTransport
{
private:
    string *Name;
    int no_of_countires;
    string busnessType;

protected:
    string transportationType;

public:
    Continent(/* args */);
    ~Continent();
    void setTransportationType()
    {
        int choice;
        cout << "\nChoose the tranportation type\n";
        cout<<"[1] By Land\n";
        cout<<"[2] By Sea\n";
        cout<<"[3] By Air\n";
        cout<<"Enter the choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            transportationType = "LAND";
            break;
        case 2:
            transportationType = "SEA";
            break;
        case 3:
            transportationType = "AIR";
        default:
            break;
        }
        
    }
    string getTransportation(){return transportationType;}
    void setData()
    {
        cout << "Enter the number of Countires: ";
        cin >> no_of_countires;
        Name = new string[no_of_countires];
        for (int i = 0; i < no_of_countires; i++)
        {
            cout << "Enter the country name: ";
            cin >> Name[i];
        }
        busnessType = getBusinessType();
    }
};

Continent::Continent(/* args */)
{
}

Continent::~Continent()
{
}

#endif // CONTINENT