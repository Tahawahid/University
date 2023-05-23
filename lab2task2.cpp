#include <iostream>
using std::cin;
using std::cout;

int main()
{
    float areaTri, areaRec, areaSqr, height, breath, width, length, sqrLength;

    cout << "Give triangular Height: ";
    cin >> height;
    cout << "Give Triangular width: ";
    cin >> breath;
    cout << "Give rectangular length: ";
    cin >> length;
    cout << "Give rectangular width: ";
    cin >> width;
    cout << "Enter Sqaure length: ";
    cin >> sqrLength;
    cout << "<----------------->\n";
    areaTri = 0.5 * height * breath;
    cout << "Area of Triangle is: " << areaTri << "\n";
    areaRec = width * length;
    cout << "Area of Rectanle is: " << areaRec << "\n";
    areaSqr = sqrLength * sqrLength;
    cout << "Area of sqaure is: " << areaSqr << "\n";
}