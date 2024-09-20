#include<iostream>
using namespace std;

int main(){
    char a[]="mumbai";
    char *x=a;
    while (*x!='\0')
    {
    cout<<*x;
       x++;
    }
    
    return 0;
}