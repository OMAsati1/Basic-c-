#include <iostream>
using namespace std;
// syntax for inheriting in multiple inheritance------->
/*class derivedC : visibility mode Base1, visibility mode Base2{
class body of class "derivedC"
};*/
class base1
{
protected:
    int base1int;
    public :
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;
    public :
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;
    public :
    void set_base3int(int a)
    {
        base3int = a;
    }
};
class derived : public base1, public base2, public base3{
    public :
    void show() {
        cout<<"The value of base1 is "<<base1int<<endl;
        cout<<"The value of base2 is "<<base2int<<endl;
        cout<<"The value of base3 is "<<base3int<<endl;
        cout<<"The  sum of these value is "<<base1int+base2int+base3int<<endl;
    }
};
int main()
{
   derived om;
   om.set_base1int(17);
   om.set_base2int(33);
   om.set_base3int(50);
   om.show();
    return 0;
}