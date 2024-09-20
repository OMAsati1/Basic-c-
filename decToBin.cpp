// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int ans = 0;
// //     int mul = 1;
// //     while (n > 0)
// //     {
// //         int rem = n % 2;
// //         ans += rem * mul;
// //         mul *= 10;
// //         n/=2;
// //     }

// //     cout << ans << endl;
// //     return 0;
// // }

// #include <iostream>

// using namespace std;

// int main()
// {

//     int n;

//     cin >> n;

//     int ans = 0;

//     int mul = 1;

//     while (n != 0)
//     {

//         int bit = n & 1;

//         ans = ans + bit * mul;

//         n = n >> 1;

//         mul *= 10;
//     }
//     cout << "Answer is " << ans << endl;
// }
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    float ans = 0;

    int i = 0;

    while (n != 0)
    {

        int bit = n & 1;

        ans = ans + bit * pow(10, i);

        n = n >> 1;

        i++;
    }
    cout << "Answer is " << ans << endl;
}