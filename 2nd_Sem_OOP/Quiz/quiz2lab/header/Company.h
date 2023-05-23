#ifndef COMPANY
#define COMPANY
#include "header.h"
#include "hall.h"
#include "room.h"
#include "transport.h"
class Company
{
private:
    string comp_name,registration_no;
    float cost;
protected:
    string Business_type;
public:

    Company(/* args */);
    ~Company();
    // SETTERS
    void setData();
    // GETTERS

    // OTHER METHODS
    void TakeOrder();
    string getBusinessType();
};

Company::Company(/* args */)
{
}

Company::~Company()
{
}


// SETTER

void Company::setData(){
    cout<<"ENTER COMPANY NAME: ";
    getline(cin,comp_name);
    fflush(stdin);
    cout<<"ENTER COMPANY REGISTRATION NUMBER: ";
    getline(cin,registration_no);
    fflush(stdin);
    cout<<"ENTER BUSINESS TYPE: ";
    getline(cin,Business_type);
    fflush(stdin);
}
// GETTER

string Company::getBusinessType(){return Business_type;}

// OTHER METHODS DEFINATION
void Company::TakeOrder(){
    char choice;
    cout<<"\nWOULD TO LIKE TO BOOK A ROOM or HALL(y/n): ";
    cin>>choice;
    if(choice == 'y' || choice == 'Y'){
        int choice;
        a:
        cout<<"\nWHAT WOULD YOU LIKE TO BOOK\n";
        cout<<"[1] ROOM\n";
        cout<<"[2] HALL\n";
        cout<<"Enter your choiec: ";
        cin>>choice;
        Room r;Hall h;
        switch (choice)
        {
        case 1:
            r.setDimention();
            cost = r.calcCost();
            r.~Room();
            break;
        case 2:
            h.setDimention();
            cost = h.calcCost();
            h.~Hall();
        default:
            cout<<"You have entered wrong input";
            goto a;
            break;
        }
    }else{

    }
}
#endif //COMPANY