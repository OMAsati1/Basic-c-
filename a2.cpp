#include <iostream>
using namespace std;

int main()
{
       
     int r[]={3,5,6,7,8};
       int sum = 0;
       int product = 1;
         for (int j = 0; j<= 4; j++)
         { cout<<r[j]<<" ";
     sum += r[j];
     product *=r[j];
     } 
     cout<<"\nThe sum of the entities of array is:"<<endl;
     cout<<sum<<endl;
     cout<<"\nThe product of the entities of array is:"<<endl;
     cout<<product;
     return 0;
}