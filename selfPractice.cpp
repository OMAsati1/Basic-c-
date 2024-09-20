#include <iostream>
using namespace std;
class employee
{

public:
double a;
float marks;
    employee(){
   
   a=87;
   marks=98;
    }
   
 
};

class programmer :  public employee
{
public: 
// double a;
// float marks;
// programmer(double w){
//     a=w;
// }
void getData()
    {
        a=88;
        marks=56;
        cout << a << endl;
    }
//   programmer(){}
};
int main()
{
    employee om;
    cout<<om.marks<<endl;
    cout<<om.a<<endl;
    programmer jay;
    jay.getData();
    cout<<jay.marks;
    return 0;
}