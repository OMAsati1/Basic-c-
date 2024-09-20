#include<iostream>
using namespace std;

int main(){
    // Arrays
    int marks[4]= {33,43,67,89};
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
for (int i = 0; i < 4; i++)
{
    /* code */
    cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
}
/*pointers and arrays*/
cout<<"\n";
int*p=marks;
cout<<&marks[0]<<endl;
cout<<marks<<endl; // by default print address of marks[0]
cout<<&marks<<endl; // by default print address of marks[0]
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

// cout<<"the value of marks [0] is "<<*(p)<<endl;
// cout<<"the value of marks [1] is "<<*(p+1)<<endl;
// cout<<"the value of marks [2] is "<<*(p+2)<<endl;
// cout<<"the value of marks [3] is "<<*(p+3)<<endl;
//     return 0;
}