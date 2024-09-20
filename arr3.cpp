#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    // cout<<"enter the size of array: ";
    // cin>>n;
    vector<int>r(n,6);
    // int r[n];
    // cout<<"enter the input of array: ";
    // for (int i = 0; i <n; i++)
    // {
    //     cin>>r[i];
    // }
    for (int i = 0; i <n; i++)
    {
cout<<r[i]<<" ";
        
    }
    cout<<endl;
    cout<<r.size()<<endl;
    cout<<r.capacity()<<endl;
    // r.push_back(9);
    r.pop_back();
    cout<<r.size()<<endl;
    cout<<r.capacity()<<endl;
    return 0;
}