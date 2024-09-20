#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st ="om asati";
    // opening file using constructors and writing to it
    ofstream out("smaple59.txt"); // write operation
    out<<st;

    string st2;
    // opening file using constructors and reading from it
    ifstream in("smaple59b.txt"); // read operation
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}