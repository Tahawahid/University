#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class salarySlip
{
private:
    int emplyeeId;
    float basicSalary, allowence, totalEarning, reduction, netSalary;
    string name, designation;

public:
    salarySlip()
    {
    }
    salarySlip(int id, int s, string n, string d)
    {
        emplyeeId = id;
        name = n;
        basicSalary = s;
        designation = d;
        totalEarning = setAllowence();
        reduction = setReduction();
        netSalary = setNetSalary();
        getData();
    }
    string Name()
    {
        string n;
        cout << "Enter your name: ";
        cin >> name;
        return n;
    }
    int empID()
    {
        int id;
        cout << "Enter your emplyee ID: ";
        cin >> id;
        return id;
    }
    string Designation()
    {
        string d;
        cout << "Enter your designation: ";
        cin >> d;
        return d;
    }
    int Salary()
    {
        int s;
        cout << "Enter your salary: ";
        cin >> s;
        return s;
    }

    float setFuel()
    {
        float fuel;
        cout << "Enter the fuel: ";
        cin >> fuel;
        return fuel;
    }
    float setHouseRent()
    {
        float houseRent;
        cout << "Enter the House Rent Allowence: ";
        cin >> houseRent;
        return houseRent;
    }
    float setMedical()
    {
        float medical;
        cout << "Enter the Medical Allowence: ";
        cin >> medical;
        return medical;
    }

    float setAllowence()
    {
        float houseRent, fuel, medical, te;
        char choice;
        cout << "Do you want to change emplyee Allowence (Y/N): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            fuel = setFuel();
            houseRent = setHouseRent();
            medical = setMedical();
            te += basicSalary * fuel;
            te += basicSalary * houseRent;
            te += basicSalary * medical;
            return te;
        }
        else
        {
            te += basicSalary * 0.10;
            te += basicSalary * 0.15;
            te += basicSalary * 0.20;
            return te;
        }
    }
    float setTax()
    {
        float tax;
        cout << "Enter the tax: ";
        cin >> tax;
        return tax;
    }
    float setProvidentFund()
    {
        float providentFund;
        cout << "Enter the Provident Fund: ";
        cin >> providentFund;
        return providentFund;
    }
    float setEOBI()
    {
        float EOBI;
        cout << "Enter the EOBI: ";
        cin >> EOBI;
        return EOBI;
    }
    float setUnion()
    {
        float Union;
        cout << "Enter the Union: ";
        cin >> Union;
        return Union;
    }

    float setReduction()
    {
        float tax, pf, Union, eobi, r;
        char choice;
        cout << "Do you want to change Reduction (Y/N): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            tax = setTax();
            pf = setProvidentFund();
            Union = setUnion();
            eobi = setEOBI();
            reduction += totalEarning * tax;
            reduction += totalEarning * pf;
            reduction += totalEarning * Union;
            reduction += totalEarning * eobi;
            return reduction;
        }
        else
        {
            reduction += totalEarning * (15.5 / 100);
            reduction += totalEarning * 0.10;
            reduction += totalEarning * 0.08;
            reduction += totalEarning * 0.03;
            return reduction;
        }
    }
    float setNetSalary()
    {
        return netSalary = basicSalary + totalEarning - reduction;
    }

    void getData()
    {
        system("cls");
        cout << "Emplye Name        : " << name << endl;
        cout << "Emplye ID          : " << emplyeeId << endl;
        cout << "Emplye Designation : " << designation << endl;
        cout << "Emplye Basic Salary: " << basicSalary << endl;
        cout << "\n-----------------------------------------\n";
        cout << "ALLOWANCES AND REDUCTION OF THE EMPLOYEE\n";
        cout << "-----------------------------------------\n";
        cout << "Total Earning after Allowance: " << totalEarning << endl;
        cout << "Total Reduction              :(" << reduction << ")" << endl;
        cout << ".............................:________\n";
        cout << "Net Salary of the Emplyee    :" << netSalary;
    }
};

int main()
{
    int s, id;
    string n, d;

    cout << "Enter your Name: ";
    fflush(stdin);
    getline(cin, n);
    cout << "Enter your Emplyee ID: ";
    fflush(stdin);
    cin >> id;
    cout << "Enter your Designation: ";
    fflush(stdin);
    getline(cin, d);
    cout << "Enter your Basic Salary: ";
    fflush(stdin);
    cin >> s;

    salarySlip payroll(id, s, n, d);
}