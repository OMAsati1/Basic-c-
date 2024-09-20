#include<iostream>
using namespace std;

int main(){
    string a,b;
    a="indore";
    b="mumbai";
    string temp;
    temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    
    return 0;
}