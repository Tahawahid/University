#include <iostream>
using std::cin;
using std::cout;

class sessional
{
protected:
    float marks;

public:
    void setSessionalMarks()
    {
        cout << "Enter seesional marks: ";
        cin >> marks;
    }
    int displaySessional()
    {
        cout << "Sessional Marks: " << marks << "\n";
    }
    float getSessional()
    {
        return marks;
    }
};
class final
{
protected:
    float marks;

public:
    void setFinalMarks()
    {
        cout << "Enter seesional marks: ";
        cin >> marks;
    }
    void displayFinal()
    {
        cout << "Final Marks: " << marks << "\n";
    }
    float getFinal()
    {
        return marks;
    }
};

class result : public sessional, public final
{
private:
    float marks;

public:
    result()
    {
        setSessionalMarks();
        setFinalMarks();
        display();
    }
    void display()
    {
        displaySessional();
        displayFinal();
        marks = (getFinal() + getSessional()) / 2;
        cout << "Total Marks = : " << marks;
    }
};

int main()
{
    result r1;
}