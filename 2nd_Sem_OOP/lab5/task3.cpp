#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class Message
{
public:
    Message() {}
    Message(string m1, string m2, string m3)
    {
        msg1 = new string;
        msg2 = new string;
        msg3 = new string;

        *msg1 = m1;
        *msg2 = m2;
        *msg3 = m3;
    }
    Message(Message &obj)
    {
        msg1 = new string;
        msg2 = new string;
        msg3 = new string;

        *msg1 = *obj.msg1;
        *msg2 = *obj.msg2;
        *msg3 = *obj.msg3;
    }
    void setMsg1(string msg)
    {
        msg1 = new string;
        *msg1 = msg;
    }
    void setMsg2(string msg)
    {
        msg2 = new string;
        *msg2 = msg;
    }
    void setMsg3(string msg)
    {
        msg3 = new string;
        *msg3 = msg;
    }
    string getMsg1() const
    {
        return *msg1;
    }
    string getMsg2() const
    {
        return *msg2;
    }
    string getMsg3() const
    {
        return *msg3;
    }

private:
    string *msg1, *msg2, *msg3;
};

int main()
{
    Message m1("My name is Muhammad Taha", "I am a BSCS Student", "I am a Programmer"), m2(m1);
    cout << "\nMessage 1: " << m1.getMsg1();
    cout << "\nMessage 2: " << m1.getMsg2();
    cout << "\nMessage 3: " << m1.getMsg3();
    cout << "\n\n*********Deep Copy Constructor *********\n\n";
    cout << m2.getMsg1();
    cout << m2.getMsg2();
    cout << m2.getMsg3();
    cout << "\n\n*********Change object 1 Message *********\n\n";
    m1.setMsg1("This is Message 1");
    m1.setMsg2("This is Message 2");
    m1.setMsg3("This is Message 3");
    cout << "\nMessage 1: " << m1.getMsg1();
    cout << "\nMessage 2: " << m1.getMsg2();
    cout << "\nMessage 3: " << m1.getMsg3();
}