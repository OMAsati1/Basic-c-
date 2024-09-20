#include<iostream>
using namespace std;
int add(int a, int b) {
    cout<<"use funct with 2 argu"<<endl;
    return a+b;
}
int add(int a, int b,int c) {
    cout<<"use funct with 3 argu"<<endl;
    return a+b+c;
}           
// vol of cylinder
double volume(double r, int h) {
    return(3.14*r*r*h);
}
// vol of cube
int volume(int a) {
    return(a*a*a);
}
int main(){
  
    cout<<"The sum of 4 and 6 is "<<add(4,6)<<endl;
    cout<<"The sum of 7,5 and 8 is "<<add(7,5,8)<<endl;
    cout<<"The volume of cylinder of radius 6 and height 10 is "<<volume(6,10)<<endl;
    cout<<"The volume of cube of edge 7 is "<<volume(7)<<endl;
    return 0;
}
// function overloading
// function overriding
//call by value 
//call by reference
//function prototype