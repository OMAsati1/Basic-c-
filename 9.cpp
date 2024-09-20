#include<iostream>
using namespace std;

int main()
{
int age;
cout<<"Tell me your age:"<<endl;
cin>>age;
if(age<18) {
    cout<<"You are not eligible to vote"<<endl;
} else if(age==18) {
    cout<<"You are eligible to vote"<<endl;
} else {
    cout<<"you are definitely eligible to vote"<<endl;
}
    return 0;
}
