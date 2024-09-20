#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // A & setData(int a)
    void setData(int a)
    {
        this->a = a; // this ia keyword and you can what it can do
        // return*this;    
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    // a.setData(76).getData();
    a.setData(76);
    a.getData();
    return 0;
}