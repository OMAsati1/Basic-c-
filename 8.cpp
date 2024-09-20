#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // const a= 43;
    // cout<<"The value of a was: "<<a<<endl;
    //  a=56;
    // cout<<"Now the value of a is: "<<a;
    int a = 3, b = 76, c = 1233;
    // without setw
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    // with setw
    cout << setw(4) << a << endl;
    cout << setw(4) << b << endl;
    cout << setw(4) << c << endl;
    return 0;
}
