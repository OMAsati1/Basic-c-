#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number" << endl;
    cin >> n;
    int temp=n;
    int r = 0;
    while (n != 0)
    {
        int ld = n % 10;
        r *= 10;
        r += ld;
        n /= 10;
    }
    cout << r<<endl;
    int sum = temp+r;
    cout<<sum;
    return 0;
}