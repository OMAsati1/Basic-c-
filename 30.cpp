#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
 
    complex(int, int);
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};
complex :: complex(int x, int y) //This is a parameterised contructor as 
// it is take 2  paramerters
{
    a = x;
    b = y;
}
int main()
{
    // Implicit Call
   complex a(6,4);
   a.printNumber();

    // Explicit Call
  complex b = complex(3,7);  
   b.printNumber();
    return 0;
}