#include <iostream>
using namespace std;

int main()
{
    //     int arr[5];
    //      arr[0]=3;
    //      arr[1]=2;
    //      arr[2]=9;
    //      arr[3]=4;
    //      arr[4]=7;
    //     for (int i = 0; i <= 4; i++)
    //     {

    //         cin>>arr[i];

    //     }
    //     }
    // 
    int a;
    cout<<"enter size of array: ";
    cin>>a;
    int r[a]; 
    cout<<"enter inputs of array: "<<endl;
    for (int i = 0; i <a; i++)
    {
    cin>>r[i]; 
    }
    for (int i = 0; i <a; i++)
    {
       cout<<r[i]<<" ";
    }    
    return 0;
}