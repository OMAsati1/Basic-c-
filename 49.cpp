#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public :
    // test(int i, int j):a(i),b(j)
    // test(int i, int j):a(i),b(j+i)
    // test(int i, int j):a(i),b(j+b)
    // test(int i, int j):b(j),a(i+b)
     /*this will garbage value for for a because will intialize first*/
    test(int i, int j):a(i)
     
    {
        b=j;
       cout<<"constructor executed"<<endl;
       cout<<"THe value of a is: "<<a<<endl;
       cout<<"THe value of b is: "<<b<<endl;
    }
};
int main(){
    test t(6,8);
    
    return 0;
}