#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream hout("sample61.txt");
    cout<<"Enter your name: ";
    string name;
    getline(cin,name);
    hout<<"My name is "+name;
    hout.close();

    ifstream hin("sample61.txt");
    string content;
    getline(hin,content);
    cout<<"The content of this file is: "<<content;
    return 0;
}