#ifndef ROOM
#define ROOM
#include "header.h"
class Room
{
private:
    float length, width, cost;

public:
    Room(/* args */);
    ~Room();
    void setDimention();
    float calcCost();
    void store();
};

Room::Room(/* args */)
{
}

Room::~Room()
{
}

void Room::setDimention()
{
    cout << "[INFO] 1 m^2 COST Rs. 1250";
    cout << "Enter the width in meters: ";
    cin >> width;
    cout << "Enter the length in meters: ";
    cin >> length;
}

void Room::store()
{
    ofstream write;
    write.open("header/database/store/store.txt", ios::app);
    write << "Length: " << length << " Width: " << width << " Cost: " << cost << endl;
}

float Room::calcCost(){
        return cost = (length * width) * 1000;
    }
#endif // ROOM