#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample62.txt");
    out<<"This is me \n";
    out<<"This is heaven \n";
    out<<"This is hell \n";
    out<<"This is phone";
    out.close();

    ifstream in;
    string st;
    in.open("sample62.txt");
    // in>>st1>>st2;
    // cout<<st1<<st2;
    while (in.eof()==0)
    {
        getline(in,st);
    cout<<st;
    }
    
    in.close();
    return 0;
}