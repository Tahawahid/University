#include <iostream>
using namespace std;

template <typename T>
class Generic
{
    T n1, n2;

public:
    T sum(T n1, T n2)
    {
        T result;
        result = n1 + n2;
        return result;
    }
};

int main()
{
    Generic<int> g1;
    Generic<float> g2;
    cout << "Integer value: " << g1.sum(5, 10) << endl;
    cout << "Float value  : " << g2.sum(7.52, 8.37) << endl;
}