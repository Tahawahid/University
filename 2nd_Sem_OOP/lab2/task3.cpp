#include <iostream>
using std::cin;
using std::cout;

class Shape
{
private:
    int area;

public:
    // to display the manu
    int display_menu()
    {
        int choice;
        cout << "Select which operation you want to perform\n";
        cout << "1] Radious: \n";
        cout << "2] Area of Square: \n";
        cout << "3] Area of Trianlge: \n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        return choice;
    }
    // calculate the radious of a circle
    void calculateCircleRadius()
    {
        int a;
        cout << "Enter the circle Diameter: ";
        cin >> a;
        a /= 2;
        cout << "The radious of a circle is: " << a;
    }
    // calculate the area of square
    void calculateSquareArea()
    {
        int l;
        cout << "Enter the Length of a square side: ";
        cin >> l;
        l = l * l;
        cout << "The area of a square is: " << l;
    }
    // calculate the area of Triangle
    void calculateTriangleArea()
    {
        int b, h, area;
        cout << "Enter the height of a triangle: ";
        cin >> h;
        cout << "Enter the Base of a triangle: ";
        cin >> b;
        area = 0.5 * b * h;
        cout << "The area of a triangle is: " << area;
    }
};

int main()
{
    int choice;
    Shape s;
    switch (s.display_menu())
    {
    case 1:
        s.calculateCircleRadius();
        break;
    case 2:
        s.calculateSquareArea();
        break;
    case 3:
        s.calculateTriangleArea();
        break;
    default:
        s.display_menu();
    }
}
