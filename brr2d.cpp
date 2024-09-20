#include <iostream>
using namespace std;

int main()
{
//     int arr[2][3];
//     arr[0][0] = 6;
//     arr[0][1] = 9;
//     arr[0][2] = 3;
//     arr[1][0] = 5;
//     arr[1][1] = 12;
//     arr[1][2] = 8;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//     cout << endl;
//     }
// cout << endl;

// for (int j = 0; j < 3; j++)
//     {
//         for (int i = 0; i < 2; i++)
//         {
//             cout << arr[i][j] << " ";
//         }
//     cout << endl;
//     }
 int arr[4][2]={{54,76},{43,87},{73,98},{55,64}};
  for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
    cout << endl;
    }
cout << endl;
for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << arr[i][j] << " ";
        }
    cout << endl;
    }
    return 0;
}