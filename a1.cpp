#include <iostream>
using namespace std;
// int pos(int r[], int mn)
// {
//   for (int j = 0; j < 10; j++)
//   {
//     if (r[j] == mn)
//     {
//       return j;
//     }
//   }
//     return -1;
// }
int main()
{
  //    int n;
  //    cout<<"size of array: ";
  //    cin>>n;
  //    int r[n];
  //    for ( int i = 0; i<n; i++)
  //    {
  //    cin>>r[i];
  //    }
  //    for (int i = 0; i<n; i++)
  //    {
  //    cout<<r[i]<<" ";
  //    }
  // int r[]={3,5,6,7,8};
  //   int sum = 0;
  //     for (int j = 0; j<= 4; j++)
  //     {
  // }
  // sum += r[j];
  // cout<<sum;

  int r[] = {3, 5, 6, 7, 8, 40, 34, 56, 2, 67};
  int mn = r[0];
  for (int j = 0; j <= 9; j++)
  {
    // { if (mx<r[j])
    // mx = r[j];
    // or
    mn = min(mn, r[j]);
  }
  cout << mn << endl;
  // cout << pos(r, mn);
  for (int j = 0; j < 10; j++)
  {
    if (r[j] == mn)
    {
    cout<<j;
    }
  }
    
}

  
