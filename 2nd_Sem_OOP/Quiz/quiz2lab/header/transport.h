#ifndef TRANSPORT
#define TRANSPORT
#include "seaTransport.h"
#include "airTransport.h"
#include "landTransport.h"
#include "Europe.h"
#include "Asia.h"
#include "Africa.h"
class Transport
{
private:
    float weight,capacity;
    int speed;
public:
    Transport(/* args */);
    ~Transport();
    void setData();
    void mode();
    void carry();
    void showPrice();
};

Transport::Transport(/* args */)
{
}

Transport::~Transport()
{
}

void Transport::carry(){
    int choice;
    cout<<"\nWHICH CONTINANT WILL THE SHIPMENT GOES";
    cout<<"\n[1] EUROPE";
    cout<<"\n[2] AFRICA";
    cout<<"\n[3] ASIA";
    cout<<"Enter choice: ";
    cin>>choice;
    Europe e;
    Africa a;
    Asia as;
    switch (choice)
    {
    case 1:
        
        break;
    
    default:
        break;
    }
}

void Transport::setData(){
    cout<<"ENTER THE Weight(kgs): ";
    cin>>weight;
    cout<<"ENTER THE CAPACITY: ";
    cin>>capacity;
    cout<<"ENTER THE SPEED: ";
    cin>>speed;
}

void Transport::mode(){
    int choice;
    showPrice();
    cout<<"\nCHOOSE THE TRANSPORTSTION MODE\n";
    cout<<"\n[1] BY LAND(MIN 5 DAYS)";
    cout<<"\n[2] BY AIR(MIN 36 Hours)";
    cout<<"\n[3] BY SEA(MIN 10 days)";
    cout<<"ENTER YOUR CHOIE: ";
    cin>>choice;
    seaTransport s;
    landTransport l;
    airTransport a;
    switch (choice)
    {
    case 1:
        /* code */
        if(speed<5){
            cout<<"IT WILL TAKE MORE THEN 5 DAYS TO REACH";
            cout<<"PLEASE SELECT ANY AIR MODE FOR QUICK DELIVERY";
        }else{
            // LAND
        }
        break;
        case 2:
        // SEA
        case 3:
    default:
        break;
    }
}

void Transport::showPrice(){
    cout<<"Price by LAND: "<<((weight*capacity)*speed)*750;
    cout<<"Price by SEA : "<<((weight*capacity)*speed)*500;
    cout<<"Price by AIR : "<<((weight*capacity)*speed)*1000;
}

#endif //TRANSPORT