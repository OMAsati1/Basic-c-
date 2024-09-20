#include<iostream>
using namespace std;

int main(){
    cout<<"Enter any binary number"<<endl;
    string s;
    cin>>s;
    cout<<"Displaying your binary number"<<endl;

     for (int i = 0; i < s.length(); i++)
        if (s[i] != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
        return 1;
        }
    cout<<s;
    cout<<'\n';
    cout<<"Displaying your 1's compliment of your binary number"<<endl;
for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout<<s;
    cout<<'\n';
        cout<<"Displaying your 2's compliment of your binary number"<<endl;


int carry = 1;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '1' && carry == 1) {
            s[i] = '0';
        } else {
            s[i] = (s[i]   + carry)  ;
            carry = 0;
            break;
        }
    }
  
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    return 0;
}