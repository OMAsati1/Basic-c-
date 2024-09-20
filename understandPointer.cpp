#include<iostream>
using namespace std;

int main(){
    char s[15] ="hgdbakjc bjkdb";
    string t[15] ="hgdbakjc bjkdb";
    // char *r= s;
    string *r= t;
    // cout<<t[1];
    cout<<*t;
    // cout<<s<<endl;
    // cout<<&s<<endl;
    // cout<<r<<endl;
    // // cout<<r<<endl;
    // int a =785;
    // int *ptr=&a;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // // cout<<sizeof(s);
    // char f[6]="42356";
    // char* pt= f;
    // cout<<f;
    return 0;
}