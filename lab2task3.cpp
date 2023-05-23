#include <iostream>
using std::cin;
using std::cout;

int main()
{
    float pkrVal, pkrDollor, pkrDirham, pkrRiyal;

    cout << "Enter Pakistan Rupees: ";
    cin >> pkrVal;

    pkrDollor = pkrVal * 0.0056;
    pkrDirham = pkrVal * 0.021;
    pkrRiyal = pkrVal * 0.021;

    cout << "PKR to USD is: " << pkrDollor << "\n";
    cout << "PKR to AED is: " << pkrDirham << "\n";
    cout << "PKR to SAR is: " << pkrRiyal << "\n";
    return 0;
}