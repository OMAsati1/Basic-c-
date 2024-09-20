#include<iostream>
using namespace std;
int product(int a, int b) {
    return a*b;
}
float moneyReceived(int currentMoney, float factor=1.04) {
return currentMoney*factor;
}
int main(){
    // int a,b;

// cout<<"Enter the value of a and b:"<<endl;
// cin>>a>>b;
 // cout<<"The product of a and b is "<<product(a,b);
int money= 10000;
cout<<"if you have "<<money<<"rs in your bank, you will receive "
<<moneyReceived(money)<<"rs after 1 year"<<endl;
cout<<"if you have  "<<money<<"rs in your vip account in bank, you will receive "
<<moneyReceived(money,1.1)<<"rs after 1 year";
    return 0;
}