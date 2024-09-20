#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
    int sumImgComplex(complex, complex);
};
class complex
{
    int a, b;
    // INDIVIDUALLY DECLARING FUNCTIONS AS FRIENDS
    // friend int calculator ::sumRealComplex(complex o1, complex o2);
    // friend int calculator ::sumImgComplex(complex o1, complex o2);
// ALTERNATE: DECLARING ENTIRE CALCULATOR CLASS AS FRIEND
friend class calculator;
public:
    void setNumber(int v1, int v2)
    {

        a = v1;
        b = v2;
    }
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumRealComplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator ::sumImgComplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex o1, o2;
    o1.setNumber(4, 6);
    o1.printNumber();
    o2.setNumber(8, 3);
    o2.printNumber();
    calculator calc1, calc2;
    int ans1 = calc1.sumRealComplex(o1, o2);
    cout << "The sum of real part of the complex numbers is " << ans1 << endl;

    int ans2 = calc2.sumImgComplex(o1, o2);
    cout << "The sum of Imaginary part of the complex numbers is " << ans2 << endl;
    return 0;
}