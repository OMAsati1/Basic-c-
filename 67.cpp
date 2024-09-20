#include <iostream>
using namespace std;
// float average(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float average2(float a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
template<class T>
void swapp(T &a, T &b){
    T temp =a;
    a=b;
    b=temp;
}

template<class T1,class T2>
float average2(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    float z;
    z = average2(4, 9.6);
    cout<<z<<endl;
    double x=4.6,y=7.9;
    cout<<x<<" "<<y<<endl;
    swapp(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}