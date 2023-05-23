#ifndef HALL
#define HALL
#include "header.h"
class Hall
{
private:
    float length, width, cost;

public:
    Hall(/* args */);
    ~Hall();
    void setDimention();
    void store();
    float calcCost();
};

Hall::Hall(/* args */)
{
}

Hall::~Hall()
{
}

void Hall::setDimention()
{
    cout << "[INFO] 1 m^2 COST Rs. 1000";
    cout << "Enter the width in meters: ";
    cin >> width;
    cout << "Enter the length in meters: ";
    cin >> length;
}
void Hall::store()
{
    ofstream write;
    write.open("header/database/store/store.txt", ios::app);
    write << "Length: " << length << " Width: " << width << " Cost: " << cost << endl;
}
float Hall::calcCost()
{
    return cost = (length * width) * 1000;
}


#endif // HALL