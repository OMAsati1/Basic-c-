#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {33, 6, 234, 16, 90, 62, 32};
    for (int i = 0; i < 7; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr,arr+7);
    for (int i = 0; i < 7; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr,arr+7,greater<int>());
    for (int i = 0; i < 7; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}