#include<iostream>
using namespace std;

int main(){
    int a,b;
    char command;
cout<<"enter two numbers:"<<endl;
cin>>a;
cin>>b;
cout<<"enter operators (+,-,*,/):"<<endl;
cin>>command;
switch (command) {

case '+': 
cout<<a+b<<endl;
    break;

case '-' : 
cout<<a-b<<endl;
    break;

case '*' : 
cout<<a*b<<endl;
    break;

case '/' : 
if (b==0)
{
    cout<<"not defined"<<endl;
} else

cout<<a/b<<endl;
    break;

default:
cout<<"invalid operator";
    break;

 }

    return 0;
}