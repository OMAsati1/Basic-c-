#include <iostream>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    cout<<"Enter any binary number: ";
    cin >> n;
    int temp = n ;

    while(temp>0){
        if(temp%10 != 0 && temp% 10 != 1 ){
            cout<<"enter a valid number"<<endl;
            return 1;
        }
        temp/=10;
    }

    int mul = 1;
    while (n > 0)
    {
        int rem = n % 10;
        ans += rem * mul;
        mul *= 2;
        n/=10;
        
    }
   cout<<"The decimal form of entered number is: ";
    cout << ans << endl;
    return 0;
}