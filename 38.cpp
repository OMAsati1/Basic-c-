#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void base ::setData(void)
{
    data1 = 15;
    data2 = 25;
}
int base ::getData1(void)
{
    return data1;
}
int base ::getData2(void)
{

    return data2;
}
class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    data3 = data2 * getData1();
}
void derived ::display()
{
    cout<<"The value of data 1 is "<<getData1()<<endl;
    cout<<"The value of data 2 is "<<data2<<endl;
    cout<<"The value of data 3 is "<<data3<<endl;
}
int main()
{
derived der;
der.setData();
der.process();
der.display();
    return 0;
}