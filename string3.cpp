#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "raghav";
    cout << s << endl;
    int n = s.size();
    // int i = 0;
    // int j = n - 1;
    // while (i < j)
    // {
    //     int temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    // cout << s << endl;
    // reverse(s.begin(), s.end());
    // cout << s << endl;
    /*now reverse only first half*/
    // reverse(s.begin(), s.begin()+n/2);
    // cout << s << endl;
    reverse(s.begin()+2, s.begin()+5);
    cout << s << endl;

    return 0;
}