#include<iostream>
using namespace std;
double factorial(int n) { 
    if(n<=1) {
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
  int a;  
cout<<"Enter a number: ";
cin>>a;
cout<<"The factorial of above number is: "<<factorial(a)<<endl;
    return 0;
}