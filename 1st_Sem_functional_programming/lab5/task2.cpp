// 2. Write a program that will take starting, ending point and a number as input.
// Then find the number from that range, if found print “number exists” else
// “not exists “. (Note if number is found program should be stopped and if
// number is not found then it should print “not exists” only one time).

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int start, end, num, i, range;
    bool found;
    cout << "where do you want to start the range?: ";
    cin >> start;
    cout << "Where do the range ends?: ";
    cin >> end;
    cout << "What is the number you want to find within that range: ";
    cin >> num;
    found = false;

    for (i = start; i <= end; i++)
    {
        if (i == num)
        {
            found = true;
            break;
        }
    }
    if (found == true)
        cout << "Number exists";
    else
    {
        cout << "Number does not exist";
    }
    return 0;
}