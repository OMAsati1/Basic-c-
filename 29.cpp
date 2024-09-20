#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // creating constructor
    // Constructor are the special members functions with same name as
    // of the class which is use to initialize object of its class.
    // It is automatically invoked whenever object is created.
    complex(void); /*Constructor declaration*/
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void) //-------------> This is a default contructor as 
// it is not take any paramerters
{
    a = 10;
    b = 5;
}
int main()
{
   complex c,d;
   c.printNumber();
   d.printNumber();
    return 0;
}