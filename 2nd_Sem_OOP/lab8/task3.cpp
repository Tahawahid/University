#include <iostream>
using std::cin;
using std::cout;

struct Distance
{
    int inches, feet;
};

int main()
{
    Distance d1, d2, i, f, r;

    cout << "Enter The Distane value 1(feet) :";
    cin >> d1.feet;
    cout << "Enter The Distane value 1(inches) :";
    cin >> d1.inches;
    cout << "Enter The Distane value 2(feet) :";
    cin >> d2.feet;
    cout << "Enter The Distane value 2(inches) :";
    cin >> d2.inches;

    f.feet = d1.feet + d2.feet;
    i.inches = d1.inches + d2.inches;

    if (i.inches > 12)
    {
        r.inches = i.inches % 12;
        if (r.inches >= 0 && r.inches < 12)
        {
            f.feet++;
            i.inches = r.inches;
        }
    }
    cout << "Total distance = " << f.feet << " feet " << i.inches << " inches";
}