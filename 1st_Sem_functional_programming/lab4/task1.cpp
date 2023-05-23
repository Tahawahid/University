#include <iostream>
using std::cin;
using std::cout;

int main()
{
    char alpha;
    int choice;

    cout << "What to you want o know?\n";
    cout << "1. Vowel\n";
    cout << "2. Consonant\n";
    cin >> choice;
    cout << "Enter the alphabat: ";
    cin >> alpha;

    switch (choice)
    {
    case 1:
        switch (alpha)
        {
        case 'a':
            cout << "Vowel";
            break;
        case 'e':
            cout << "Vowel";
            break;
        case 'i':
            cout << "Vowel";
            break;
        case 'o':
            cout << "Vowel";
            break;
        case 'u':
            cout << "Vowel";
            break;
        default:
            cout << "is not a vowel";
            break;
        } // child switch ends here!
        break;
    case 2:
        switch (alpha)
        {
        case 'a':
            cout << "is not a consonant";
            break;
        case 'e':
            cout << "is not a consonant";
            break;
        case 'i':
            cout << "is not a consonant";
            break;
        case 'o':
            cout << "is not a consonant";
            break;
        case 'u':
            cout << "is not a consonant";
            break;
        default:
            cout << "consonant";
            break;
        }
        break;
    } // parent swithc ends here!
}