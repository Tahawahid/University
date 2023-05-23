// Task#02
// You have been assigned a project to calculate the percentage of marks obtained in OOPlab, OOP
// theory (each out of 100) by student Ali and in four subjects (each out of 100) by student Ahmed.
// Create an abstract class 'ObMarks' with a pure virtual method 'getPercentage'. It is inherited by
// two other classes 'Ali' and 'Ahmed' each having a method with the same name which returns the
// percentage of the students. The constructor of student Ali takes the marks in two subjects as its
// parameters and the marks in four subjects as its parameters for student Ahmed. Create an object
// for each of the two classes and print the percentage of obtained marks for both the students.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class ObMarks
{
public:
    virtual float calcPercentage() = 0;
};

class Ali : public ObMarks
{
protected:
    float subMarks[2], totalMarks, per;

public:
    Ali(float m1, float m2)
    {
        subMarks[0] = m1;
        subMarks[1] = m2;
    }
    float calcPercentage()
    {
        totalMarks = subMarks[0] + subMarks[1];
        per = (totalMarks / 200) * 100;
        return per;
    }
};
class Ahmed : public ObMarks
{
protected:
    float subMarks[4], totalMarks, per;

public:
    Ahmed(float m1, float m2, float m3, float m4)
    {
        subMarks[0] = m1;
        subMarks[1] = m2;
        subMarks[2] = m3;
        subMarks[3] = m4;
    }
    float calcPercentage()
    {
        totalMarks = subMarks[0] + subMarks[1] + subMarks[2] + subMarks[3];
        per = (totalMarks / 400) * 100;
        return per;
    }
};

int main()
{
    Ali ali(80, 85);
    Ahmed ahmed(92, 95, 85, 88);

    cout << "Ali's percetange is: " << ali.calcPercentage() << endl;
    cout << "Ahmed's percetange is: " << ahmed.calcPercentage() << endl;

    if (ali.calcPercentage() < ahmed.calcPercentage())
    {
        cout << "\n********************\n";
        cout << "* Ahmed came First *\n";
        cout << "********************\n";
    }
}