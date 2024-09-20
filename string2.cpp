#include <iostream>
using namespace std;

int main()
{
    string s = "raghav";
    cout << s << " " << s.length() << endl;
    s = s + " garg";
    cout << s << " " << s.length() << endl;
    s.clear();
    cout<<s<<" "<<s.length()<<endl;
     s.append(" garg");
    cout<<s<<endl;
    cout<<s<<endl;
    s.push_back('a');
    s.pop_back();
    cout<<s<<endl;
    return 0;
}