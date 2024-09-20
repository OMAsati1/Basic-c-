#include <iostream>
using namespace std;
class Simple
{
    int data1, data2, data3;

public:
    Simple(int x, int y = 9, int z = 3)
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void printData()
    {
        cout << "The value of data is " << data1 << "," << data2 << " and " << data3 << endl;
    }
};
// void Simple ::printData()
// {
//     cout << "The value of data is " << data1 << "," << data2 <<" and "<<data3<< endl;
// }
int main()
{
    Simple s(5);
    s.printData();
    return 0;
}