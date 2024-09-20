#include <iostream>
using namespace std;
// int sum(int a, int b); //this func prototype or
int sum(int , int );
// void g(void); or
void g();
int main()
{
    int num1, num2;
    cout << "Enter 1st number:" << endl;
    cin >> num1;
    cout << "Enter 2nd number:" << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void g()
{
    cout << "\nHello, Good Morning";
}
