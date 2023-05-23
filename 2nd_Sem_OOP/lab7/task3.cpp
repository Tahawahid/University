/*Implement the inheritance of the abstract class.
 */
#include <iostream>
using std::cin;
using std::cout;

class shape
{
public:
    virtual float getArea() = 0;
    virtual void getPerimeter() = 0;
};

class circle : public shape
{
    float radius;

public:
    float getArea()
    {
        return 2 * (3.14 * (radius * radius));
    }
    void getPerimeter()
    {
        cout << "Enter Radius of the Circle: ";
        fflush(stdin);
        cin >> radius;
    }
};

class square : public shape
{
    float length, breath;

public:
    float getArea()
    {
        return length * breath;
    }
    void getPerimeter()
    {
        cout << "Enter Length of the Square: ";
        fflush(stdin);
        cin >> length;
        cout << "Enter Breath of the Square: ";
        fflush(stdin);
        cin >> breath;
    }
};

int main()
{

    circle c1;
    square s1;
    c1.getPerimeter();
    cout << "Area of circle is " << c1.getArea() << "\n";
    s1.getPerimeter();
    cout << "Area of circle is " << s1.getArea() << "\n";
}
