#include<iostream>
using namespace std;
 class Base1{
    public: 
    int var1=9;
    virtual void display (){
        cout<<"1 Display Base1 class variable "<<var1<<endl;
    }

 };
 class derivedClass : public Base1{
    public: 
int var2=7;
    void display (){
        cout<<"2 Display Base1 class variable "<<var1<<endl;
        cout<<"2 Display derived class variable "<<var2<<endl;
    }
 };
int main(){
   Base1*bptr;
    Base1 obj_base;
    derivedClass obj_der;

     bptr=& obj_der;
     bptr->display();
    return 0;
}