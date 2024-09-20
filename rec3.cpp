// #include <iostream>
// using namespace std;
// void print(int n)
// {
//     int s = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         s = s + i;
//     }

//     cout << s;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     print(n);
//     return 0;
// }
// .......................................................................................
// #include <iostream>
// using namespace std;
// int sum(int n)
// {
//     if (n == 1)
//         return 1;
//     return n + sum(n - 1);
// }
// int main()
// {
// int n ;
// cout<<"enter n: ";
// cin>>n;
//     cout <<sum(n)<< endl;
//     return 0;
// }
//........................................................................................
// #include <iostream>
// using namespace std;
// int sum(int n)
// {
//     if (n > 100)
//         return 0;
//     return n + sum(n + 1);
// }
// int main()
// {
//     int n = 50;

//     cout << sum(n) << endl;
//     return 0;
// }
//.......................................................................................
// #include <iostream>
// using namespace std;
// int fact(int n)
// {
//     if (n == 1)
//         return 1;
//     return n * fact(n - 1);
// }
// int main()
// {
// int n ;
// cout<<"enter n: ";
// cin>>n;
//     cout <<fact(n)<< endl;
//     return 0;
// }
//........................................................................................
// #include <iostream>
// using namespace std;
// int power(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     return a * power(a,b - 1);
// }
// int main()
// {
// int a,b ;
// cout<<"enter base: ";
// cin>>a;
// cout<<"enter power: ";
// cin>>b;
//     cout <<power(a,b)<< endl;
//     return 0;
// }
//.........................................................................................
#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 1) return 0;
    if (n == 2 || n == 3)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}