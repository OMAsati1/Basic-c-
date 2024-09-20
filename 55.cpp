#include<iostream>
using namespace std;
 class Base1{
    public: 
    int var1;
    void display (){
        cout<<"Display Base1 class variable "<<var1<<endl;
    }

 };
 class derivedClass : public Base1{
    public: 
int var2;
    void display (){
        cout<<"Display Base1 class variable "<<var1<<endl;
        cout<<"Display derived class variable "<<var2<<endl;
    }
 };
int main(){
    Base1 * base_class_pointer;
    Base1 obj_base;
    derivedClass obj_der;
    base_class_pointer=& obj_der; // pointing Base1 class poitnter to derived Class
    // polymorphysim
    //-one name multiple forms
    //-eg. fuction overloading, operator overloading 
    //-eg. virtual function
    base_class_pointer->var1=77;
    // base_class_pointer->var2=77; will throw err  or
    base_class_pointer->display();

    derivedClass * derived_class_pointer;
    derived_class_pointer=&obj_der;
    derived_class_pointer->var2=98;
    derived_class_pointer->var1=978;
    derived_class_pointer->display();
    return 0;
}