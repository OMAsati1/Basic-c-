#include<iostream>
using namespace std;

int main()
{
int age;
cout<<"Tell me your age:"<<endl;
cin>>age;
switch (age)
{
case 17:
cout<<"You are 17"<<endl;
    break;
case 27:
cout<<"You are 27"<<endl;
    break;
default:
cout<<"No special case"<<endl;
    break;
}
   return 0;
}
