#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Message
{
public:
    Message() {}
    Message(string msg1, string msg2, string msg3)
    {
        this->msg1 = msg1;
        this->msg2 = msg2;
        this->msg3 = msg3;
    }
    Message(Message &obj)
    {
        msg1 = obj.msg1;
        msg2 = obj.msg2;
        msg3 = obj.msg3;
    }
    void setMsg1(string msg)
    {
        msg = msg1;
    }
    void setMsg2(string msg)
    {
        msg = msg2;
    }
    void setMsg3(string msg)
    {
        msg = msg3;
    }
    string getMsg1() const
    {
        return msg1;
    }
    string getMsg2() const
    {
        return msg2;
    }
    string getMsg3() const
    {
        return msg3;
    }

private:
    string msg1, msg2, msg3;
};

int main()
{
    Message m1("\nMy name is Muhammad Taha", "\nI am a BSCS Student", "\nI am a Programmer"), m2(m1);
    cout << m1.getMsg1();
    cout << m1.getMsg2();
    cout << m1.getMsg3();
    cout << "\n********* Copy Constructor *********\n";
    cout << m2.getMsg1();
    cout << m2.getMsg2();
    cout << m2.getMsg3();
}