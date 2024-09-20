#include <iostream>
#include <climits>
using namespace std;

int main()
{

  int r[] = {3, 5, 6, 7, 8, 40, 34, 56, 2, 67};
  // int mn = r[0];
  int mn = INT_MAX;
  int mx = INT_MIN;
  int smx = INT_MIN;

  for (int j = 0; j <= 9; j++)
  {
    // { if (mx<r[j])
    // mx = r[j];
    // or
    mn = min(mn, r[j]);
    mx = max(mx, r[j]);
  }
  for (int i = 0; i <= 9; i++)
  {

    if (smx < r[i] && r[i] != mx)
      smx = r[i];
  }
  for (int i = 0; i < 10; i++)
  {
    
  cout<<r[i]<<" ";
  }
  cout<<endl;
  cout << "minimum entity: ";
  cout << mn << endl;
  cout << "maximum entity: ";
  cout << mx << endl;
  cout << "second maximum entity: ";
  cout << smx;
  return 0;
}