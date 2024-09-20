#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void check(void);
};
void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
    cout << s << " ";
}
void binary ::check(void) 
{
    int i;
    for ( i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Is a incorrect binary format" << endl;
            break;
        }
    } 
         if (i==s.length()) {
            cout<<",this is correct binary format"<<endl;
            
        }
}

int main()
{
    binary b;
    b.read();   
    b.check();

    return 0;
}