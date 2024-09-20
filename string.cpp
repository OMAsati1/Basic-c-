// #include <iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cout << "Enter a string" << endl;
//     // cin>>s;
//     getline(cin, s);
//     cout << s<<endl;
//     cout<<s[3];
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     string s = "rohit sharma";

//     cout << s << endl;
//     s[0] = 'm';
//     s[6] = 'd';
//     cout << s << endl;
//     cout << s[3]<<endl;
//     cout<<s.length()<<endl;
//     cout<<s.size();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     string s = "rohit sharma is the captain of indian cricket team";

//     cout << s << endl;
//     int count = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//         {
//             count++;
//         }
//     }
//     cout << count;
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    string s = "rohit sharma is the captain of indian cricket team";

    cout << s << endl;
    int count = 0;
    int n=  s.length();
    for (int i = 0; i <n; i++)
             {
        if (i%2==0)
        {
            s[i]='a';
        }
    }
    cout << s;
    return 0;
}