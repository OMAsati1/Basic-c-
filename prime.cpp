 // #include <iostream>
 // using namespace std
 // int main()
 // {
     // int n;
     // bool x = true;
     // cout << "Enter a number: ";
     // cin >> n;
     // for (int i = 2; i <= n / 2; i++)
     // {
     //     if (n % i == 0)
     //     {
     //         x = false;
     //         break;
     //     }
     // 
     // if (x == true)
     // {
     //     cout << n << " is a prime number";
     // }
     // else if (n == 1)
     // {
     //     cout << n << " Neither prime nor composite";
     // 
     // else
     // {
     //     cout << n << " is a composite number";
     // }
 //      return 0;
 // }
//....................................................................................
 // #include <iostream>
 // #include <cmath
 // using namespace std
 // bool isPrime(int num) {
 //     if (num <= 1) {
 //         return false;
 //     }
 //     for (int i = 2; i  <= sqrt(num); i++) {
 //         if (num % i == 0) {
 //             return false;
 //         }
 //     }
 //     return true;
 // 
 // int main() {
 //     cout << "Prime numbers from 50 up to 100 are:" << endl;
 //     for (int j = 50; j <= 100; j++) {
 //         if (isPrime(j)) {
 //             cout << j << " ";
 //         }
 //     }
 //     cout << endl;
 //     return 0;
 //   }
//...........................................................................................
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     cout << "Prime numbers between 50 and 100 are: ";
//     for (int num = 50; num <= 100; num++) {
//         bool isPrime = true;
//         if (num <= 1) {
//             isPrime = false;
//         } else {
//             for (int i = 2; i <= sqrt(num); i++) {
//                 if (num % i == 0) {
//                     isPrime = false;
//                     break;
//                 }
//             }
//         }
//         if (isPrime) {
//             cout << num << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,m,num;
    cout<<"Enter the range within which you want to print prime numbers: ";
    cin>>n>>m;
    cout<<"The prime numbers from "<<n<<" to "<<m<<" are: ";
    for ( num = n; num <= m; num++)
    {
    bool prime = true;
        if (num<=1)
        {
            prime = false;
        }
        else
        {
            for (int i = 2; i <=sqrt(num) ; i++)
            {
                if (num % i==0)
                {
                    prime = false;
                    break;
                }
                
            }
            
        }
       if (prime)
       {
        cout<<num<<" ";
       }
        
        
    }
   cout<<endl; 
    return 0;
}