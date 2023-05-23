#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class majuBank
{
protected:
    int balance;

public:
    virtual void setBalance()
    {
        cout << "Enter balance: ";
        cin >> balance;
    };
    virtual int getBalance()
    {
        return balance;
    };
};

class bankDIB : public majuBank
{
};

class bankHBL : public majuBank
{
public:
    void setBalance()
    {
        cout << "Enter HBL bank Balance: ";
        cin >> balance;
    }
    int getBalance()
    {
        return balance;
    }
};

class bankABL : public majuBank
{
public:
    void setBalance()
    {
        cout << "Enter ABL bank Balance: ";
        cin >> balance;
    }
    int getBalance()
    {
        return balance;
    }
};

int main()
{
    bankABL abl;
    bankHBL hbl;
    bankDIB dib;

    abl.setBalance();
    dib.setBalance();
    hbl.setBalance();

    cout << "DIB bank Balance is: " << dib.getBalance() << endl;
    cout << "HBL bank Balance is: " << hbl.getBalance() << endl;
    cout << "ABL bank Balance is: " << abl.getBalance() << endl;
}