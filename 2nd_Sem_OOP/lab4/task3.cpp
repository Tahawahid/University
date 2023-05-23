#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class bankAccount
{
private:
    string name;
    float balance;
    static float interestRate;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setBalance(float balance)
    {
        this->balance = balance;
    }
    static void setInterest(float i)
    {
        interestRate = i;
    }
    void getDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << endl;
    }
    void calcInterestedBalance()
    {
        balance += (balance * interestRate);
    }
};

float bankAccount::interestRate = 0;

int main()
{
    bankAccount c1, c2, c3;
    c1.setName("Taha");
    c1.setBalance(50000);
    bankAccount::setInterest(0.15f);
    c1.calcInterestedBalance();
    c1.getDetails();
    cout << "\n------------------------\n";
    c2.setName("Anas");
    c2.setBalance(25000);
    bankAccount::setInterest(0.12f);
    c2.calcInterestedBalance();
    c2.getDetails();
    cout << "\n------------------------\n";
    c2.setName("Athar");
    c2.setBalance(100000);
    bankAccount::setInterest(0.20f);
    c2.calcInterestedBalance();
    c2.getDetails();
}