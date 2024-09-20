#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void getData()
    {
        cout << "the real part is " << r << endl;
        cout << "the imaginary part is " << i << endl;
    }
    void setData(int a, int b){
        r=a;
        i=b;
    }
};
int main()
{
//    complex c;
//    c.setData(5,7);
//    c.getData();
//...................................................
//    complex *p= &c;
    // (*p).setData(5,8);
    // (*p).getData(); 
   complex *p= new complex;
    // (*p).setData(5,8);is exactly same as------>
    p->setData(4,9);
    // (*p).getData(); is exactly same as------>
    p->getData();
    return 0;
}