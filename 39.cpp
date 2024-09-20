#include<iostream>
using namespace std;
class base{
protected :
int a;
private :
int b;
};
/*
For a protected member:
                        private           public         protected
                        derivation      derivation      derivation

1. Private members      not inherited   not inherited   not inherited
3. Public members       private          public             protected
2. Protected members    private         protected          protected
*/
class derived : protected base{

};
int main(){
    base b;
    derived d;
    // cout<<b.a;  This will not work as both base and derived are in
    // cout<<d.a;  protected mode.
    return 0;
}