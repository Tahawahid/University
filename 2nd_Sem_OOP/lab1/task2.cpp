#include <iostream>
using std::cin;
using std::cout;

class areaRectangle
{
private:
    float length, width;

public:
    void setArea()
    {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
    }
    void getArea()
    {
        float area;
        area = length * width;
        cout << "Area of Rectangle is: " << area;
    }
};

int main()
{
    areaRectangle A1;
    A1.setArea();
    A1.getArea();
    return 0;
}
