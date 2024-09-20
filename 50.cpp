#include<iostream>
using namespace std;
//revsion of pointer 
int main(){
    int a=4;
    // cout<<&a;
    int *ptr=&a;
    *ptr=4546;
    
    cout<<"The value of a is "<<*(ptr)<<endl;
    //new operator
    int *p = new int (8);
    cout<<"The value at address p is "<<*p<<endl<<endl;
    int *arr = new int[3];
    arr[0]=2;
    // arr[1]=20;
    *(arr+1)=33;
    arr[2]=200;
    // delete []arr;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
     return 0;
}