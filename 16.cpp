#include<iostream>
using namespace std;
int sum(int a, int b) {
    int c= a+b;
    return c; }
    // this will not swap a and b
    void swap(int a, int b) {
        int temp = a;
        a=b;
        b=temp;
        // but this will not swap
    }
    void swapPointer(int* a, int* b) {
        int temp = *a;
        *a=*b;
        *b=temp;
    }
    // int & 
    void swapreferenceVar(int& a, int& b) {
        int temp = a;
        a=b;
        b=temp;
        // return a;
    }

int main(){
   int x = 4,y=7; 
// cout<<sum(a,b);
cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
// swap(x,y);
// swapPointer(&x,&y); -----> this will swap a and b using pointers
swapreferenceVar(x,y);
cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
    return 0;
}