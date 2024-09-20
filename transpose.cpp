#include<iostream>
using namespace std;

int main(){
    int r [2][3]={21,54,56,35,89,67};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++)
        {
           cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}