#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void sum(X, Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void sum(X, Y);
};
void sum(X o1, Y o2)
{
    cout << "Summming the data of X and Y objects gives me " << o1.data + o2.num << endl;
}
int main()
{
    X a1;
    a1.setValue(5);
    Y b1;
    b1.setValue(12);
    sum(a1, b1);
    return 0;
}