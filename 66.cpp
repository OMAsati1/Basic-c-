#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class om
{
public:
    T1 a;
    T2 b;
    T3 c;
    om(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The letter at c is: "<<c<<endl;
    }
};
int main()
{
   om<> o(4,5.8,'e');
   o.display();
   cout<<endl;
   om<float,char,string> m(4.7,'e',"om");
   m.display();
    return 0;
}