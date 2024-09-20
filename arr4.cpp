#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>v(5);
    cout<<"enter the input of array: ";
    for (int i = 0; i <5; i++)
    {
        cin>>v[i];
    }
 for (int i = 0; i <5; i++)
    {
cout<<v[i]<<" ";
        
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for (int i = 0; i <5; i++)
    {
cout<<v[i]<<" ";
        
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for (int i = 0; i <5; i++)
    {
cout<<v[i]<<" ";
        
    }
    return 0;
}