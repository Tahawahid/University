// 6. Using do-while loop create a menu of checking Armstrong, prime number.
// Program should stop taking input when user enters “n” or “N”.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num, remainder, sum, temp, i, choice;
    bool prime = true;
    char cont;
    do
    {
        cout << "What do you want to know?\n";
        cout << "1. Armstrong Number\n";
        cout << "2. Prime Number\n";
        cin >> choice;
        cout << "Enter the number: ";
        cin >> num;
        switch (choice)
        {
        case 1:
            temp = num;
            while (temp != 0)
            {
                remainder = temp % 10;
                sum = sum + remainder * remainder * remainder;
                temp = temp / 10;
            }
            if (sum == num)
            {
                cout << num << " is Armstrong Number";
            }
            else
            {
                cout << num << " is Not an Armstrong Number";
            }
            break;
        case 2:
            if (num < 1)
            {
                cout << "Number needs to be greator then 1: ";
            }
            else if (num == 1)
            {
                cout << "1 is neither prime number nor composite number: ";
            }
            else
            {
                for (i = 2; i <= (num / 2); i++)
                {
                    if (num % i == 0)
                    {
                        prime = false;
                        break;
                    }
                }
                if (prime)
                {
                    cout << num << " is the prime number";
                }
                else
                {
                    cout << num << " is a composite number";
                }
            }
        }
        cout << "\nYou want to continue? Y/N or y/n: ";
        cin >> cont;
        cout << endl;
    } while (cont == 'y' || cont == 'Y');
    return 0;
}