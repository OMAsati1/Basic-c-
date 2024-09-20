#include<iostream>
using namespace std;
int fib(int n) { 
    if(n==1) {
        return 1;
    }
    else if(n==0) {
        return 0;
    }
    return fib(n-2)+(n-1);
}
int main(){
  int a;  
cout<<"enter a number "<<endl;
cin>>a;
cout<<"The term in fibonacci sequence at position "<<a+1<<" is "<<fib(a)<<endl;
for (int i = 0; i <= a; i++)
{
    cout<<fib(i)<<" ";
}

    return 0;
}