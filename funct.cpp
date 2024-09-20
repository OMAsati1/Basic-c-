#include <iostream>
using namespace std;
int fact(int x )
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n; 
    cout<<"enter upper index: ";
    cin >> n;
    cout<<"enter lower index: ";
    int r;
    cin >> r;
    if(n<r){
        cout<<"r can't exceed n ";
        return 1;
    } 
    int a = fact(n);
    int b = fact(n - r);
    int c = fact(r);
    cout<<"The combination of above numbers: "<<endl;
    cout << a / (b * c) << endl;
    cout<<"The permuation of above numbers: "<<endl;
    cout << a / (b) << endl;
    return 0;
}