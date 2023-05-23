#include <iostream>
using std::cin;
using std::cout;

class dollor
{
private:
    static float rate;

public:
    static void setRate(float);
    static void increaseRate(float);
    void getRate();
};

void dollor::setRate(float r)
{
    rate = r;
}
void dollor::increaseRate(float n)
{
    rate *= n;
}
void dollor::getRate()
{
    cout << "Dollor Rate: " << rate;
}

float dollor::rate = 0;
int main()
{
    dollor d1;
    dollor::setRate(200);
    dollor::increaseRate(50);
    d1.getRate();
}