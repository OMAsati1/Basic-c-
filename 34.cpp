#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 9;
    };
    number(number &obj)
    {
        cout << "copy constructor is called!!!" << endl;
        a = obj.a;
    }
    number(int num)
    {
        a = num;
    }
    // When no copy constuctor is found , compiler supplies its own copy constructor
    void display()
    {
        cout << "The value for this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(55), z2;
    z.display();
    x.display();
    y.display();
    number z1(x); // copy constructor invoked
    z1.display();
    // z1 should exactly ressemble x and y
    z2 = z;        // copy constructor  not called
    number z3 = z; // copy constructor will  invoked
    z3.display();
    return 0;
}