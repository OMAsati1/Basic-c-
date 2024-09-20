#include<iostream>
using namespace std;
//Destructor never takes any argument nor does it return any value
    int count=0;
class num{
    public :
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor is called for object number "<<count<<endl;
       count--;
    }
};
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num x;
    {
    cout<<"entering this block"<<endl;
    cout<<"Creating two more objects"<<endl;
    num y,z;
    cout<<"exiting this block"<<endl;
    }
cout<<"Back to main"<<endl;
    return 0;
}