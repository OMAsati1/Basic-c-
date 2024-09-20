#include<iostream>
using namespace std;

int main(){
    /*pointer is just a type of data type which 
    holds address of other datatype*/
    int a=3;
    int*b = &a; 
    // or int*b; b=&a
    // & is a address of a-->tell address
cout<<"The address of a is "<<b<<endl;
cout<<"The address of a is "<<&a<<endl;

    // * is deference operator-->tell value
cout<<"The value at address b is "<<*b<<endl;
int**c= &b;
cout<<"The address of b is "<<&b<<endl;
cout<<"The address of b is "<<c<<endl;
cout<<"The value at address c is "<<*c<<endl;
cout<<"The value at address value at (value at(c)) is "<<**c<<endl;
    return 0;
}


