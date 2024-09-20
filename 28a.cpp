#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 & x, c2 & y);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
    cout<<val1<<endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 & x, c2 & y);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
    cout<<val2<<endl;
        
    } 
    };
    void exchange(c1 & x, c2 & y){
        int temp = x.val1;
        x.val1=y.val2;
        y.val2=temp;
    }

int main()
{
    c1 o1;
    c2 o2;

    o1.indata(35);
    cout<<"The value of c1 is ";
    o1.display();
    
    o2.indata(58);
    cout<<"The value of c2 is ";
    o2.display();

    exchange(o1,o2);
    
    cout<<"new value c1 is ";
    o1.display();

    cout<<"new value c2 is ";
    o2.display();
    return 0;
}